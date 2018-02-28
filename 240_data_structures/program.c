#include<stdio.h>
#include<stdlib.h>
#include<time.h>

struct node
{
  int data;
  struct node* next;
};

struct node* list_insert_after(struct node** n, int d)
{
  struct node* new_node = malloc(sizeof(struct node));
  if(new_node == NULL)
  {
    fprintf(stderr,"error: malloc failed\n");
    exit(EXIT_FAILURE);
  }
  new_node->next = NULL;
  new_node->data = d;

  // list is empty (return new_node)
  if(n == NULL)
  {}

  // inserting at the tail
  else if((*n)->next == NULL)
  {
    (*n)->next = new_node;
  }

  // inserting somewhere in the middle
  else
  {
    new_node->next = (*n)->next;
    (*n)->next = new_node;
  }

  return new_node;
}

void list_free(struct node* head)
{
  struct node* n = head;
  struct node* tmp = NULL;
  while(n != NULL)
  {
    tmp = n;
    n = n->next;
    free(tmp);
  }
}

void list_print(struct node* head)
{
  struct node* current = head;
  while(current != NULL)
  {
    printf("%d\n",current->data);
    current = current->next;
  }
}

struct node* list_find(struct node* head, int value)
{
  struct node* current = head;
  while(current != NULL)
  {
    if(current->data == value)
      return current;
    current = current->next;
  }
  return NULL;
}

struct node* list_delete(struct node* head, struct node* unlink)
{
  #pragma message "implementation required"
  return NULL;
}

unsigned int list_count(struct node* head)
{
  int count = 0;
  struct node* current = head;
  while(current != NULL)
  {
    count++;
    current = current->next;
  }
  return count;
}

int main(void)
{
  time_t t;
  srand((unsigned)time(&t));

  struct node* head = list_insert_after(NULL,0);

  int i;
  for(i = 1; i < 100; i++)
      list_insert_after(&head,rand()%100+1);

  head = list_delete(head, head);
  int unlink_count = rand()%50+1;
  for(i = 0; i < unlink_count; i++)
    head = list_delete(head, list_find(head, rand()%100+1));

  struct node* current = head;
  while(current->next != NULL)
    current = current->next;
  head = list_delete(head,current);

  printf("%d\n",list_count(head));
  list_free(head);
  return 0;
}
