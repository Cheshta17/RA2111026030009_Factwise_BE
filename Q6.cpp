/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
#include <string>

using namespace std;
vector<string> u={"","one","two","three","four","five","six","seven","eight","nine"};
vector<string> n={"","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
vector<string> t={"","ten","twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninety"};
string h="hundred";
string th="thousand";
string a="and";
int letter(int arr){
    int c=0;
    if(arr==1000){
        return u[1].size()+t.size();
    }
    int hp=arr/100;
    int b=arr%100;
    if(hp>0) c+=u[hp].size()+h.size();
    if(b>0) c+=a.size();
int tp=b/10;
int up=b%10;
if(tp==1 && up>0){
    c+=n[up].size();
}
else{
    c+=n[tp].size();
    c+=u[up].size();
}
return c;
}
