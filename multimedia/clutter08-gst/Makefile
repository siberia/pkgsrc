# $NetBSD: Makefile,v 1.16 2013/02/16 11:19:21 wiz Exp $
#

DISTNAME=	clutter-gst-0.8.0
PKGNAME=	${DISTNAME:S/clutter/clutter08/}
PKGREVISION=	14
CATEGORIES=	multimedia
MASTER_SITES=	http://www.clutter-project.org/sources/clutter-gst/0.8/

MAINTAINER=	obache@NetBSD.org
HOMEPAGE=	http://www.clutter-project.org/
COMMENT=	Clutter GStreamer integration
LICENSE=	gnu-lgpl-v2.1

GNU_CONFIGURE=	yes
USE_LIBTOOL=	yes
USE_TOOLS+=	pkg-config

# Workaround for Upstream Bug#562310.
# for more detail, see also PR#41475.
TOOLS_NOOP+=		gtkdoc-rebase

MAKE_ENV+=	DOC_MODULE_VERSION=0.8

PKGCONFIG_OVERRIDE+=	clutter-gst.pc.in

.include "../../graphics/clutter08/buildlink3.mk"
.include "../../multimedia/gstreamer0.10/buildlink3.mk"
.include "../../multimedia/gst-plugins0.10-base/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
