#include<iostream>
using namespace std;

template <class T>
class Number{
    private:
    T num;

    public:
    Number(T number){
        num = number;
    }
    T getNum(){
        return num;
    }
};

int main()
{
    Number<int> n(10);
    cout<<n.getNum()<<endl;

    Number<float> n2(10.10f);
    cout<<n2.getNum()<<endl;

    Number<double> n3(10.20);
    cout<<n3.getNum();



    return 0;
}