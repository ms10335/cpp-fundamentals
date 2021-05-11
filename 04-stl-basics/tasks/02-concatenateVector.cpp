#include <iostream>
#include <vector>

// Implement concatenateVector.
// It should take 2 vectors and return one which has alternately elements from the first and the other one.


std::vector<int> concatenateVector(std::vector<int>& vec1, std::vector<int>& vec2)
{
    std::vector<int> my_vector{};
    
    int iter=0, int_vec1=0, int_vec2=0;

    while(int_vec1 != vec1.size() || int_vec2 != vec2.size())
    {
        //sprawadzam czy jest parzyste lub nie take wstawiam wartosci
        if(iter & 1 != 0)
        {
            my_vector.push_back(vec2[int_vec2]);
            ++int_vec2;
        }
        else
        {
            my_vector.push_back(vec1[int_vec1]);
            ++int_vec1;
        }
        ++iter;
    }
    //sprawdzam czy jeszcze cos nie zostało w obu wektorach
    while(int_vec1 != vec1.size())
    {
        my_vector.push_back(vec1[int_vec1]);
        ++int_vec1;
    }

    while(int_vec2 != vec2.size())
    {
        my_vector.push_back(vec2[int_vec2]);
        ++int_vec2;
    }

    return my_vector;
}


int main() {
    std::vector<int> vec1 {1, 2, 3, 4, 5};
    std::vector<int> vec2 {11, 12, 13, 14, 15};

    auto vec = concatenateVector(vec1, vec2);
    for (const auto& el : vec) {
        std::cout << el << " ";
    }
    return 0;
}
