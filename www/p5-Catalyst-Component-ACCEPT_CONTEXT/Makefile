# $NetBSD: Makefile,v 1.10 2012/10/28 06:30:30 asau Exp $

DISTNAME=	Catalyst-Component-ACCEPT_CONTEXT-0.07
PKGNAME=	p5-${DISTNAME}
PKGREVISION=	5
CATEGORIES=	www perl5
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=Catalyst/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://search.cpan.org/~jrockway/Catalyst-Component-ACCEPT_CONTEXT/
COMMENT=	Make current Catalyst request context available in Models and Views
LICENSE=	${PERL5_LICENSE}

DEPENDS+=	p5-Catalyst-Runtime>=0:../../www/p5-Catalyst-Runtime
DEPENDS+=	p5-MRO-Compat-[0-9]*:../../devel/p5-MRO-Compat

BUILD_DEPENDS+=	p5-Devel-Cycle-[0-9]*:../../devel/p5-Devel-Cycle

USE_LANGUAGES=	# empty
PERL5_PACKLIST= auto/Catalyst/Component/ACCEPT_CONTEXT/.packlist
PERL5_MODULE_TYPE=	Module::Install::Bundled

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
