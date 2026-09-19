#include <iostream>
using namespace std;

class Node{

  public:
  int data;
  Node* next;

  Node(int value){
    data = value;
    next = NULL;
  }
};

int main(){
  int n;
  cout<< " enter array size";
  cin>> n;
  int arr[n];

  for(int i = 0; i < n; i++){
   cin>> arr[i];
  }

  Node* head;
  head = NULL;
  if(head == NULL){
    head = new Node(arr[0]);
  }
  Node* temp;
  temp = head;
 for(int i = 1; i < n; i++){
    temp->next = new Node(arr[i]);
    temp = temp->next;
}


  Node *newnode = head;

  while(newnode != NULL){
  cout<< newnode -> data<< endl;
  newnode = newnode ->next; 
  }



  return 0;

}
