#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {if(j<=n-i)
        cout<<"  ";
        else
        cout<<n-j+1<<" ";
        }
        for(int j=2;j<=i;j++)
        {
            cout<<j<<" ";
        }
    cout<<endl;
    }
    for(int i=n-1;i>=1;i--)
    {
        for(int j=1;j<=n;j++)
        {if(j<=n-i)
        cout<<"  ";
        else
        cout<<n-j+1<<" ";
        }
        for(int j=2;j<=i;j++)
        {
            cout<<j<<" ";
        }
    cout<<endl;
    }
    return 0;
}
