# $NetBSD: Makefile,v 1.26 2013/02/16 11:18:28 wiz Exp $

.include "../../meta-pkgs/xfce4/Makefile.common"

XFCE4_VERSION=	0.5.1

DISTNAME=	xfce4-battery-plugin-${XFCE4_VERSION}
PKGREVISION=	17
CATEGORIES=	sysutils
MASTER_SITES=	http://goodies.xfce.org/releases/xfce4-battery-plugin/
COMMENT=	Xfce battey monitor plugin

# On NetBSD/sparc64, apmvar.h is not exist in /usr/include/machine.
# Reported in PR port-sparc64/36735.
.if ${OPSYS} == "NetBSD" &&			\
    (!exists(/usr/include/machine/apmvar.h) &&	\
     !exists(/usr/include/dev/apm/apmio.h) && \
     !exists(/usr/include/sparc/apmio.h))
PKG_FAIL_REASON+=	"APM is not available on ${MACHINE_PLATFORM}."
.endif

USE_TOOLS+=	perl:run

.include "../../graphics/hicolor-icon-theme/buildlink3.mk"
.include "../../x11/xfce4-panel/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
