#include<iostream>
using namespace std;

int getLength(char item[]){
int length=0;
    //method 1
    // while (item[length] != '\0')
    // {
    //     length++;
    // }

    for (int i = 0; item[i] != '\0'; i++)
    {
        length++;
    }
    
    
return length;
}

int main()
{
    char str[100];
    cout<<"Enter  your name : "<<endl;
    cin.getline(str,100);

    int length=getLength(str);
    cout<<length;
    
    
    
    return 0;
}