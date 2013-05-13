$NetBSD$

--- src/pciaccess_private.h.orig	2012-04-09 17:02:57.000000000 +0000
+++ src/pciaccess_private.h
@@ -146,6 +146,9 @@ struct pci_device_private {
     struct pci_device_mapping *mappings;
     unsigned num_mappings;
     /*@}*/
+#ifdef __sun
+    int is_primary;
+#endif
 };
 
 
