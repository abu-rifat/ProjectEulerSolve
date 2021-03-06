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
Problem No      : 149
Problem Name    : 
Solving Method  : 

*/

/*
Problem Statement : 
Problem 149
===========
   Looking at the table below, it is easy to verify that the maximum possible
   sum of adjacent numbers in any direction (horizontal, vertical, diagonal
   or anti-diagonal) is 16 (= 8 + 7 + 1).
                             ┌────┬────┬────┬─────┐
                             │ −2 │ 5  │ 3  │ 2   │
                             ├────┼────┼────┼─────┤
                             │ 9  │ −6 │ 5  │ 1   │
                             ├────┼────┼────┼─────┤
                             │ 3  │ 2  │ 7  │ 3   │
                             ├────┼────┼────┼─────┤
                             │ −1 │ 8  │ −4 │   8 │
                             └────┴────┴────┴─────┘
   Now, let us repeat the search, but on a much larger scale:
   First, generate four million pseudo-random numbers using a specific form
   of what is known as a "Lagged Fibonacci Generator":
   For 1 ≤ k ≤ 55, s[k] = [100003 − 200003k + 300007k^3] (modulo 1000000) −
   500000.
   For 56 ≤ k ≤ 4000000, s[k] = [s[k−24] + s[k−55] + 1000000] (modulo
   1000000) − 500000.
   Thus, s[10] = −393027 and s[100] = 86613.
   The terms of s are then arranged in a 2000×2000 table, using the first
   2000 numbers to fill the first row (sequentially), the next 2000 numbers
   to fill the second row, and so on.
   Finally, find the greatest sum of (any number of) adjacent entries in any
   direction (horizontal, vertical, diagonal or anti-diagonal).
*/


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{

    return 0;
}
/***********Alhamdulillah***********/
