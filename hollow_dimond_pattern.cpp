#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n; 
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=n-i; j++)
        {
            cout<<" ";
        }
        cout<<"*";
        for (int j = n-i; j >=2; j--)
        {
            cout<<" ";
        }
        cout<<"*";
        cout<<endl;
    }
    return 0;
}
