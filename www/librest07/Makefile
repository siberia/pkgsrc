# $NetBSD: Makefile,v 1.8 2013/05/09 07:39:20 adam Exp $
#

DISTNAME=	rest-0.7.12
PKGNAME=	librest07-0.7.12
PKGREVISION=	5
CATEGORIES=	www
MASTER_SITES=	${MASTER_SITE_GNOME:=sources/rest/0.7/}
EXTRACT_SUFX=	.tar.xz

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://moblin.org/projects/librest
COMMENT=	Library for "RESTful" web services
#LICENSE=	# TODO: (see mk/license.mk)

GNU_CONFIGURE=	yes
USE_LIBTOOL=	yes
USE_TOOLS+=	pkg-config gmake
# see pkgsrc/security/mozilla-rootcerts
CONFIGURE_ARGS+= --with-ca-certificates=/etc/ssl/certs/ca-certificates.crt

PKGCONFIG_OVERRIDE+=	rest.pc.in

.include "../../devel/glib2/buildlink3.mk"
.include "../../net/libsoup24/buildlink3.mk"
.include "../../textproc/libxml2/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
