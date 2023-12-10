#include<bits/stdc++.h>

using namespace std;

#define f1(x,y,z) (85-6*y+z)/27
#define f2(x,y,z) (72-6*x-2*z)/15
#define f3(x,y,z) (110-x-y)/54

int main()
{
    float error; cin>> error;
    float x,y,z,e1,e2,e3;
    float x0=0,y0=0,z0=0;
    int step = 1;

    do{
        x = f1(x0,y0,z0);
        y = f2(x0,y0,z0);
        z = f3(x0,y0,z0);
        cout << step << " " << x << " " << y << " " << z << endl;
        step++;
        e1 = abs(x0-x);
        e2 = abs(y0-y);
        e3 = abs(z0-z);

        x0 = x;
        y0 = y;
        z0 = z;
    }while(e1>error && e2>error && e3> error);

    cout << "\nRoot is : " << x << " " << y << " " << z << endl;
}
