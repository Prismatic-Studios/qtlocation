/****************************************************************************
**
** Copyright (C) 2012 Nokia Corporation and/or its subsidiary(-ies).
** Contact: http://www.qt-project.org/
**
** This file is part of the QtLocation module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** GNU Lesser General Public License Usage
** This file may be used under the terms of the GNU Lesser General Public
** License version 2.1 as published by the Free Software Foundation and
** appearing in the file LICENSE.LGPL included in the packaging of this
** file. Please review the following information to ensure the GNU Lesser
** General Public License version 2.1 requirements will be met:
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights. These rights are described in the Nokia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU General
** Public License version 3.0 as published by the Free Software Foundation
** and appearing in the file LICENSE.GPL included in the packaging of this
** file. Please review the following information to ensure the GNU General
** Public License version 3.0 requirements will be met:
** http://www.gnu.org/copyleft/gpl.html.
**
** Other Usage
** Alternatively, this file may be used in accordance with the terms and
** conditions contained in a signed written agreement between you and Nokia.
**
**
**
**
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

#ifndef QDECLARATIVERECOMMENDATIONMODEL_P_H
#define QDECLARATIVERECOMMENDATIONMODEL_P_H

#include <QtQml/QQmlParserStatus>
#include "qdeclarativeresultmodelbase_p.h"

QT_BEGIN_NAMESPACE

class QDeclarativeRecommendationModel : public QDeclarativeResultModelBase
{
    Q_OBJECT

    Q_PROPERTY(QString placeId READ placeId WRITE setPlaceId NOTIFY placeIdChanged)
    Q_INTERFACES(QQmlParserStatus)

public:
    explicit QDeclarativeRecommendationModel(QObject *parent = 0);
    ~QDeclarativeRecommendationModel();

    QString placeId() const;
    void setPlaceId(const QString &placeId);

signals:
    void placeIdChanged();

protected:
    QPlaceReply *sendQuery(QPlaceManager *manager, const QPlaceSearchRequest &request);

private:
    QString m_placeId;
};

QT_END_NAMESPACE

#endif // QDECLARATIVERECOMMENDATIONMODEL_P_H
