# $NetBSD: Makefile,v 1.1 2013/04/21 12:19:39 ryoon Exp $
#

DISTNAME=	Apache-LogFormat-Compiler-0.12
PKGNAME=	p5-${DISTNAME}
CATEGORIES=	www
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=Apache/}

MAINTAINER=	ryoon@NetBSD.org
HOMEPAGE=	http://search.cpan.org/dist/Apache-LogFormat-Compiler/
COMMENT=	Compile a log format string to perl-code
LICENSE=	${PERL5_LICENSE}

DEPENDS+=	p5-PathTools-[0-9]*:../../devel/p5-PathTools
DEPENDS+=	p5-CPAN-Meta-[0-9]*:../../devel/p5-CPAN-Meta

PERL5_MODULE_TYPE=	Module::Build
PERL5_PACKLIST=		auto/Apache/LogFormat/Compiler/.packlist
USE_LANGUAGES=		# none

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
