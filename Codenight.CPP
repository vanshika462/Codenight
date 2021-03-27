#include<iostream.h>
#include<math.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()  //by default first flag to be placed is red
{
  long int N;
  long int M;
  int a;
  do{
    a=0;
    cout<<"Enter M and N";
    cin>>M>>N;
    if(N<1 || M<1 || M>(10^9) || N>(10^9))  
    {
      cout<<"Enter valid input";
      a = 1;
    }
  }while(a==1);
  int b = (M*N)/2;
  if((M*N)%2==0)
  {
    cout<<b;
  }
  else
  cout<<b+1;
  return 0;
}
