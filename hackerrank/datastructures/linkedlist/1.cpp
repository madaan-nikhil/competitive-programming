/*
  Print elements of a linked list on console 
  head pointer input could be NULL as well for empty list
  Node is defined as
  
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
void Print(Node *head)
{
    struct Node *ptr = head;
	
	while(ptr!=NULL){
		printf("%d",ptr->data);
		printf("\n");
		ptr=ptr->next;
	}
}
