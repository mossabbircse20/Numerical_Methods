#include<bits/stdc++.h>

using namespace std;

#define order 4
#define MAXN 100

int main()
{
    int n; cin >> n;
    float x[MAXN+1], y[MAXN+1];
    for(int i=0 ; i<n ; i++) cin >> x[i] >> y[i];

    float value; cin >> value;

    float diff[MAXN+1][order+1];
    for(int i=n ; i>=0 ; i--) diff[i][1] = y[i]-y[i-1];

    for(int j=2 ; j<=order ; j++)
    {
        for(int i=n ; i>=0 ; i--)
        {
            diff[i][j] = diff[i][j-1]-diff[i-1][j-1];
        }
    }
    int idx = n-1;

    float h = x[2]-x[1];
    float u = (value - x[idx])/h;

    float y_value = y[idx];

    float fact_u = 1.0, multi = 1.0;
    for(int i=1 ; i<=order ; i++)
    {
        fact_u *= u+i-1;
        multi *= i;
        y_value += (fact_u/multi)*diff[idx][i];
    }
    cout << y_value << endl;
}
