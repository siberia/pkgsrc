# $NetBSD: Makefile,v 1.39 2013/02/16 11:22:57 wiz Exp $
#

DISTNAME=	rssyl-0.33
PKGNAME=	claws-mail-rssyl-0.33
PKGREVISION=	7
CATEGORIES=	mail
MASTER_SITES=	http://claws-mail.org/downloads/plugins/

MAINTAINER=	pkgsrc-users@NetBSD.org
COMMENT=	Read RSS 1.0, 2.0 and Atom feeds in Claws-Mail

PLIST_SRC+=	PLIST

DEPENDS+=	claws-mail-${CLAWS_VERSION}{,nb[0-9]*}:../../mail/claws-mail

PLIST_SRC+=	PLIST

.include "../../mk/bsd.prefs.mk"

GNU_CONFIGURE=	yes
USE_LIBTOOL=	yes
USE_TOOLS+=	pkg-config
USE_LANGUAGES+=	c

.include "../../mail/claws-mail/Makefile.vers"
.include "../../mail/claws-mail/buildlink3.mk"
.include "../../devel/glib2/buildlink3.mk"
.include "../../x11/gtk2/buildlink3.mk"
.include "../../textproc/libxml2/buildlink3.mk"
.include "../../security/gnutls/buildlink3.mk"
.include "../../www/curl/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
