$NetBSD$

--- src/mesa/drivers/dri/intel/intel_context.c.orig	2011-11-23 01:10:52.000000000 +0000
+++ src/mesa/drivers/dri/intel/intel_context.c
@@ -737,7 +737,7 @@ intelInitContext(struct intel_context *i
    driParseConfigFiles(&intel->optionCache, &intelScreen->optionCache,
                        sPriv->myNum, (intel->gen >= 4) ? "i965" : "i915");
    if (intel->gen < 4)
-      intel->maxBatchSize = 4096;
+      intel->maxBatchSize = 2*4096;
    else
       intel->maxBatchSize = sizeof(intel->batch.map);
 
