#include<iostream>  
using namespace std;
int main()
{
    int value = 0;
    int value2 = 0;
    int *ptr = &value;
    int *ptr2 =&value2;
    cout << "Before increased: " << ptr << endl;
    ptr++;
    cout << " After increased: " << ptr << endl;
    cout << "Before increased: " << ptr2 << endl;
    ptr2--;
    cout << " After decreased: " << ptr2 << endl;
    return 0;
}