#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    n = (n*6)/4;
    if(n%2!=0 && n%3!=0)
        n++;
    cout<<n<<endl;
}
// This solution will work because

// Given a number x, it will have x/2 terms lesser than x having multiple of 2

// And x/3 terms will be multiple of 3, in which x/(3*2) will be even i.e. overlap with two, and x/(3*2) + 1(optional) will be odd terms.

// ans/2 + ans/6 = n[input]

// return ans;