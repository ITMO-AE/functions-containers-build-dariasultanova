#include <iostream>
#include <vector>

void reverse(std::vector<int> &v)
{
    int size = v.size();
    std::vector<int> v_copy = v;
    for (auto i : v_copy)
    {
        v[size - 1] = i;
        size--;
    }
}

int main()
{
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    reverse(numbers);

    for (auto i : numbers)
        std::cout << i << " ";

    std::cout << std::endl;
    return 0;
}
