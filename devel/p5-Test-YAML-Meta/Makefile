# $NetBSD: Makefile,v 1.9 2012/10/31 11:19:12 asau Exp $
#

DISTNAME=	Test-YAML-Meta-0.19
PKGNAME=	p5-${DISTNAME}
PKGREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=Test/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://search.cpan.org/dist/Test-YAML-Meta/
COMMENT=	Perl 5 module to validate the META.yml file in a distribution
LICENSE=	${PERL5_LICENSE}

DEPENDS+=	p5-Test-CPAN-Meta-YAML-[0-9]*:../../devel/p5-Test-CPAN-Meta-YAML

# These are recommended:
BUILD_DEPENDS+=	p5-Test-Pod>=1.0:../../devel/p5-Test-Pod
BUILD_DEPENDS+=	p5-Test-Pod-Coverage>=0.08:../../devel/p5-Test-Pod-Coverage

PERL5_PACKLIST=	auto/Test/YAML/Meta/.packlist

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
