/****************************************************************************
**
** Copyright (C) 2018 The Qt Company Ltd.
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

#ifndef QDECLARATIVEMAPROUTEDELEGATE_P_H
#define QDECLARATIVEMAPROUTEDELEGATE_P_H

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
#include <QtQml/qqml.h>

#include <QtLocation/private/qgeomapobject_p.h>
#include <QtLocation/private/qparameterizableobject_p.h>

Q_MOC_INCLUDE(<QtLocation/private/qdeclarativegeoroute_p.h>)

QT_BEGIN_NAMESPACE

class QDeclarativeGeoRoute;
class QGeoRoute;
class QMapRouteObjectPrivate;
class Q_LOCATION_PRIVATE_EXPORT QMapRouteObject : public QGeoMapObject
{
    Q_OBJECT
    Q_PROPERTY(QDeclarativeGeoRoute *route READ route WRITE setRoute NOTIFY routeChanged)

public:
    explicit QMapRouteObject(QObject *parent = nullptr);
    ~QMapRouteObject() override;

    QDeclarativeGeoRoute *route() const;
    QGeoRoute geoRoute() const;

    void setMap(QGeoMap *map) override;
    void setRoute(QDeclarativeGeoRoute * route);

signals:
    void routeChanged(QDeclarativeGeoRoute * route);

protected:
    QDeclarativeGeoRoute *m_route = nullptr;

    friend class QMapRouteObjectPrivate;
};

QT_END_NAMESPACE

QML_DECLARE_TYPE(QMapRouteObject)

#endif // QDECLARATIVEMAPROUTEDELEGATE_P_H
