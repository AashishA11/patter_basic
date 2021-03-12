#include<iostream>
using namespace std;
int sum(int n)
{
    cout<<n<<" ";
    if(n==0)
    {
        return 0;
    }
    int presum=sum(n-1);
    //cout<<n<<" ";
    return (n+presum);
}
int main(int argc, char const *argv[])
{
    cout<<sum(5);
    return 0;
}
