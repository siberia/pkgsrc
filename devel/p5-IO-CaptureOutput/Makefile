# $NetBSD: Makefile,v 1.8 2013/04/06 03:45:10 rodent Exp $

DISTNAME=	IO-CaptureOutput-1.1102
PKGNAME=	p5-${DISTNAME:S/1102/11.02/}
PKGREVISION=	3
CATEGORIES=	devel perl5
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=IO/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://search.cpan.org/dist/IO-CaptureOutput/
COMMENT=	Capture STDOUT and STDERR from Perl code, subprocesses, or XS
LICENSE=	${PERL5_LICENSE}

PKG_INSTALLATION_TYPES=	overwrite pkgviews

PERL5_PACKLIST=		auto/IO/CaptureOutput/.packlist

DEPENDS+=	{perl>=5.8.9,p5-PathTools>=3.27}:../../devel/p5-PathTools

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
