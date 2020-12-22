#include<iostream> 
#include <vector>
#include <cstdlib> 
#include <string>
#include <stdexcept>
using namespace std;
// function template
template<class TYPE>
void PrintTwice(TYPE data)
{
    cout<<"Twice: " << data * 2 << endl;
}
// function template
template <typename T>
inline T const& Max (T const& a, T const& b) { 
    return a < b ? b:a; 
}
// class template
template<class T>
class Stack
{
private:
    vector<T> elems;
public:
    void push(T const&);

    void pop();

    T top()const;

    bool emty()const
    // hàm mà có const là k sua doi doi tuong ma ta dang goi
    {
        return elems.empty();
    }

    Stack(/* args */) {}
    ~Stack() {}
};
template <class T>
void Stack<T>::push(T const& elem)
{
    elems.push_back(elem);
}
template <class T>
void Stack<T>::pop(){
    if(elems.empty())
    {
        throw out_of_range("Stack<>::pop(): empty stack"); 
    }
    elems.pop_back(); 
}
template<class T>
T Stack<T>:: top()const
{
    if (elems.empty()) 
    { 
      throw out_of_range("Stack<>::top(): empty stack"); 
    }
   return elems.back();

}
int main()
{
    // PrintTwice(2);
    // PrintTwice(2.4);
    // int i = 39;
    // int j = 20;
    // cout << "Max(i, j): " << Max(i, j) << endl; 
 
    // double f1 = 13.5; 
    // double f2 = 20.7; 
    // cout << "Max(f1, f2): " << Max(f1, f2) << endl; 
 
    // string s1 = "Hello"; 
    // string s2 = "C++"; 
    // cout << "Max(s1, s2): " << Max(s1, s2) << endl; 
    try
    {
        Stack<int > intStack;
        Stack<string> stringStack;
        intStack.push(7);
        stringStack.push("adam");
        cout<<"pop intStack : "<< intStack.top()<<endl;


    }catch(exception const& ex)
    {
        cerr << "Exception: " << ex.what() <<endl; 
        return -1;
    }
    return 0;
}