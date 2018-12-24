#include <iostream>
#include <string>

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

int main()
{
    std::string str1 = "abcba";
    std::string str2 = "abcde";
    std::string str3 = "98789";
    std::cout << isPalindrom(str1) << std::endl;
    std::cout << isPalindrom(str2) << std::endl;
    std::cout << isPalindrom(str3) << std::endl;
    return 0;
}
