#include<iostream>
using namespace std;

int gcd(int,int);

int main(){
    int x, y;
    cin >> x >> y;
    cout << gcd(x,y);
    return 0; 
}

int gcd(int x,int y)
{
int  z;
    if(x%y!=0)
    {
        z = gcd(y, x%y);
       
    }else 
    {
        return y;
    }
    return z;
}
