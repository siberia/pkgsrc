# $NetBSD: Makefile,v 1.27 2013/05/09 07:39:30 adam Exp $
#

DISTNAME=	multisync-gui-0.91.0
PKGREVISION=	21
CATEGORIES=	comms
MASTER_SITES=	http://www.opensync.org/raw-attachment/wiki/releases/0.2x/download/

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://www.opensync.org/
COMMENT=	GUI for libopensync

USE_TOOLS+=	pkg-config
HAS_CONFIGURE=	yes

REPLACE_PYTHON= waf

LDFLAGS.DragonFly=	-lgthread-2.0

.include "../../lang/python/application.mk"
.include "../../devel/glib2/buildlink3.mk"
.include "../../textproc/libxml2/buildlink3.mk"
.include "../../x11/gtk2/buildlink3.mk"
.include "../../devel/libglade/buildlink3.mk"
.include "../../comms/libopensync/buildlink3.mk"
.include "../../sysutils/desktop-file-utils/desktopdb.mk"
.include "../../mk/bsd.pkg.mk"
