# $NetBSD: Makefile,v 1.18 2012/10/25 06:55:43 asau Exp $
#

DISTNAME=	bsdgrep-20071201
PKGNAME=	bsdgrep-devel-20071201
CATEGORIES=	sysutils textproc
MASTER_SITES=	http://www.fawlty.net/software/

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	# none
COMMENT=	BSD version of grep as in NetBSD src/usr.bin/grep
LICENSE=	original-bsd

USE_FEATURES+=		cdefs fts_open
USE_BSD_MAKEFILE=	yes
BUILDLINK_TRANSFORM+=	rm:-Werror

INSTALLATION_DIRS=	bin ${PKGMANDIR}/man1

post-patch:
	${SED} -e 's|grep|bgrep|g' ${WRKSRC}/grep.1 > ${WRKSRC}/bgrep.1

.include "../../devel/zlib/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
