#include <iostream>
#include <string>

bool IsPalindrome(const std::string& phrase)
{
    size_t j = phrase.size() - 1;
    for(size_t i = 0 ; i < phrase.size();i++)
    {
        if(phrase[i] != phrase[j])
        {
            return false;
        }
        j--;
    }
    return true;
}

int main()
{
    std::string phrase;
    std::cout << "Please enter a phrase: ";
    std::cin >> phrase;
    if(IsPalindrome(phrase))
    {
        std::cout << "This phrase is a palindrome" << std::endl;
    }
    else
    {
        std::cout << "This is not a palindrome" << std::endl;
    }

    return 0;
}
