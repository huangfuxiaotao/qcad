// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #ifndef RECMAMEMORYSTORAGE_H
        #define RECMAMEMORYSTORAGE_H

        #include "ecmaapi_global.h"

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "RMemoryStorage.h"
            

        /**
         * \ingroup scripting_ecmaapi
         */
        class QCADECMAAPI_EXPORT REcmaMemoryStorage {

        public:
      static  void init(QScriptEngine& engine, QScriptValue* proto 
    =NULL
    ) 
    ;static  QScriptValue create(QScriptContext* context, QScriptEngine* engine) 
    ;

    // conversion functions for base classes:
    static  QScriptValue getRStorage(QScriptContext *context,
            QScriptEngine *engine)
        ;static  QScriptValue getRRequireHeap(QScriptContext *context,
            QScriptEngine *engine)
        ;

    // returns class name:
    static  QScriptValue getClassName(QScriptContext *context, QScriptEngine *engine) 
        ;

    // returns all base classes (in case of multiple inheritance):
    static  QScriptValue getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        ;

    // properties:
    

    // public methods:
    static  QScriptValue
        clear
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setCurrentBlock
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        beginTransaction
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        commitTransaction
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        rollbackTransaction
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryAllObjects
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryAllEntities
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryAllUcs
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryAllLayers
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryAllBlocks
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryAllViews
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryAllLinetypes
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryInfiniteEntities
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        querySelectedEntities
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryLayerEntities
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryBlockEntities
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryChildEntities
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        hasChildEntities
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryBlockReferences
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryAllBlockReferences
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryObject
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryObjectByHandle
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryEntity
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryLayer
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryBlock
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryView
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryUcs
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryLinetype
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        clearEntitySelection
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        selectAllEntites
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        selectEntity
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        deselectEntity
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        selectEntities
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        deselectEntities
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setEntitySelected
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isSelected
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        hasSelection
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getBoundingBox
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getSelectionBox
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        removeObject
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        saveObject
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        checkRecursion
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        deleteObject
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        saveTransaction
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        deleteTransactionsFrom
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getTransaction
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        resetTransactionStack
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        toggleUndoStatus
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setUndoStatus
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getMaxTransactionId
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getVariables
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setVariable
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getVariable
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setKnownVariable
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getKnownVariable
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLayerName
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLayerNames
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLayerId
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getBlockName
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getBlockNames
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getBlockId
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getViewName
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getViewNames
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getViewId
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLinetypeName
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLinetypeNames
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLinetypeId
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryObjectDirect
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryEntityDirect
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryUcsDirect
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryLayerDirect
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryBlockDirect
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setLastTransactionId
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getMaxLineweight
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setUnit
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getUnit
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setLinetypeScale
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLinetypeScale
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue toString
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue destroy(QScriptContext *context, QScriptEngine *engine)
    ;static RMemoryStorage* getSelf(const QString& fName, QScriptContext* context)
    ;static RMemoryStorage* getSelfShell(const QString& fName, QScriptContext* context)
    ;};
    #endif
    