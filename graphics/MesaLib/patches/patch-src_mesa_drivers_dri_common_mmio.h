$NetBSD$

--- src/mesa/drivers/dri/common/mmio.h.orig	2010-02-05 00:10:40.000000000 +0000
+++ src/mesa/drivers/dri/common/mmio.h
@@ -34,6 +34,7 @@
 #define MMIO_H
 
 #include "main/glheader.h"
+#include "dri_util.h"
 
 #if defined( __powerpc__ )
 
