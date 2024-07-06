#include<iostream>
using namespace std;

template <class T,class T1>
class Number{
    private:
    T num1;
    T num2;

    public:
    Number(T number1, T number2){
        num1 = number1;
        num2 = number2;
    }
    T getNum(){
        return num1 + num2;
    }
};

/*
//Template of a function
template<typename T>
T add(T a, T b){
    return a+b;
}
*/

int main()
{

    int n1,n2;
    cout<<"Enter num1"<<endl;
    cin>>n1;
    cout<<"Enter num2"<<endl;
    cin>>n2;


    Number<int,float> n(n1,n2);
    cout<<"Sum of integer value : "<<n.getNum()<<endl;

    // Number<float> n2(10.10f ,20.45);
    // cout<<"Sum of float value : "<<n2.getNum()<<endl;

    // Number<double> n3(10.20,12.12);
    // cout<<"Sum of double value : "<<n3.getNum();



    return 0;
}