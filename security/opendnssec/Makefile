# $NetBSD: Makefile,v 1.32 2013/05/09 07:40:30 adam Exp $
#

DISTNAME=	opendnssec-1.3.13
PKGREVISION=	1
CATEGORIES=	security net
MASTER_SITES=	http://www.opendnssec.org/files/source/

MAINTAINER=	pettai@NetBSD.org
HOMEPAGE=	http://www.opendnssec.org/
COMMENT=	OSS for a fast and easy DNSSEC deployment
LICENSE=	2-clause-bsd

DEPENDS+=	ldns>=1.6.13:../../net/ldns
DEPENDS+=	${RUBY_PKGPREFIX}-dnsruby>=1.53:../../net/ruby-dnsruby
BUILD_DEPENDS+=	CUnit-[0-9]*:../../devel/cunit

BUILD_DEFS+=	VARBASE

USE_TOOLS+=	bash gmake
CONFIG_SHELL=	${BASH}
USE_LANGUAGES=	c c++
USE_LIBTOOL=	yes

GNU_CONFIGURE=		yes
CONFIGURE_ARGS+=	--prefix=${PREFIX:Q}
CONFIGURE_ARGS+=	--localstatedir=${VARBASE}
CONFIGURE_ENV+=		RUBY=${RUBY}

ODS_USER?=	opendnssec
ODS_GROUP?=	opendnssec

PKG_GROUPS=		${ODS_GROUP}
PKG_USERS=		${ODS_USER}:${ODS_GROUP}
PKG_GECOS.${ODS_USER}=	OpenDNSSEC user
PKG_HOME.${ODS_USER}=	${VARBASE}/opendnssec
PKG_SHELL.${ODS_USER}=	${SH}
PKG_USERS_VARS+=	ODS_USER
PKG_GROUPS_VARS+=	ODS_GROUP

EGDIR=			${PREFIX}/share/examples/opendnssec
DOCDIR=			${PREFIX}/share/doc/opendnssec
ODS_SYSCONFDIR=		${PKG_SYSCONFDIR}/opendnssec

SUBST_CLASSES+=		paths
SUBST_FILES.paths=	${WRKSRC}/conf/Makefile.in
SUBST_STAGE.paths=	post-patch
SUBST_SED.paths=	-e 's,@EGDIR@,${EGDIR},'

CXXFLAGS.NetBSD+=	-D_NETBSD_SOURCE

CONF_FILES=	${EGDIR}/conf.xml.sample \
			${ODS_SYSCONFDIR}/conf.xml
CONF_FILES+=	${EGDIR}/kasp.xml.sample \
			${ODS_SYSCONFDIR}/kasp.xml
CONF_FILES+=	${EGDIR}/zonefetch.xml.sample \
			${ODS_SYSCONFDIR}/zonefetch.xml
CONF_FILES+=	${EGDIR}/zonelist.xml.sample \
			${ODS_SYSCONFDIR}/zonelist.xml

INSTALLATION_DIRS=	${DOCDIR} ${EGDIR} ${ODS_SYSCONFDIR}
INSTALLATION_DIRS+=	share/opendnssec
INSTALLATION_DIRS+=	lib/opendnssec
INSTALLATION_DIRS+=	lib/opendnssec/signer
INSTALLATION_DIRS+=	lib/opendnssec/kasp_auditor
OWN_DIRS+=		${VARBASE}/opendnssec
OWN_DIRS+=		${VARBASE}/opendnssec/tmp
OWN_DIRS+=		${VARBASE}/opendnssec/signconf
OWN_DIRS+=		${VARBASE}/opendnssec/signed
OWN_DIRS+=		${VARBASE}/opendnssec/unsigned

.include "../../lang/ruby/rubyversion.mk"

.if ${RUBY_VER} != 18
DEPENDS+=	${RUBY_PKGPREFIX}-soap4r>=2.0.3:../../net/ruby-soap4r
.else
DEPENDS+=	${RUBY_PKGPREFIX}-rubygems-[0-9]*:../../misc/rubygems
.endif

.include "options.mk"

pre-install:
	${MKDIR} ${DESTDIR}${PKG_SYSCONFDIR}/opendnssec

post-install:
	${INSTALL} ${WRKSRC}/KNOWN_ISSUES ${DESTDIR}${DOCDIR}
	${INSTALL} ${WRKSRC}/MIGRATION ${DESTDIR}${DOCDIR}

#.include "../../devel/cunit/buildlink3.mk"
.include "../../textproc/libxml2/buildlink3.mk"
.include "../../net/ldns/buildlink3.mk"
.include "../../databases/sqlite3/buildlink3.mk"
.include "../../lang/ruby/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
