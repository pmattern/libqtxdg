/* BEGIN_COMMON_COPYRIGHT_HEADER
 * (c)LGPL2+
 *
 * Razor - a lightweight, Qt based, desktop toolset
 * http://razor-qt.org
 *
 * Copyright: 2010-2011 Razor team
 * Authors:
 *   Alexander Sokoloff <sokoloff.a@gmail.com>
 *
 * This program or library is free software; you can redistribute it
 * and/or modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.

 * You should have received a copy of the GNU Lesser General
 * Public License along with this library; if not, write to the
 * Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301 USA
 *
 * END_COMMON_COPYRIGHT_HEADER */

#ifndef QTXDG_XDGICON_H
#define QTXDG_XDGICON_H

#include "xdgmacros.h"
#include <QtGui/QIcon>
#include <QString>
#include <QStringList>

class QTXDG_API XdgIcon
{
public:
    static QIcon fromTheme(const QString& iconName, const QIcon& fallback = QIcon());
    static QIcon fromTheme(const QString& iconName,
                           const QString &fallbackIcon1,
                           const QString &fallbackIcon2 = QString(),
                           const QString &fallbackIcon3 = QString(),
                           const QString &fallbackIcon4 = QString());
    static QIcon fromTheme(const QStringList& iconNames, const QIcon& fallback = QIcon());

    static QString themeName();
    static void setThemeName(const QString& themeName);

    static QIcon defaultApplicationIcon();
    static QString defaultApplicationIconName();

protected:
    explicit XdgIcon();
    virtual ~XdgIcon();
private:

};

#endif // QTXDG_XDGICON_H
