#include <iostream>

using namespace std;

class Node
{
public:
    int value;
    Node *address;
};

void printlnked_list_Contents(Node* head){

  cout << "the contents of linked list are :" <<endl;
     while(head!=NULL){
        cout<< head->value<<endl;
        head= head->address;

     }
}


  

int main()
{

    Node *head = new Node();
    Node *second = new Node();
    Node *tail = new Node();

    head->address = second;
    second->address = tail;
    tail->address = NULL;

    head->value = 1;
    second->value = 2;
    tail->value = 3;

    printlnked_list_Contents(head);

    return 0;
}