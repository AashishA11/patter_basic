#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{int num;
cin>>num;
    
        int a[num+1];
        int i=0;
        while(num>=0)
        {int tem=num;
        int count=0;
            while(tem)
            {
                tem=tem&tem-1;
                count++;
            }
            a[i]=count;
            i++;
            cout<<count;
            num--;
        }
    
    return 0;
}
