//Torres de Hanoi
#include <iostream>
using namespace std;
 
void hanoi(int num,char A,char C,char B)
{
    if(num==1)
    {
      cout<<"Move block "<<num<<" from "<<A<<" to  "<<C<<endl;
                                  
    }
    else
    {
      hanoi(num-1,A,B,C);
      cout<<"Move block "<<num<<" from "<<A<<" to  "<<C<<endl;
      hanoi(num-1,B,C,A);
    }
}
                                                                           
int main()
{
  int n;
  char A,B,C;
                                                                                            
  cout<<"Sticks are A B C\n";
  cout<<"Number of discs: ";
  cin>>n;
  hanoi(n,'A','C','B');
  
  return 0;
                                                                                                                                     
}

 
