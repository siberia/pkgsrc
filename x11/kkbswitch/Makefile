# $NetBSD: Makefile,v 1.36 2013/05/09 07:40:46 adam Exp $
#

DISTNAME=		kkbswitch-1.4.3
PKGREVISION=		25
CATEGORIES=		kde x11
MASTER_SITES=		${MASTER_SITE_SOURCEFORGE:=kkbswitch/}

MAINTAINER=		ianzag@mail.ru
HOMEPAGE=		http://kkbswitch.sourceforge.net/
COMMENT=		Keyboard layout indicator for KDE 2 or 3

USE_TOOLS+=		gmake
USE_LANGUAGES=		c c++
USE_LIBTOOL=		YES
GNU_CONFIGURE=		YES

CONFIGURE_ARGS+=	--disable-ru-ua-layout

.include "../../meta-pkgs/kde3/kde3.mk"
.include "../../x11/kdelibs3/buildlink3.mk"
.include "../../x11/libSM/buildlink3.mk"
.include "../../x11/libX11/buildlink3.mk"
.include "../../x11/libXt/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
