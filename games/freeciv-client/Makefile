# $NetBSD: Makefile,v 1.60 2013/02/16 11:21:17 wiz Exp $

PKGNAME=	${DISTNAME:S/-/-client-/}
PKGREVISION=	4
COMMENT=	Freeciv client

DEPENDS+=	freeciv-share>=${FC_VERS}:../../games/freeciv-share

CONFLICTS=	freeciv-client-gtk<=1.11.4

USE_TOOLS+=		pkg-config
CONFIGURE_ARGS+=	--disable-make-data
CONFIGURE_ARGS+=	--disable-server

.include "../../games/freeciv-share/suppress_installation.mk"

.include "../../games/freeciv-share/Makefile.common"

.include "options.mk"

.include "../../audio/esound/buildlink3.mk"
.include "../../graphics/freetype2/buildlink3.mk"
.include "../../graphics/png/buildlink3.mk"
.include "../../x11/libXpm/buildlink3.mk"
.include "../../sysutils/desktop-file-utils/desktopdb.mk"
.include "../../mk/bsd.pkg.mk"
