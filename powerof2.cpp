#include<iostream>
using namespace std;
int power_of_two(int n)
{
    return (n&&!(n&n-1));
}
int main(int argc, char const *argv[])
{
    cout<<power_of_two(0);
    return 0;
}
