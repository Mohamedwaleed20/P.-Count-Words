#include <iostream>
#include<bits/stdc++.h>

using namespace std ;

int main()
{
    string a ;
    getline(cin , a);
    int total = a.size();
    int c = 1 ;
    bool x = true;
    for(int i = 1 ; i < total ; i++)
    {
        if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))
        {
            if(!x)
            {
                c++;
                x=true;
            }
        }
        else
        {
           x=false;
        }
    }
    cout <<  c  ;
    return 0;
}
