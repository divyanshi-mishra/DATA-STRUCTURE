#include<iostream>
#include<queue>
using namespace std;
int main(){
queue<int> MyQ;
for(int i=0;i<4;i++)
{
cout<<"enqueuing :"<<i<<endl;
MyQ.push(i);
}
cout<<"THE SIZE OF THE QUEUE IS:"<<MyQ.size()<<endl;

cout<<"THE BACK OF THE QUEUE IS:"<<MyQ.back()<<endl;
while(!MyQ.empty()){
cout<<"Dequeuing:"<<MyQ.front()<<endl;
MyQ.pop();
}
}
