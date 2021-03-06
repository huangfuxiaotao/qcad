/**
 * Copyright (c) 2011-2018 by Andrew Mustun. All rights reserved.
 * 
 * This file is part of the QCAD project.
 *
 * QCAD is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * QCAD is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with QCAD.
 */

include("../Select.js");

/**
 * \class SelectContour
 * \ingroup ecma_select
 * \brief Select connected entities.
 */
function SelectContour(guiAction) {
    Select.call(this, guiAction);

    this.tolerance = 0.0;

    this.setUiOptions("SelectContour.ui");
}

SelectContour.prototype = new Select();

SelectContour.State = {
    ChoosingEntity : 0
};

SelectContour.prototype.beginEvent = function() {
    Select.prototype.beginEvent.call(this);

    this.setState(SelectContour.State.ChoosingEntity);
};

SelectContour.prototype.setState = function(state) {
    var di = this.getDocumentInterface();
    di.setClickMode(RAction.PickEntity);
    this.setCrosshairCursor();

    var appWin = RMainWindowQt.getMainWindow();
    this.setLeftMouseTip(qsTr("Choose entity of contour"));
    this.setRightMouseTip(EAction.trCancel);
};

SelectContour.prototype.entityPickEvent = function(event) {
    this.selectEntities(this.getEntityId(event, false));
};

SelectContour.prototype.selectEntities = function(entityId) {
    var matchingEntities = SelectContour.getConnectedEntities(this.getDocument(), entityId, this.tolerance);
    this.selectWithMode(matchingEntities);
};

SelectContour.prototype.entityPickEventPreview = function(event) {
    var di = this.getDocumentInterface();
    var id = this.getEntityId(event, true);
    di.highlightEntity(id);
};

SelectContour.prototype.slotToleranceChanged = function(value) {
    this.tolerance = value;
};

/**
 * \return Array of entity IDs of entities which are directly or indirectly
 * connected to the given entity, including the given entityId.
 */
SelectContour.getConnectedEntities = function(doc, entityId, tolerance) {
    return doc.queryConnectedEntities(entityId, tolerance);
};
