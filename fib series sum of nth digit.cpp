#include <iostream>

using namespace std;

int fib(int n)
{
   if(n==1 ||n==2)
        return 1;
   else
    return fib(n-1)+fib(n-2);

}

int main()
{ int n ;
cout <<"enter the number"<<endl;
cin>>n;
int z =fib(n);
cout<<"the sum of fibonacci series "<<z<<endl;

return 0;
}
