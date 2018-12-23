#include <iostream>
#include <vector>

void copyVector(std::vector<int> &vec1, std::vector<int> &vec2)
{
    vec2.insert(vec2.end(), vec1.begin(), vec1.end());
    vec1.clear();
}

int main()
{
    std::vector<int> numbers1 = {5, 6, 7, 8, 9};
    std::vector<int> numbers2 = {0, 1, 2, 3, 4};

    copyVector(numbers1, numbers2);

    for (auto i : numbers2)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    if (numbers1.empty())
            std::cout << "Vector #1 has been cleared" << std::endl;
        else
            std::cout << "Vector #1 has not been cleared" << std::endl;
    return 0;
}
