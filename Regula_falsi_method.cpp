#include<bits/stdc++.h>

using namespace std;

#define f(x) pow(x,3)-2*x-5
int main()
{
     float pos,neg; cin>> pos >> neg;
     float error; cin>> error;
     float f0,f1,f2,c;

     int step = 1;
     do{
        f0 = f(neg);
        f1 = f(pos);

        c = (neg*f1 - pos*f0)/(f1-f0);
        f2 = f(c);
        if(f2 > 0){
            pos = c;
        }
        else{
            neg = c;
        }

        cout << step << " C : " << c << " f(c): " << f2 << endl;
        step++;
     }while(abs(f2)>error);

     cout << "\Root is : " << c << endl;
}
