# $NetBSD: Makefile,v 1.39 2013/02/16 11:23:14 wiz Exp $
#

DISTNAME=		gkrellmoon-0.6
PKGNAME=		gkrellm-moon-0.6
PKGREVISION=		22
CATEGORIES=		misc
MASTER_SITES=		${MASTER_SITE_SOURCEFORGE:=gkrellmoon/}

MAINTAINER=		pkgsrc-users@NetBSD.org
HOMEPAGE=		http://gkrellmoon.sourceforge.net/
COMMENT=		GKrellM2 moonclock plugin

USE_TOOLS+=		pkg-config
BUILD_TARGET=		gkrellmoon.so

.include "../../sysutils/gkrellm/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
