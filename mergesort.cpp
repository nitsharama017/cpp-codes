#include<iostream>
#include <string>
using namespace std ;

mergesort(int a[],int l[],int r[])
{
int x,y=4;
int i=0,j=0,k=0;
while(i<x &&j<y)
{
   if(l[i]<=r[j])
    {
       a[k]=l[i];
       i++;
    }
    else
    {
       a[k]=r[j];
       j++;
    }
    k++;
}
 while(x<4)
 {
    a[k]=l[i];
    i++;
    k++;
 }
   while (y<4)
   {
      a[k]=r[j];
      j++;
      k++;
   }
}
void merge(int a[])
{ int n=8 ;
    int mid =n/2;
int left[mid];
int right[n-mid];
if (n<2)
   {return;}

   for (int i=0;i<mid ;i++)
   {
      left[i]=a[i];
   }
   for (int i=mid ;i<n-1;i++)
   {
     right[i-mid]=a[i];

   }
merge (left);
merge (right);
mergesort(left ,right ,a);

}


int main ()
{
int a[100]={2,4,1,6,8,5,3,7};
int l[50]={2,4,1,6};
int r[50]={8,5,3,7};
mergesort(a,l,r);
merge(a);
for (int i=0;i<8;i++)
   {

      cout <<a[i]<<endl;
   }
}
