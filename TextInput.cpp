#include <iostream>
#include <string>
#include <vector>

class TextInput
{
public:
    std::vector<char> x;
    virtual void add(char c){
        x.push_back(c);
    };
    std::string getValue() { 
        std::string s(x.begin(),x.end());
        return s;

     }
};

class NumericInput : public TextInput 
{ 
    void add(char c){
        if(c>47 && c<58)
        {
            x.push_back(c);
        }
    }
};


int main()
{
    TextInput* input = new NumericInput();
    input->add('1');
    input->add('a');
    input->add('0');
    std::cout << input->getValue();
}