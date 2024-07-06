#include<iostream>
using  namespace std;
void sum(int *a){
    *a+=2;
    cout<<*a<<endl;
}
int main(){
    int i=10;
    sum(&i);
    cout<<i<<endl;
}