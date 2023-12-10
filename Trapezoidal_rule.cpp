#include<bits/stdc++.h>

using namespace std;

#define f(x) 1/(1+x*x)

int main()
{
    double lower,upper; cin>> lower >> upper;
    double interval; cin >> interval;

    double step = (upper - lower)/interval;
    double ans = f(lower) + f(upper);
    ans = ans/2;

    for(double i=1 ; i<interval ; i++)
    {
        double x = lower + i*step;
        ans += f(x);
    }
    cout << ans*step << endl;
}
