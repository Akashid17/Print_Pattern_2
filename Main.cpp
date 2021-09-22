
#include<iostream>

using namespace std;

class PatternX
{
    public:

        void Display(int);
};

void PatternX::Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int i = 0;

    for(int i = 1; i <= iNo; i++)
    {
        cout<<"*\t";
    }
    for(int i = 1; i <= iNo; i++)
    {
        cout<<"#\t";
    }
    cout<<endl;
}

int main()
{
    int iValue = 0;

    cout<<"Enter Number\n";
    cin>>iValue;

    PatternX pobj;
    pobj.Display(iValue);

    return 0;
}