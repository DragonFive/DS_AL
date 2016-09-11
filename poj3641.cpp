/*************************************************************************
	> File Name: poj3641.cpp
	> Author: DragonFive
	> Mail: dragonfive2013@163.com
	> Created Time: 2016年09月11日 星期日 10时52分43秒
 ************************************************************************/

#include<iostream>
#include<fstream>
using namespace std;
// 找到那些p不是素数那是却满足条件的数
// 判断一个数是不是素数
bool is_prime(long long num)
{
    if(num==2)
    {
        return false;
    }
    //int num_yueshu = 0;
    for(int i=2;i*i<=num;i++)
    {
        if(num%i==0)
        {
            return false;
        }
    }
    return true;
}



//判断一个数是否满足条件 快速幂运算 

long long quick_mod(int p,int a)
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

    long long p,a;
    while(cin>>p>>a)
    {
        if(p==0 && a==0)
            break;
        if(is_prime(p))
        {
            cout<<"no"<<endl;
            continue;
        }
        long long ret = quick_mod(p,a);
        //cout<<ret<<" ";
        if(ret%p==a%p)
        {
            cout<<"yes"<<endl;
            continue;
        }
        else
        {
            cout<<"no"<<endl;
        }

    }
    return 0;
}
