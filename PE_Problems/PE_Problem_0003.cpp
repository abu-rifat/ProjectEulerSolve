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
Problem No      : 3
Problem Name    :
Solving Method  :

*/

/*
Problem Statement :
Problem 3
=========
   The prime factors of 13195 are 5, 7, 13 and 29.
   What is the largest prime factor of the number 600851475143 ?
*/


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bitset<10000010>bs;
ll ss;
vector<ll>primes;

void sieve(ll ub)
{
    ss=ub+1;
    bs.set();
    bs[0]=bs[1]=0;
    primes.push_back(2);
    for(ll i=4;i<=ss;i+=2)bs[i]=0;
    for(ll i=3;i<=ss;i+=2){
        if(bs[i]){
            for(ll j=i*i;j<=ss;j+=i){
                bs[j]=0;
            }
            primes.push_back(i);
        }
    }
}

int main()
{
    ll n=600851475143;
    ll factor=n;
    sieve((sqrt(n)+1));
    ll len=primes.size();
    for(ll i=len-1;i>=0;i--){
        if(n%primes[i]==0){
            factor=primes[i];
            break;
        }
    }
    cout<<factor<<"\n";
    return 0;
}
/***********Alhamdulillah***********/
