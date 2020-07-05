/*******Bismillahir-Rahmanir-Rahim**********/
/*
Name         : Abu Rifat Muhammed Al Hasib
Institution  : University of Barisal, Bangladesh
Github       : abu-rifat
Codeforces   : AbuRifatMuhammed
AtCoder      : AbuRifatMuhammed
codechef     : aburifat
SPOJ         : abu_rifat
Toph         : aburifat
UvaOJ        : aburifat
DevSkill     : abu_rifat
lightoj      : Abu Rifat Muhammed Al Hasib
facebook     : https://www.facebook.com/a.r.m.al.hasib/
linkedin     : https://www.linkedin.com/in/abu-rifat-534258142/
Email        : rifat.cse4.bu@gmail.com, armalhasib@gmail.com
*/

/*
Online Judge    : Project Euler
Problem No      : 1
Problem Name    :
Solving Method  :

*/

/*
Problem Statement :
Problem 1
=========
   If we list all the natural numbers below 10 that are multiples of 3 or 5,
   we get 3, 5, 6 and 9. The sum of these multiples is 23.
   Find the sum of all the multiples of 3 or 5 below 1000.
*/



#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll lcm(ll a, ll b)
{
    return (a/__gcd(a,b))*b;
}

ll sumDivBy(ll k,ll n)
{
    ll sum;
    ll num=n/k;
    sum=k*((num*(num+1))/2);
    return sum;
}

int main()
{
    ll mx=999;
    ll num1=3;
    ll num2=5;
    ll numLcm=lcm(num1, num2);
    ll div1=sumDivBy(num1,mx);
    ll div2=sumDivBy(num2,mx);
    ll divLcm=sumDivBy(numLcm,mx);
    ll ans=div1+div2-divLcm;
    cout<<ans<<"\n";
    return 0;
}
/***********Alhamdulillah***********/
