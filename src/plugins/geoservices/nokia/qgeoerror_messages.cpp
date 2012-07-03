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
** This file is part of the Ovi services plugin for the Maps and
** Navigation API.  The use of these services, whether by use of the
** plugin or by other means, is governed by the terms and conditions
** described by the file OVI_SERVICES_TERMS_AND_CONDITIONS.txt in
** this package, located in the directory containing the Ovi services
** plugin source code.
**
****************************************************************************/

#include "qgeoerror_messages.h"

QT_BEGIN_NAMESPACE

const char NOKIA_PLUGIN_CONTEXT_NAME[] = "QtLocationQML";
const char MISSED_CREDENTIALS[] = QT_TRANSLATE_NOOP("QtLocationQML", "Qt Location requires app_id and token parameters.\nPlease register at https://api.developer.nokia.com/ to get your personal application credentials.");
const char SAVING_PLACE_NOT_SUPPORTED[] = QT_TRANSLATE_NOOP("QtLocationQML", "Saving places is not supported.");
const char REMOVING_PLACE_NOT_SUPPORTED[] = QT_TRANSLATE_NOOP("QtLocationQML", "Removing places is not supported.");
const char SAVING_CATEGORY_NOT_SUPPORTED[] = QT_TRANSLATE_NOOP("QtLocationQML", "Saving categories is not supported.");
const char REMOVING_CATEGORY_NOT_SUPPORTED[] = QT_TRANSLATE_NOOP("QtLocationQML", "Removing categories is not supported.");
const char PARSE_ERROR[] = QT_TRANSLATE_NOOP("QtLocationQML", "Error parsing response.");
const char NETWORK_ERROR[] = QT_TRANSLATE_NOOP("QtLocationQML", "Network error.");
const char CANCEL_ERROR[] = QT_TRANSLATE_NOOP("QtLocationQML", "Request was canceled.");

QT_END_NAMESPACE