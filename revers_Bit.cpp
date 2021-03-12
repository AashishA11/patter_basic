#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    long long int ans=0;
    for(int i=0;i<32;i++)
    {
        ans=(ans<<1)+(n>>i& 1);
    }
    cout<<ans;

    return 0;
}
