#include <iostream>
#include <memory>

// TODO: Implement calculateProduct()
// It should take 2 int values and return their product as a shared_ptr.
// Additionally, check how many owners are there.
std::shared_ptr<int> calculateProduct(int first, int second) {
    
    std::shared_ptr<int> result = std::make_shared<int>(first * second);
    std::cout << "In fun() num: " << *result << " | owners: " << result.use_count() << "\n";

    return result;
}
int main() {
    auto number = calculateProduct(10, 20);
    std::cout << "In main() num is : " << *number << " | owners: " << number.use_count() << "\n";

    return 0;
}
