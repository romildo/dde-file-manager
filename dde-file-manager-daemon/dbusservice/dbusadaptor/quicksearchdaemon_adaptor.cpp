/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -i quicksearch/quicksearchdaemon.h -c QuickSearchDaemonAdaptor -a dbusadaptor/quicksearchdaemon_adaptor quicksearchdaemon.xml
 *
 * qdbusxml2cpp is Copyright (C) 2016 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "dbusadaptor/quicksearchdaemon_adaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class QuickSearchDaemonAdaptor
 */

QuickSearchDaemonAdaptor::QuickSearchDaemonAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

QuickSearchDaemonAdaptor::~QuickSearchDaemonAdaptor()
{
    // destructor
}

void QuickSearchDaemonAdaptor::createCache()
{
    // handle method call com.deepin.filemanager.daemon.QuickSearchDaemon.createCache
    QMetaObject::invokeMethod(parent(), "createCache");
}

QDBusVariant QuickSearchDaemonAdaptor::search(const QDBusVariant &current_dir, const QDBusVariant &key_words)
{
    // handle method call com.deepin.filemanager.daemon.QuickSearchDaemon.search
    QDBusVariant result;
    QMetaObject::invokeMethod(parent(), "search", Q_RETURN_ARG(QDBusVariant, result), Q_ARG(QDBusVariant, current_dir), Q_ARG(QDBusVariant, key_words));
    return result;
}

QDBusVariant QuickSearchDaemonAdaptor::whetherCacheCompletely()
{
    // handle method call com.deepin.filemanager.daemon.QuickSearchDaemon.whetherCacheCompletely
    QDBusVariant result;
    QMetaObject::invokeMethod(parent(), "whetherCacheCompletely", Q_RETURN_ARG(QDBusVariant, result));
    return result;
}

