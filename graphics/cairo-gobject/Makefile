# $NetBSD: Makefile,v 1.24 2013/05/05 13:44:22 spz Exp $

DISTNAME=	cairo-1.12.14
PKGNAME=	${DISTNAME:S/-/-gobject-/}
PKGREVISION=	2
CATEGORIES=	graphics
MASTER_SITES=	http://cairographics.org/releases/
EXTRACT_SUFX=	.tar.xz

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://cairographics.org/
COMMENT=	Vector graphics library with cross-device output support
LICENSE=	gnu-lgpl-v2.1 AND mpl-1.1

PATCHDIR=	${.CURDIR}/../../graphics/cairo/patches
DISTINFO_FILE=	${.CURDIR}/../../graphics/cairo/distinfo
BUILD_DIRS=	util/cairo-gobject
INSTALL_DIRS=	util/cairo-gobject

USE_LANGUAGES+=		c99
USE_LIBTOOL=		yes
USE_PKGLOCALEDIR=	yes
USE_TOOLS+=		pkg-config
PKGCONFIG_OVERRIDE+=	src/cairo.pc.in src/cairo-features.pc.in
GNU_CONFIGURE=		yes
CONFIGURE_ARGS+=	--enable-pdf
CONFIGURE_ARGS+=	--enable-ps

INSTALLATION_DIRS+=	lib/pkgconfig

.include "options.mk"

# For snprintf() and ctime_r()
CPPFLAGS.SunOS+=		-D__EXTENSIONS__ -D_POSIX_PTHREAD_SEMANTICS

# PR#43928
.include "../../mk/compiler.mk"
.if ${MACHINE_PLATFORM:MDragonFly-*-x86_64} && ${CC_VERSION:Mgcc-4.1.*}
CONFIGURE_ENV+=		ac_cv_type___uint128_t=no
.endif

post-install:
	${INSTALL_DATA} ${WRKSRC}/src/cairo-gobject.pc \
		${DESTDIR}${PREFIX}/lib/pkgconfig

.include "../../graphics/cairo/buildlink3.mk"
.include "../../devel/glib2/buildlink3.mk"
.include "../../devel/zlib/buildlink3.mk"
.include "../../fonts/fontconfig/buildlink3.mk"
BUILDLINK_API_DEPENDS.freetype2+=	freetype2>=2.1.9
.include "../../graphics/freetype2/buildlink3.mk"
.include "../../graphics/png/buildlink3.mk"
# include?
#.include "../../print/libspectre/buildlink3.mk"
.include "../../x11/pixman/buildlink3.mk"

.include "../../mk/pthread.buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
