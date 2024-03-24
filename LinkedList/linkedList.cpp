#include "../myHeader.h"

struct Node {
  int data;
  Node* next;
};

Node* createNode(int data)
{
   //cout<<"creatNode"<<endl;
  Node *newNode = (Node*)malloc(sizeof(Node));
  newNode->data = data;
  newNode->next = NULL;
  return newNode; 
}

void appendList(Node** head, Node* node)
{
   //cout<<"1 appendList"<<endl;
  if (*head == NULL)
  {
    *head = node;
    return;
  }
   //cout<<"2 appendList"<<endl;
  Node* tmp = *head;
  while (tmp->next != NULL) {
    tmp = tmp->next;
  }
  tmp->next = node;
  //head = tmp;
}

void addAtfirst(Node **head, Node* node)
{
  //cout<<"addAtfirst "<<node->data<<endl;
  if (*head != NULL) {
    node->next = *head;
  }
  *head = node;
}

Node* createList(vector<int>&v)
{
  Node* list1 = NULL;
  //cout<<"creatList"<<endl;
  for (auto i: v) {
    Node* node = createNode(i);
    appendList(&list1, node);
  }
  return list1;
}

void printList(Node* head)
{
  Node *tmp = head;
  cout<<endl;
  while (tmp != NULL) {
    cout<<tmp->data<<"->";
    tmp = tmp->next;
  }
  cout<<endl;
}

void linkedListOps()
{
  vector<int> v{12,34,32,45,56};
  //cout<<"creatingList"<<endl;
  Node* list = createList(v);
  printList(list);
  addAtfirst(&list, createNode(88));
  addAtfirst(&list, createNode(11));
  printList(list);
  
}