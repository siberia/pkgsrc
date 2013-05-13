$NetBSD$

--- src/common_init.c.orig	2012-04-09 17:02:57.000000000 +0000
+++ src/common_init.c
@@ -117,7 +117,6 @@ pci_system_cleanup( void )
 	pci_sys->num_devices = 0;
     }
 
-
     if ( pci_sys->methods->destroy != NULL ) {
 	(*pci_sys->methods->destroy)();
     }
