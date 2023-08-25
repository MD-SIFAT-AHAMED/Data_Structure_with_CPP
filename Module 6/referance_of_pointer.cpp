#include<bits/stdc++.h>
using namespace std;
void fun(int * &p)
{
    p=NULL;
}
int main()
{
    int x=10;
    int *ptr=&x;
    fun(ptr);
    cout<<x<<endl;
    cout<<ptr<<endl;
    return 0;
}