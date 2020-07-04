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
Problem No      : 238
Problem Name    : 
Solving Method  : 

*/

/*
Problem Statement : 
Problem 238
===========
   Create a sequence of numbers using the "Blum Blum Shub" pseudo-random
   number generator:
                          s[0]   = 14025256
                          s[n+1] = s[n]^2 mod 20300713
   Concatenate these numbers  s[0]s[1]s[2]… to create a string w of infinite
   length.
   Then, w = 14025256741014958470038053646…
   For a positive integer k, if no substring of w exists with a sum of digits
   equal to k, p(k) is defined to be zero. If at least one substring of w
   exists with a sum of digits equal to k, we define p(k) = z, where z is the
   starting position of the earliest such substring.
   For instance:
   The substrings 1, 14, 1402, …
   with respective sums of digits equal to 1, 5, 7, …
   start at position 1, hence p(1) = p(5) = p(7) = … = 1.
   The substrings 4, 402, 4025, …
   with respective sums of digits equal to 4, 6, 11, …
   start at position 2, hence p(4) = p(6) = p(11) = … = 2.
   The substrings 02, 0252, …
   with respective sums of digits equal to 2, 9, …
   start at position 3, hence p(2) = p(9) = … = 3.
   Note that substring 025 starting at position 3, has a sum of digits equal
   to 7, but there was an earlier substring (starting at position 1) with a
   sum of digits equal to 7, so p(7) = 1, not 3.
   We can verify that, for 0 < k ≤ 10^3, ∑ p(k) = 4742.
   Find ∑ p(k), for 0 < k ≤ 2·10^15.
*/


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{

    return 0;
}
/***********Alhamdulillah***********/
