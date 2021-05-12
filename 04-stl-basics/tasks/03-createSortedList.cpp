#include <iostream>
#include <vector>
#include <list>
#include <functional>
// Implement createSortedList
// add proper include :)

std::list<int> createSortedList(std::vector<int>& vec)
{
    std::list<int> my_list(vec.begin(), vec.end());
/*
    for(auto &a: vec)
    {
        my_list.push_back(a);
    }
  */


    my_list.sort();
    return my_list;
}

int main() {
    std::vector<int> vec{2, 3, 4, 1, 6, 5, 8, 7, 9, 0};
    auto list = createSortedList(vec);

    for (const auto& el : list)
        std::cout << el << " ";

    return 0;
}
