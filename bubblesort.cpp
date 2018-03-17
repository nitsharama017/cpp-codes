#include<iostream>
using namespace std ;


void bubble(int a[],int n )
{
	for (int round =1;round <=n-1;round ++)
	{   int flag =0;
       for (int i=0;i<n-1-round;i++)
{
      if(a[i]>a[i+1])

	{flag=1;
	int temp=a[i];
	a[i]=a[i+1];
	a[i+1]=temp;
}
}
if(flag==0)
{  cout<<"round="<<round<<endl;
   return ;
	 }

}
}
int main ()
{
   int a[100];
   cout<<"enter the values"<<endl;
   for(int i=0;i<5;i++)
   {cin>>a[i];
   cout<<"\n";}
   bubble(a,6);

for (int i=0;i<5;i++)
   {
    cout<<a[i]<<endl;
   }
 }
