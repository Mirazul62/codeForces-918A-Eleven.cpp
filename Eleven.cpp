#include<bits/stdc++.h>
#define lli long long
using namespace std;
bool isperfactSquare(int x)
{
    int s=sqrt(x);
    return (s*s==x);
}
bool isFibonacci(int n)
{
    return isperfactSquare(5*n*n +4) ||
        isperfactSquare(5*n*n -4);
}

int main()
{
    ios_base::sync_with_stdio(false);
    lli n,i;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        isFibonacci(i)? cout<<"O":cout<<"o";
    }


}
