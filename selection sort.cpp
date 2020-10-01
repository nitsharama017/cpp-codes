#include<iostream>
using namespace std ;

int min(int a [],int k,int n){
  
  int min =a[k];
    int loc=k;
      for (int j=k;j<n-1;j++){             //begning of loop
  
            if (min>a[j]){
              min=a[j];
                loc=j;

     }

  }
                return (loc);
}
 int main(){

  int a[100];
      cout <<"enter the values"<<endl;
         for (int i=0;i<6;i++){                  //begning of loop
           
               cin>>a[i];
                cout <<"\n";
        }
                for(int k=0;k<6;k++){
                  
                    int loc =min(a,k,6);
                     int temp =a[k];
                      a[k]=a[loc];
                        a[loc]=temp;
      }
   for (int i=0;i<6;i++){

      cout <<a[i]<<endl;
   }
}
