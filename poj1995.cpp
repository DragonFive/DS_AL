/*************************************************************************
	> File Name: poj1995.cpp
	> Author: DragonFive
	> Mail: dragonfive2013@163.com
	> Created Time: 2016年09月12日 星期一 10时16分11秒
 ************************************************************************/

#include<iostream>
#include<fstream>
using namespace std;
typedef long long ll;

ll m,h;
ll A[45005],B[45005];

ll quick_mi(ll a,ll p,ll mod)
{
    ll ret = 1;
    while(p>0)
    {
        if(p&1)
            ret=(ret*a)%mod;
        a=(a*a)%mod;
        p>>=1;
    }
    return ret;
}

ll solve()
{
    ll ret = 0;
    for(ll i=0;i<h;i++)
    {
        ll ret_mod = quick_mi(A[i],B[i],m);
        ret = (ret+ret_mod)%m;
    }
    return ret;
}
int main()
{
    #ifndef ONLINE_JUDGE
    fstream cin("test1995.txt");
    #endif
    ll num_cal = 0;
    cin>>num_cal;//步数;

    for(ll i=0;i<num_cal;i++)
    {
        cin>>m>>h;
        for(ll j=0;j<h;j++)
        {
            cin>>A[j]>>B[j];
        }
        ll ret = solve();
        cout<<ret<<endl;
    }



    return 0;
}
