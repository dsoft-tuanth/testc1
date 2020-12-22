#include <iostream>
#include <vector> 
#include <set>
using namespace std;

std::vector<std::string> unique_names(const std::vector<std::string>& names1, const std::vector<std::string>& names2)
{
    set<string> s;
    for(auto i : names1)
    {
        s.insert(i);
    }
    for(auto i : names2)
    {
        s.insert(i);
    }
    vector<string> output(s.begin(),s.end());
    return output;

}
int main()
{
    std::vector<std::string> names1 = {"Ava", "Emma", "Olivia"};
    std::vector<std::string> names2 = {"Olivia", "Sophia", "Emma"};
    
    std::vector<std::string> result = unique_names(names1, names2);
    for(auto element : result)
    {
        std::cout << element << ' '; // should print Ava Emma Olivia Sophia
    }
}
