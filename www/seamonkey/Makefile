# $NetBSD: Makefile,v 1.94 2013/05/23 13:25:30 ryoon Exp $
#

DISTNAME=	# empty
PKGNAME=	seamonkey-${SM_VER:S/b/beta/}
SM_VER=		2.18b4
#LIGHTNINGVER=	1.9
CATEGORIES=	www
MASTER_SITES=	${MASTER_SITE_MOZILLA:=seamonkey/releases/${SM_VER}/source/} \
		${MASTER_SITE_MOZILLA_ALL:=seamonkey/releases/${SM_VER}/source/}
DISTFILES=	seamonkey-${SM_VER}.source.tar.bz2
#		lightning-${LIGHTNINGVER}.source.tar.bz2
#SITES.lightning-${LIGHTNINGVER}.source.tar.bz2=	${MASTER_SITE_MOZILLA:=calendar/lightning/releases/${LIGHTNINGVER}/source/}
EXTRACT_DIR.lightning-${LIGHTNINGVER}.source.tar.bz2=	${WRKSRC}/lightning

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://www.seamonkey-project.org/
COMMENT=	Full-featured gecko-based browser

#WRKSRC=		${WRKDIR}/comm-release
WRKSRC=		${WRKDIR}/comm-beta
MOZILLA_DIR=	mozilla/
PLIST_SRC+=	${PLIST_SRC_DFLT}
USE_LANGUAGES+=	c c++
USE_TOOLS+=	unzip

CONFIG_GUESS_OVERRIDE+=	ldap/sdks/c-sdk/config/autoconf/config.guess
CONFIG_SUB_OVERRIDE+=	ldap/sdks/c-sdk/config/autoconf/config.sub

CONFIGURE_ARGS+=	--enable-application=suite

ALL_ENV+=		MOZILLA_PKG_NAME=seamonkey

.include "../../mk/bsd.prefs.mk"

.if (${OPSYS} == "Linux" || ${OPSYS} == "SunOS" || ${OPSYS} == "Darwin" || \
     ${OPSYS} == "DragonFly") && \
    (${MACHINE_ARCH} == "i386" || ${MACHINE_ARCH} == "x86_64")
BUILD_DEPENDS+=		yasm>=1.1.0:../../devel/yasm
.endif

#post-extract:
#	cd ${WRKSRC} && ${RM} -r calendar
#	${CP} -r ${EXTRACT_DIR.lightning-${LIGHTNINGVER}.source.tar.bz2}/comm-beta/calendar ${WRKSRC}
#	${RM} -r ${EXTRACT_DIR.lightning-${LIGHTNINGVER}.source.tar.bz2}

pre-configure:
	cd ${WRKSRC} && ${SETENV} ${CONFIGURE_ENV} autoconf
	cd ${WRKSRC}/mozilla && ${SETENV} ${CONFIGURE_ENV} autoconf
	cd ${WRKSRC}/mozilla/js/src && ${SETENV} ${CONFIGURE_ENV} autoconf
	cd ${WRKSRC}/mozilla/nsprpub && ${SETENV} ${CONFIGURE_ENV} autoconf
	cd ${WRKSRC}/ldap/sdks/c-sdk && ${SETENV} ${CONFIGURE_ENV} autoconf
	mkdir ${WRKSRC}/mozilla/js/src/.deps

do-build:
# XXX for some reason it doesn't work unless -j is explicitly specified
	cd ${WRKSRC} && ${SETENV} ${MAKE_ENV} ${MAKE_PROGRAM} -j${MAKE_JOBS:U1}

post-install:
	${TOUCH} ${TOUCH_FLAGS} \
		${DESTDIR}${PREFIX}/include/seamonkey/mozilla/throw_gcc.h
	@${STEP_MSG} "Installing bundled seamonkey extensions."
	rm -rf ${WRKDIR}/extensions
	${MKDIR} ${WRKDIR}/extensions
	${RUN} for e in ${XPI_FILES}; do				\
	  subdir="`${UNZIP_CMD} -c "$$e" install.rdf | awk '/^    <em:id>/ {sub(".*<em:id>","");sub("</em:id>.*","");print;exit;}'`" &&	\
	  ${MKDIR} "${WRKDIR}/extensions/$$subdir" &&			\
	  cd "${WRKDIR}/extensions/$$subdir" &&				\
	  ${UNZIP_CMD} -aqo $$e;					\
	done
	cd ${WRKDIR}/extensions && pax -rw .				\
	   ${DESTDIR}${PREFIX}/lib/seamonkey/extensions/.
	rm -rf ${WRKDIR}/extensions

.include "../../www/firefox/mozilla-common.mk"
.include "options.mk"
.include "../../mk/bsd.pkg.mk"
