# $NetBSD: Makefile,v 1.17 2012/10/06 11:54:36 asau Exp $
#

DISTNAME=		exult-1.2
PKGREVISION=		8
CATEGORIES=		games
MASTER_SITES=		${MASTER_SITE_SOURCEFORGE:=exult/}

MAINTAINER=		pkgsrc-users@NetBSD.org
HOMEPAGE=		http://exult.sourceforge.net/
COMMENT=		Open-source Ultima 7 engine

MAKE_JOBS_SAFE=		no

USE_PKGLOCALEDIR=	yes
USE_LANGUAGES=		c c++
USE_TOOLS+=		yacc
USE_LIBTOOL=		yes
GNU_CONFIGURE=		yes

.include "../../devel/SDL/buildlink3.mk"
.include "../../audio/SDL_mixer/buildlink3.mk"
.include "../../graphics/freetype2/buildlink3.mk"
.include "../../sysutils/desktop-file-utils/desktopdb.mk"
.include "../../mk/bsd.pkg.mk"
