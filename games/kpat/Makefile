# $NetBSD: Makefile,v 1.3 2013/05/21 12:49:31 markd Exp $

DISTNAME=	kpat-${_KDE_VERSION}
CATEGORIES=	games
COMMENT=	a multiplicity of different solitaire games

.include "../../meta-pkgs/kde4/Makefile.kde4"

.include "../../meta-pkgs/kde4/kde4.mk"

.include "../../games/libkdegames/buildlink3.mk"
.include "../../graphics/hicolor-icon-theme/buildlink3.mk"
.include "../../sysutils/desktop-file-utils/desktopdb.mk"
.include "../../x11/kdelibs4/buildlink3.mk"

.include "../../mk/bsd.pkg.mk"
