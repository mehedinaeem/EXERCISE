#include <bits/stdc++.h>
using namespace std;

int find_max(int ara[], int x)
{
    
    for (int i = 0; i < x; i++)
    {
        cin >> ara[i];
    }
    
    cout<<"the array is: ";
    for (int i = 0; i < x; i++)
    {
        cout << ara[i] << " ";
    }

    cout << endl;

    // int max=ara[0];
    // for(int i=0;i<x;i++)
    // {
    //     if(ara[i]>max)
    //     max=ara[i];
    // }
    // return max;
}

int main()
{

    int t,n;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cout << "Enter " << i << " number array element: " ;
        cin >> n;
        int ara[n];
        cout <<"Enter elements: ";
        find_max(ara, n);
        
    }
    // int a=find_max(ara,n);
    // int b=find_max(ara,m);
    // int c=find_max(ara,p);
    // int d=find_max(ara,q);
    // cout<<a<<" "<<b<<" "<<c<<" "<<d;
    // int ara[n];
    // find_max(ara, n);
    // find_max(ara, m);
    // find_max(ara, p);
    // find_max(ara, q);
    return 0;
}