# $NetBSD: Makefile,v 1.34 2013/04/06 20:27:18 rodent Exp $

DISTNAME=		gcvs-1.0
PKGREVISION=		7
CATEGORIES=		devel
MASTER_SITES=		${MASTER_SITE_SOURCEFORGE:=cvsgui/}
# extra distfile containing an updated configure script
DISTFILES=		${DISTNAME}${EXTRACT_SUFX} gcvs-1.0-configure.tar.gz

MAINTAINER=		pkgsrc-users@NetBSD.org
HOMEPAGE=		http://cvsgui.sourceforge.net/
COMMENT=		GTK interface for CVS

CONFLICTS=		cvs-[0-9]*

USE_LANGUAGES=		c c++
USE_TOOLS+=		gmake makeinfo perl:run
GNU_CONFIGURE=		yes
INFO_FILES=	yes

CONFIGURE_ARGS+=	--with-tclinclude="${BUILDLINK_PREFIX.tcl}/include"
CONFIGURE_ARGS+=	--with-tcllib="${BUILDLINK_PREFIX.tcl}/lib"
CONFIGURE_ARGS+=	perl_path=${PERL5}

.include "../../lang/tcl/buildlink3.mk"
.include "../../x11/gtk/buildlink3.mk"

.include "../../mk/bsd.pkg.mk"
