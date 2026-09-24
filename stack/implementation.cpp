 #include <iostream>
using namespace std;

class Stack{

  int size;
  int top;
  int *arr;
  
  public:
  Stack(int inputsize){
   size = inputsize;
   top = -1;
   arr = new int[size];
  }

  void push(int value){

   if(top == size-1){
    cout<< "stack overflowed";
   }
   else{
   top++;
   arr[top] = value;
      cout<< arr[top]<< endl;
   }
  }

  void pop(){
    if(top == -1){
      cout<< "stack underflow"<< endl;
    }
    else{
      top--;
      cout<< arr[top]<< endl;
    }
  }

  int peek(){
   return arr[top];
  }

  int itssize(){
    return top+1;
  }
};

int main(){
 
  Stack s(5);
  s.push(1);
  s.push(2);
  s.pop();

} 