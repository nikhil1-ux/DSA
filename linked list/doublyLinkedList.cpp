#include <iostream>
using namespace std;


class Node{
  public: 
  int val;
  Node *next;
  Node *back;

  Node(int val1, Node *next1, Node *back1){
    val = val1;
    next = next1;
    back = back1;
  }

  Node(int val1){
    val = val1;
    next = NULL;
    back = NULL;
  }
};

int main(){

   int n;
   cout<<"enter the integer" << endl;
   cin >> n;
   cout<< "enter the element";
   int arr[n];
  for(int i = 0; i < n; i++){
    cin>>arr[i];
  }

  Node *head = new Node(arr[0]);
  Node *temp = head;
  
  for(int i = 1; i < n; i++){

    Node *front = new Node(arr[i]);
    temp-> next = front;
    front-> back = temp;
    temp = front;
  }
  
  temp = head;

  while (temp != NULL){
    cout<< "the element in the node  " << temp-> val;
    temp = temp-> next;
  }

}
