#include <iostream>
#include <string>
#include <vector>

bool isPalindrom(const std::string &str)
{
    int len = str.length();
    for (int i = 0; i < len/2; i++)
    {
        if (str[i] != str[len-i-1])
            return false;
    }
    return true;
}

std::vector<std::string> palindromFilter(std::vector<std::string> words, int minLength)
{
    std::vector<std::string> result;
    for (auto i : words)
    {
        if (i.size() >= minLength)
        {
            if (isPalindrom(i))
                result.push_back(i);
        }
    }
    return result;
}

int main()
{
    std::vector<std::string> vec1 = {"fhujhj", "67476", "dhd", "ijhwhji", "ababa"};
    std::vector<std::string> vec2 = palindromFilter(vec1, 4);

    std::cout << "Result: ";
    for (auto i : vec2)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}
