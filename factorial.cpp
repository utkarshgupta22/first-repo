#include<iostream>
using namespace std;
int factorial(int n)
{
     if(n==1)
     return n;
     else
     {
         return n * factorial(n-1);
     }
     
}
int  main()
{
      float t,n;
      cin>>t;
      for( int i=0; i<t; ++i)
      {
       cin>>n;
       cout<< factorial(n)<<endl;
      } 
      return 0;
} 
