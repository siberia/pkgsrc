# $NetBSD: Makefile,v 1.14 2013/03/02 10:44:41 tron Exp $

DISTNAME=	Digest-BubbleBabble-0.02
PKGNAME=	p5-${DISTNAME}
PKGREVISION=	1
SVR4_PKGNAME=	p5bbl
CATEGORIES=	security perl5
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=Digest/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://search.cpan.org/dist/Digest-BubbleBabble/
COMMENT=	Perl5 module for bubble babble fingerprints
LICENSE=	${PERL5_LICENSE}

DEPENDS+=	p5-Digest-MD5-[0-9]*:../../security/p5-Digest-MD5
DEPENDS+=	p5-Digest-SHA1-[0-9]*:../../security/p5-Digest-SHA1

PERL5_PACKLIST=		auto/Digest/BubbleBabble/.packlist

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
