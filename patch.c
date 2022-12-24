--- clist.c	2022-12-24 14:24:45.366788100 +0300
+++ clist.c.orig	2022-12-24 14:31:39.907692400 +0300
@@ -3,6 +3,15 @@
 typedef struct CList CList;
 
 CList {
-  CList *head, *head, *curr, *prev, *next;
-  int count;
+	Node *head, *curr, *tail;
+    int count;}
+
+typedef struct Node Node;
+
+Node {
+  Node *prev, *next;
+  int index;
+  void *data;
 }
+
+
