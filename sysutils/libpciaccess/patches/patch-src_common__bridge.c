$NetBSD$

--- src/common_bridge.c.orig	2012-04-09 17:02:57.000000000 +0000
+++ src/common_bridge.c
@@ -321,6 +321,8 @@ pci_device_get_bridge_buses(struct pci_d
 
 #define PCI_CLASS_BRIDGE 0x06
 #define PCI_SUBCLASS_BRIDGE_PCI 0x04
+#define PCI_CLASS_MASK 0xFF
+#define PCI_SUBCLASS_MASK 0xFF
 
 struct pci_device *
 pci_device_get_parent_bridge(struct pci_device *dev)
@@ -328,7 +330,7 @@ pci_device_get_parent_bridge(struct pci_
     struct pci_id_match bridge_match = {
         PCI_MATCH_ANY, PCI_MATCH_ANY, PCI_MATCH_ANY, PCI_MATCH_ANY,
         (PCI_CLASS_BRIDGE << 16) | (PCI_SUBCLASS_BRIDGE_PCI << 8),
-        0
+        (PCI_CLASS_MASK << 16) | (PCI_SUBCLASS_MASK << 8)
     };
 
     struct pci_device *bridge;
