#include<bits/stdc++.h>

using namespace std;

#define f(x) pow(x,3)-2*x-5
#define df(x) 3*pow(x,2)-2
int main()
{
    float x0 ; cin >> x0;
    float error; cin>>error;
    float x,f,df,f1;
    int step = 1;
    do{
       f = f(x0);
       df = df(x0);
       x = x0 - (f/df);
       x0 = x;
       f1 = f(x);
       cout << step << " X : " << x << " f(x) : " << f1 << endl;
       step++;
    }while(abs(f1)>error);

    cout << "\nRoot is : " << x << endl;
}
