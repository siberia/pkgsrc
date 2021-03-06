# $NetBSD: Makefile,v 1.7 2013/04/24 10:06:50 sbd Exp $
#

DISTNAME=	quickml-0.7
PKGREVISION=	2
CATEGORIES=	mail
MASTER_SITES=	http://0xcc.net/quickml/

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://0xcc.net/quickml/
COMMENT=	Easy-to-use mailing list system
LICENSE=	gnu-gpl-v2

GNU_CONFIGURE=	yes
USE_LANGUAGES=	# none
RCD_SCRIPTS+=	quickml

RUBY_VERSION_SUPPORTED= 193

QUICKML_USER=	quickml
QUICKML_GROUP=	quickml
PKG_GROUPS=	${QUICKML_GROUP}
PKG_USERS=	${QUICKML_USER}:${QUICKML_GROUP}
BUILD_DEFS+=	VARBASE

.include "../../mk/bsd.prefs.mk"

QUICKML_DATA_DIR=	${PREFIX}/share/quickml

.include "options.mk"
.include "../../lang/ruby/buildlink3.mk"

CONFIGURE_ARGS+=	--datadir=${QUICKML_DATA_DIR}
CONFIGURE_ARGS+=	--sysconfdir=${PKG_SYSCONFDIR}
CONFIGURE_ARGS+=	--with-user=${QUICKML_USER}
CONFIGURE_ARGS+=	--with-group=${QUICKML_GROUP}
CONFIGURE_ARGS+=	--with-pidfile=${VARBASE}/run/quickml.pid
CONFIGURE_ARGS+=	--with-logfile=${VARBASE}/log/quickml.log
CONFIGURE_ARGS+=	--with-rubydir=${PREFIX}/${RUBY_VENDORLIB}
CONFIGURE_ARGS+=	--localstatedir=${VARBASE}

INSTALL_MAKE_FLAGS+=	etcdir=${PREFIX}/share/examples/quickml

OWN_DIRS_PERMS+=	${VARBASE}/quickml ${QUICKML_USER} ${QUICKML_GROUP} 0750

CONF_FILES=	${PREFIX}/share/examples/quickml/quickmlrc.sample ${PKG_SYSCONFDIR}/quickmlrc

INSTALLATION_DIRS+=	${QUICKML_DATA_DIR}

post-install:
	${INSTALL_DATA} ${WRKSRC}/messages.ja ${DESTDIR}${QUICKML_DATA_DIR}

.include "../../lang/ruby/modules.mk"
.include "../../mk/bsd.pkg.mk"
