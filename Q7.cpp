/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int score(vector<int> p,int k){
    int n=p.size();
    int s=accumulate(p.begin(),p.begin()+k,0);
    int maxi=s;
    for(int i=0;i<k;i++){
        s+=p[n-1-i]-p[k-1-i];
        maxi=max(maxi,s);
    }
    return maxi;
}