# $NetBSD: Makefile,v 1.59 2013/05/20 15:09:33 wen Exp $

DISTNAME=	DBI-1.627
PKGNAME=	p5-${DISTNAME}
CATEGORIES=	databases perl5
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=DBI/}

MAINTAINER=	rhaen@NetBSD.org
HOMEPAGE=	http://dbi.perl.org/
COMMENT=	The database-independent Perl database access API
LICENSE=	${PERL5_LICENSE}

PKG_INSTALLATION_TYPES=	overwrite pkgviews

USE_LANGUAGES=		c
PERL5_PACKLIST=		auto/DBI/.packlist
REPLACE_PERL=		dbixs_rev.pl

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
