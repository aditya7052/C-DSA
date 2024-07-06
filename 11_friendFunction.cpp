#include<iostream>
using namespace std;
class Distance{
    private:
    int meter;

    friend int increaeDistance(Distance);
    public:
    Distance(){
        meter=0;
    }
};

int increaeDistance(Distance d){
    d.meter += 0;
    return d.meter;
}
int main()
{
    Distance d1;
    cout<<"Distance is : "<<increaeDistance(d1);
    return 0;
}