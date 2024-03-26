#include "../myHeader.h"

class Node {
public:
  int data;
  Node* next;

  Node(int data) {
    this->data = data;
    this->next = NULL;
  }
  ~Node() {
    int val = this->data;
    if (this->next != NULL) {
      delete next;
      this->next = NULL;
    }
    cout<<"mem deleted for node "<< val<<endl;
    
  }
};

/*Node* createNode(int data)
{
  Node *newNode = (Node*)malloc(sizeof(Node));
  newNode->data = data;
  newNode->next = NULL;
  return newNode; 
}*/

static void appendList(Node* &head, Node* node)
{
  if (head == NULL)
  {
    head = node;
    return;
  }
  
  Node* tmp = head;
  while (tmp->next != NULL) {
    tmp = tmp->next;
  }
  tmp->next = node;
}

static void addAtfirst(Node* &head, Node *node)
{
  if (head != NULL) {
    node->next = head;
  }
  head = node;
}

static Node* createList(vector<int>&v)
{
  Node* list1 = NULL;

  for (auto i: v) {
    Node* node = new Node(i);
    appendList(list1, node);
  }
  return list1;
}

static Node* reverseList(Node* head)
{
  Node* curr = head, *prev = NULL;

  while(curr != NULL) {
    Node* next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
  }
  return prev;
  
}

static void insertAtPos(Node* &head, Node *node, int pos)
{
  Node *curr = head;
  int cnt = 1;
  if (pos == 1) {
    addAtfirst(head, node);
    return;
  }
  while (cnt < pos - 1) {
    curr = curr->next;
    cnt++;
  }
  if(curr->next == NULL) {
    appendList(head, node);
  }
  node->next = curr->next;
  curr->next = node;
  
}

static void printList(Node* &head)
{
  Node *tmp = head;
  cout<<endl;
  while (tmp != NULL) {
    cout<<tmp->data<<"->";
    tmp = tmp->next;
  }
  cout<<endl;
}

static void deleteNodeAtPos(Node* &head, int pos)
{
  Node* curr = head, *tmp = NULL;
  int cnt = 1;
 // cout<<"deleting node"<<endl;
  if(pos == 1) {
    head = curr->next;
    curr->next = NULL;
    delete curr;
    return;
    
  }
  while (cnt < pos-1) {
    curr = curr->next;
    cnt++;
  }
  tmp = curr->next;
  curr->next = tmp->next;
  tmp->next = NULL;  
  delete tmp;
}

void linkedListOps()
{
  vector<int> v{12,34,32,45,56};
  Node* list = createList(v);
  
  printList(list);
  addAtfirst(list, new Node(88));
  addAtfirst(list, new Node(11));
  printList(list);
  insertAtPos(list, new Node(33), 4);
  printList(list);

  insertAtPos(list, new Node(98), 1);
  printList(list);

  deleteNodeAtPos(list, 3);
  printList(list);

  deleteNodeAtPos(list, 1);
  printList(list);

  deleteNodeAtPos(list, 7);
  printList(list);

  Node* revList = reverseList(list);
  printList(revList);
}