/*************************************************************************
	> File Name: poj3641.cpp
	> Author: DragonFive
	> Mail: dragonfive2013@163.com
	> Created Time: 2016年09月11日 星期日 10时52分43秒
 ************************************************************************/

#include<iostream>
#include<fstream>
using namespace std;
typedef long long ll;
// 找到那些p不是素数那是却满足条件的数
// 判断一个数是不是素数
bool is_prime(ll num)
{
    if(num<2)
        return false;
    if(num==2)
    {
        return true;
    }
    //int num_yueshu = 0;
    for(ll i=2;i*i<=num;i++)
    {
        if(num%i==0)
        {
            return false;
        }
    }
    return true;
}



//判断一个数是否满足条件 快速幂运算 

ll quick_mod(ll p,ll a)
{
    long long ret = 1;
    long long n = p;
    while(n>0)
    {
        if(n&1)
        {
            ret = (ret*a)%p;
        }
        a=a*a%p;
        n>>=1;
    }
    return ret;
}

int main()
{
#ifndef ONLINE_JUDGE
    fstream cin("test.txt");
#endif

    ll p,a;
    while(cin>>p>>a)
    {
        if(p==0 && a==0)
            break;
        if(is_prime(p))
        {
            cout<<"no"<<endl;
            continue;
        }
        ll ret = quick_mod(p,a);
        //cout<<ret<<" ";
        if(ret%p==a%p)
        {
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }

    }
    return 0;
}
