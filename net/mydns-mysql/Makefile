# $NetBSD: Makefile,v 1.18 2013/04/06 20:27:26 rodent Exp $

PKGNAME=		${DISTNAME:S/-/-mysql-/}
PKGREVISION=		8
COMMENT=		MySQL-based DNS server

CONFLICTS=		mydns-pgsql-[0-9]*

DISTINFO_FILE=		${.CURDIR}/../../net/mydns-pgsql/distinfo
PATCHDIR=		${.CURDIR}/../../net/mydns-pgsql/patches
FILESDIR=		${.CURDIR}/../../net/mydns-pgsql/files

CONFIGURE_ARGS+=	--without-pgsql
CONFIGURE_ARGS+=	--with-mysql-lib=${BUILDLINK_PREFIX.mysql-client}/${BUILDLINK_LIBDIRS.mysql-client}
CONFIGURE_ARGS+=	--with-mysql-include=${BUILDLINK_PREFIX.mysql-client}/${BUILDLINK_INCDIRS.mysql-client}

INFO_FILES=		yes

.include "../../mk/mysql.buildlink3.mk"
.include "../../devel/zlib/buildlink3.mk"
.include "../../net/mydns-pgsql/Makefile.common"
