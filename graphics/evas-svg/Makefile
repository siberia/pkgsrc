# $NetBSD: Makefile,v 1.24 2013/02/16 11:21:51 wiz Exp $

PKGNAME=	evas-svg-${EVAS_VERSION}

COMMENT=	Evas SVG image loader

EVAS_IMAGE_LOADERS=	svg

.include "../../graphics/evas/Makefile.common"

PKGREVISION=	11

BUILD_DIRS=	src/modules/loaders/svg
MAKE_FLAGS+=	module_la_LIBADD="\$${EINA_LIBS} \$${evas_image_loader_svg_libs} ${BUILDLINK_PREFIX.evas}/lib/libevas.la" \
		module_la_DEPENDENCIES=

.include "../../fonts/fontconfig/buildlink3.mk"
.include "../../graphics/cairo/buildlink3.mk"
.include "../../graphics/evas/buildlink3.mk"
.include "../../graphics/freetype2/buildlink3.mk"
.include "../../graphics/librsvg/buildlink3.mk"
.include "../../devel/pango/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
