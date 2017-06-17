#include <iostream>
using namespace std;

int search(int array[],int size, int searchValue)
{


for(int i=0;i<size;i++)
{
if (searchValue==array[i])
{
return i;
}

}
return -1;

}
int main()
{
int a[]={22,10,34,12,45,7};
int userValue;
cout<<"enter the value "<<endl;
cin>>userValue;
int result = search(a,6, userValue);
if (result >=0)
{

   cout<<"The value"<<" "<< a[result] <<" "<<"was found at the index"<<" "<< result;
}
else{
cout<<"error";
}
}
