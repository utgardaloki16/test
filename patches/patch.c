<<<<<<< HEAD
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
=======
6,7c6,14
<   CList *head, *head, *curr, *prev, *next;
<   int count;
---
> 	Node *head, *curr, *tail;
>     int count;}
> 
> typedef struct Node Node;
> 
> Node {
>   Node *prev, *next;
>   int index;
>   void *data;
8a16,17
> 
> 
>>>>>>> 81c5e99aaa1d02e1147011179653f10cdbfe0c83
