# $NetBSD: Makefile,v 1.12 2013/05/21 12:16:41 markd Exp $

DISTNAME=	phonon-backend-gstreamer-4.6.3
CATEGORIES=	multimedia
MASTER_SITES=	${MASTER_SITE_KDE:=phonon/phonon-backend-gstreamer/4.6.3/src/}
EXTRACT_SUFX=	.tar.xz

MAINTAINER=	markd@NetBSD.org
HOMEPAGE=	http://phonon.kde.org/
COMMENT=	Multimedia API for KDE and QT - GStreamer backend
LICENSE=	gnu-lgpl-v2.1

# BUILD_MAKE_FLAGS+= VERBOSE=1

BUILD_DEPENDS+=	automoc4>=0.9.83:../../devel/automoc4

USE_TOOLS+=	pkg-config
USE_LANGUAGES=	c c++
USE_CMAKE=	yes
CMAKE_ARG_PATH=	..
CONFIGURE_DIRS=	_build
#CMAKE_ARGS+=	-DWITH_PulseAudio:BOOL=OFF

pre-configure:
	${LN} -sf ${QTDIR}/bin/qmake ${BUILDLINK_DIR}/bin/
	${MKDIR} ${WRKSRC}/_build

.include "../../multimedia/gstreamer0.10/buildlink3.mk"
.include "../../multimedia/gst-plugins0.10-base/buildlink3.mk"
.include "../../multimedia/phonon/buildlink3.mk"

.include "../../mk/bsd.pkg.mk"
