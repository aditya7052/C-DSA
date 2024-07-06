#include<iostream>
using namespace std;

bool isPrime(int n){
    if(n <= 1)
    return false;

    for (int i = 2; i < n/2; i++)
    {
        if (n% i == 0)
        {
            return false;
        }
        
    }
    return true;
    
}
int main()
{

    isPrime(11) ? cout<<"true": cout<<"false"<<endl;
    isPrime(25) ? cout<<"true": cout<<"false";

    // char c = 'd';
    // int d=100;
    // cout<<int(c)<<endl;
    // cout<<char(d)<<endl;

    // cout<<"size of int :"<<sizeof(int)<<endl;
    // cout<<"size of float :"<<sizeof(float)<<endl;
    // cout<<"size of double :"<<sizeof(double)<<endl;
    // cout<<"size of string :"<<sizeof(string)<<endl;
    // cout<<"size of long :"<<sizeof(long)<<endl;
    // cout<<"size of bool :"<<sizeof(bool)<<endl;
    


    return 0;
}