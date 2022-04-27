#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define kk '\n'
using namespace std;

long long int killinSpree(long long int n)
{
    long long int sum = 0;

    long long int i = 1;
    while (sum < n)
    {
        sum += (i * i);
        if (sum >= n)
        {
            break;
        }

        i++;
    }

    if (sum > n)
    {
        return (i - 1);
    }

    return i;
}
