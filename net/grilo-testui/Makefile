# $NetBSD: Makefile,v 1.5 2013/05/09 07:40:23 adam Exp $
#

DISTNAME=	grilo-0.2.5
PKGNAME=	grilo-testui-0.2.5
PKGREVISION=	1
CATEGORIES=	net
MASTER_SITES=	ftp://ftp.gnome.org/pub/gnome/sources/grilo/0.2/
EXTRACT_SUFX=	.tar.xz

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://www.gnome.org/
COMMENT=	Media browser framework
LICENSE=	gnu-lgpl-v2

DISTINFO_FILE=	${.CURDIR}/../../net/grilo/distinfo
PATCHDIR=	${.CURDIR}/../../net/grilo/patches

GNU_CONFIGURE=	yes
USE_LIBTOOL=	yes
USE_TOOLS+=	pkg-config
USE_LANGUAGES=	c99

BUILD_DIRS=	tools/grilo-test-ui
INSTALL_DIRS=	tools/grilo-test-ui

.include "../../net/grilo/buildlink3.mk"
.include "../../x11/gtk3/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
