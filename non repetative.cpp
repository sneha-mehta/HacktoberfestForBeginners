#include<iostream>
using namespace std;
int main()
{
  char str[100];
  int i;
  int f[256]={0};
  cout<<"Enter the string: ";
  gets(str);
  for(i=0;str[i]!='\0';i++)
  {
    f[str[i]]++;
  }
  cout<<"The non repeating characters are: ";
  for(i=0;i<256;i++)
  {
    if(f[i]==1)
    {
      cout<<char(i)<<" ";
    }
  }
  return 0;
}
