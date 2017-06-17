#include <iostream>
#include<stack>
using namespace std;
int main()
{
stack <int> MyStack;
MyStack.push(5);
MyStack.push(9);
MyStack.push(0);
MyStack.push(4);
cout<<"the size of Mystack is "<<MyStack.size()<<endl;
while(!MyStack.empty()){
cout<<"popping"<<MyStack.top()<<endl;
MyStack.pop();}
cout<<"the size of Mystack is "<<MyStack.size()<<endl;
}


