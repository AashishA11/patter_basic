#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    int i=0;
    int binaryno[32];
    cin>>n;
    while(n!=0)
    {int r=n%2;
         binaryno[i]=r;
        n=n/2;
        i++;
    }
    for(int j=i-1;j>=0;j--)
    {
      cout<<!binaryno[j];
    }
    cout<<n;
    return 0;
}
