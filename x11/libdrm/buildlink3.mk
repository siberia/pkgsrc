# $NetBSD: buildlink3.mk,v 1.6 2012/05/03 11:52:33 obache Exp $

BUILDLINK_TREE+=	libdrm

.if !defined(LIBDRM_BUILDLINK3_MK)
LIBDRM_BUILDLINK3_MK:=

BUILDLINK_API_DEPENDS.libdrm+=	libdrm>=2.4.44
BUILDLINK_PKGSRCDIR.libdrm?=	../../x11/libdrm
BUILDLINK_CPPFLAGS.libdrm+= -I${BUILDLINK_PREFIX.libdrm}/include/libdrm
.endif # LIBDRM_BUILDLINK3_MK

BUILDLINK_TREE+=	-libdrm
