#include <iostream>
using namespace std;

void f(int x, int n)
{
    if(x>n) return;
    cout<<x<<"\n";
    f(x+1,n);
}

int main()
{
    int n;
    cin>>n;
    f(1,n);
}