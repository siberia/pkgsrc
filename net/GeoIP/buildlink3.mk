# $NetBSD: buildlink3.mk,v 1.8 2009/03/20 19:25:06 joerg Exp $

BUILDLINK_TREE+=	GeoIP

.if !defined(GEOIP_BUILDLINK3_MK)
GEOIP_BUILDLINK3_MK:=

BUILDLINK_API_DEPENDS.GeoIP+=	GeoIP>=1.3.1
BUILDLINK_ABI_DEPENDS.GeoIP+=	GeoIP>=1.3.4nb1
BUILDLINK_PKGSRCDIR.GeoIP?=	../../net/GeoIP
.endif # GEOIP_BUILDLINK3_MK

BUILDLINK_TREE+=	-GeoIP
