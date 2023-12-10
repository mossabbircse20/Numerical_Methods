#include<bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    cin >> n;
    float arr[n][n]; int x[n],r;
    for(int i=1 ; i<=n ; i++)
    {
        for(int j=1 ; j<=n+1 ; j++)
        {
            cin >> arr[i][j];
        }
    }
    for(int i=1 ; i<n ; i++)
    {
        if(arr[i][i]==0)
        {
            cout << "Error!!" << endl;
            break;
        }
        for(int j=i+1 ; j<=n ; j++)
        {
            r = arr[j][i]/arr[i][i];
            for(int k=1 ; k<=n+1 ; k++)
            {
                arr[j][k] = arr[j][k]- r*arr[i][k];
            }
        }
        x[n] = arr[n][n+1]/arr[n][n];
        for(int i=n-1 ; i>=1 ; i--)
        {
            x[i] = arr[i][n+1];
            for(int j = i+1 ; j<=n ; j++)
            {
                x[i] = x[i]-arr[i][j]*x[j];
            }
            x[i] = x[i]/arr[i][i];
        }

    }
    for(int i=1 ; i<=n ; i++)
    {
        cout << x[i] << endl;
    }


}

