#include <iostream>
#include <list>
#include <string>
#include <vector>
#include <map>

// Implement createMap. It should take a vector and list and
// return a map of merge them as keys from the vector and values from the list
std::map<int, std::string> createMap(std::vector<int>& keys, std::list<std::string>& sValues)
{
    if(keys.size() != sValues.size())
    {
        return{};
    }
    std::map<int, std::string>map{};
    auto listptr = sValues.begin();
    for(int i=0; i < keys.size(); ++i)
    {
        map[keys[i]] = *listptr++;
    }
    
    return map;
    
}

int main() {
    std::vector<int> vec{1, 2, 3, 4, 5};
    std::list<std::string> list{"One", "Two", "Three", "Four", "Five"};
    auto map = createMap(vec, list);

    for (const auto& pair : map)
        std::cout << pair.first << " | " << pair.second << '\n';

    return 0;
}
