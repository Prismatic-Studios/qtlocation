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

#ifndef QGEOMAP_NOKIA_H
#define QGEOMAP_NOKIA_H

#include "qgeotiledmap_p.h"
#include <QtGui/QImage>
#include <QtCore/QPointer>
#ifdef LOCATIONLABS
#include <QtLocation/private/qgeotiledmaplabs_p.h>
typedef QGeoTiledMapLabs Map;
#else
typedef QGeoTiledMap Map;
#endif

QT_BEGIN_NAMESPACE

class QGeoTiledMappingManagerEngineNokia;

class QGeoTiledMapNokia: public Map
{
Q_OBJECT
public:
    QGeoTiledMapNokia(QGeoTiledMappingManagerEngineNokia *engine, QObject *parent = 0);
    ~QGeoTiledMapNokia();

    QString getViewCopyright();
    void evaluateCopyrights(const QSet<QGeoTileSpec> &visibleTiles) override;

private:
    QImage m_logo;
    QImage m_copyrightsSlab;
    QString m_lastCopyrightsString;
    QPointer<QGeoTiledMappingManagerEngineNokia> m_engine;

    Q_DISABLE_COPY(QGeoTiledMapNokia)
};

QT_END_NAMESPACE

#endif // QGEOMAP_NOKIA_H
