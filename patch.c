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
