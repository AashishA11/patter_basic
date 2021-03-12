#include<iostream>
using namespace std;
void subset1(int arr[],int n)
{
    for (int i = 0; i < (1<<n); i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i&(1<<j))
            {cout<<arr[j]<<" ";
            }
        }
    cout<<endl;
    }   
    
}
int main()
{
    int ar[3]={2,1,1};
    subset1(ar,3);
    return 0;
}
