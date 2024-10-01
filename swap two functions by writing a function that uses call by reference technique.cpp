#include <iostream>
using namespace std;

//Function to swap two values using call by reference
void swap (int &a , int &b){
  int temp = a;
  a = b;
  b = temp;
  
}
int main (){
  int x,y;
  
  //Input two values from the user
  cout<<"Enter the value of x:";
  cin>>x;
  cout<<"Enter the value of y:";
  cin>>y;
  
  //Display the values before swapping 
  cout<<"\n Before swapping:\n";
  cout<<"x="<<x<<"y="<<y<<endl;
  
  //call the swap function 
  swap (x,y);
  
  //Display the values after swapping
  cout<<"\nAfter swappy:\n";
  cout<<"x="<<x<<"y="<<y<<endl;
  
  return 0;
}