#ifndef QTSCRIPTSHELL_QGESTURE_H
#define QTSCRIPTSHELL_QGESTURE_H

#include <qgesture.h>

#include <QtScript/qscriptvalue.h>

class QtScriptShell_QGesture : public QGesture
{
public:
    QtScriptShell_QGesture(QObject*  parent = 0);
    ~QtScriptShell_QGesture();

    void childEvent(QChildEvent*  arg__1);
    void customEvent(QEvent*  arg__1);
    bool  event(QEvent*  arg__1);
    bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
    void timerEvent(QTimerEvent*  arg__1);

    QScriptValue __qtscript_self;
};

#endif // QTSCRIPTSHELL_QGESTURE_H
