#include <iostream>
using namespace std;
int binsearch(int array[],int size, int userValue){
int low=0;
int high=size-1;
int mid;

while(low<=high){
        mid=(low +high)/2;
if(userValue==array[mid]){
    return mid;
}
else if (userValue>array[mid]){
low=mid+1;
}
else{
    high=mid-1;
}
}
return -1;
}
int main()
{
int a[]={10,45,67,89,92,98};
int userValue;
cout<<"enter the value "<<endl;
cin>>userValue;
int result = binsearch(a,6, userValue);
if (result >=0)
{

   cout<<"The value"<<" "<< a[result] <<" "<<"was found at the index"<<" "<< result;
}
else
    {
cout<<"error";
}
}
