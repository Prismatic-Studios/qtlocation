/****************************************************************************
**
** Copyright (C) 2015 The Qt Company Ltd.
** Contact: https://www.qt.io/licensing/
**
** This file is part of the QtLocation module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see https://www.qt.io/terms-conditions. For further
** information use the contact form at https://www.qt.io/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 3 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL3 included in the
** packaging of this file. Please review the following information to
** ensure the GNU Lesser General Public License version 3 requirements
** will be met: https://www.gnu.org/licenses/lgpl-3.0.html.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 2.0 or (at your option) the GNU General
** Public license version 3 or any later version approved by the KDE Free
** Qt Foundation. The licenses are as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL2 and LICENSE.GPL3
** included in the packaging of this file. Please review the following
** information to ensure the GNU General Public License requirements will
** be met: https://www.gnu.org/licenses/gpl-2.0.html and
** https://www.gnu.org/licenses/gpl-3.0.html.
**
** $QT_END_LICENSE$
**
****************************************************************************/

#ifndef QDECLARATIVEPLACEICON_P_H
#define QDECLARATIVEPLACEICON_P_H

//
//  W A R N I N G
//  -------------
//
// This file is not part of the Qt API.  It exists purely as an
// implementation detail.  This header file may change from version to
// version without notice, or even be removed.
//
// We mean it.
//

#include <QtLocation/private/qlocationglobal_p.h>
#include <QtLocation/private/qdeclarativegeoserviceprovider_p.h>

#include <QtLocation/qplaceicon.h>
#include <QtQml/qqml.h>
#include <QtQml/QQmlPropertyMap>

#include <QObject>

QT_BEGIN_NAMESPACE

class QQmlPropertyMap;

class Q_LOCATION_PRIVATE_EXPORT QDeclarativePlaceIcon : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QPlaceIcon icon READ icon WRITE setIcon)
    Q_PROPERTY(QObject *parameters READ parameters NOTIFY parametersChanged)
    Q_PROPERTY(QDeclarativeGeoServiceProvider *plugin READ plugin WRITE setPlugin NOTIFY pluginChanged)

public:
    explicit QDeclarativePlaceIcon(QObject *parent = 0);
    QDeclarativePlaceIcon(const QPlaceIcon &src, QDeclarativeGeoServiceProvider *plugin, QObject *parent = 0);
    ~QDeclarativePlaceIcon();

    QPlaceIcon icon() const;
    void setIcon(const QPlaceIcon &src);

    Q_INVOKABLE QUrl url(const QSize &size = QSize()) const;

    QQmlPropertyMap *parameters() const;

    void setPlugin(QDeclarativeGeoServiceProvider *plugin);
    QDeclarativeGeoServiceProvider *plugin() const;

Q_SIGNALS:
    void pluginChanged();
    void parametersChanged(); //in practice is never emitted since parameters cannot be re-assigned
                              //the declaration is needed to avoid warnings about non-notifyable properties

private Q_SLOTS:
    void pluginReady();

private:
    QPlaceManager *manager() const;
    void initParameters(const QVariantMap &parameterMap);
    QDeclarativeGeoServiceProvider *m_plugin;
    QQmlPropertyMap *m_parameters;
};

QT_END_NAMESPACE

#endif
