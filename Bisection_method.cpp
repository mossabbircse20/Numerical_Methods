#include<bits/stdc++.h>

using namespace std;

#define f(x) pow(x,3)-2*x-5
int main()
{
    float posi,neg; cin>> posi >> neg;
    float error; cin>>error;
    float x,f1;
    int c=1;
    do{
        x = (posi+neg)/2;
        f1 = f(x);
        if(f1>0){
            posi = x;
        }
        else{
            neg = x;
        }
        cout << c << " x : " << x << " f(x): " << f1 << endl;
        c++;
    }while(abs(f1)>error);
    cout << "\nRoot is : " << x << endl;
}
