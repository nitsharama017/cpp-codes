#include<iostream>
using namespace std ;

insertion_sort(int a[],int n )
{

   for(int i=0;i<=n-1;i++)
   {int value =a[i];
    int hole =i;
    while(hole>0 &&a[hole-1]>value)
    {

      a[hole]=a[hole-1];
      hole--;
    }
    a[hole]=value;

}
}

int main()
{  int a[100];
cout<<"enter the elements"<<endl;
for(int i=0;i<5;i++)
{
cin>>a[i];
cout<<"\n";
}
insertion_sort(a,5);
for(int i=0;i<5;i++)
{
   cout<<a[i]<<endl;
}
}
