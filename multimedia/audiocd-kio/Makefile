# $NetBSD: Makefile,v 1.3 2013/05/21 12:49:36 markd Exp $

DISTNAME=	audiocd-kio-${_KDE_VERSION}
CATEGORIES=	multimedia
COMMENT=	Kioslave for accessing audio CDs

.include "../../meta-pkgs/kde4/Makefile.kde4"

.include "../../meta-pkgs/kde4/kde4.mk"

.include "../../audio/cdparanoia/buildlink3.mk"
.include "../../audio/flac/buildlink3.mk"
.include "../../audio/libvorbis/buildlink3.mk"
.include "../../multimedia/libkcddb/buildlink3.mk"
.include "../../multimedia/libkcompactdisc/buildlink3.mk"
.include "../../x11/kdelibs4/buildlink3.mk"

.include "../../mk/bsd.pkg.mk"
