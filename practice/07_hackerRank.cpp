/*Box b1; // Should set b1.l = b1.b = b1.h = 0;
Box b2(2, 3, 4); // Should set b1.l = 2, b1.b = 3, b1.h = 4;
b2.getLength();	// Should return 2
b2.getBreadth(); // Should return 3
b2.getheight();	// Should return 4
b2.CalculateVolume(); // Should return 24
bool x = (b1 < b2);	// Should return true based on the conditions given
cout<<b2; // Should print 2 3 4 in order.
*/
#include <iostream>
using namespace std;
class Box
{
private:
int l,b,h;
public:
    Box()
    {
        l, b, h = 0;
    }
    Box(int l, int brd, int hgt)
    {
        this->l=l;
        b=brd;
        h=hgt;
    }
    int getLength(){
        return l;
    }
    int getBreadth(){
        return b;
    }
    int getHeight(){
        return h;
    }
    long long calculateVolume(){
        return l*b*h;
    }
};
int main()
{
    Box b;
    Box b1(2,3,4);
    cout<<b1.getLength()<<endl;
    cout<<b1.getBreadth()<<endl;
    cout<<b1.getHeight()<<endl;
    cout<<b1.calculateVolume()<<endl;
    return 0;
}