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
Problem No      : 4
Problem Name    :
Solving Method  :

*/

/*
Problem Statement :
Problem 4
=========
   A palindromic number reads the same both ways. The largest palindrome made
   from the product of two 2-digit numbers is 9009 = 91 × 99.
   Find the largest palindrome made from the product of two 3-digit numbers.
*/


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool palindrome(ll n)
{
    ll num=0;
    ll in=n;
    while(in){
        ll tmp=in%10;
        in/=10;
        num*=10;
        num+=tmp;
    }
    if(num==n)return true;
    else return false;
}

int main()
{
    ll n = 3;
    n--;
    ll a = 1;
    ll b = 9;
    while (n--)
    {
        a *= 10;
        b *= 10;
        b += 9;
    }
    ll minLim = a;
    ll maxLim = b;
    ll pal = 0;
    a = maxLim;
    while (a >= minLim)
    {
        b = maxLim;
        while (b >= a)
        {
            if (a * b <= pal)
                break;
            if (palindrome(a * b))
                pal = (a * b);
            b--;
        }
        a--;
    }
    cout << pal << "\n";
    return 0;
}
/***********Alhamdulillah***********/
