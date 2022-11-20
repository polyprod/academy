/********************************
* Filename: main.cpp
* 
* author: filbri
* created: 2019-12-03
* 
* notes: 
* 
* ver: 2019-12-03 first version
* ******************************/
#include <iostream>
#include <string>
#include <algorithm>
#include <list>
int main()
{
    // create a list of integers with a few initial elements
    std::list<int> numbers;
    numbers.push_back(13);
    numbers.push_back(21);
    numbers.push_back(41);
    numbers.push_back(43);
    numbers.push_back(92);
    // use the find_if() function and a lambda expression to find the
    // first even number in the list
    const std::list<int>::const_iterator result =
    find_if(numbers.begin(), numbers.end(), 
    [](int n) 
    {
        return (n % 2) == 0; // return true or false
    }
    );
    // print the result
    if ( result != numbers.end() ) // if find_if does not return last
    {
        std::cout << "The first even number in the list is " << *result << "." << std::endl;
    } 
    else 
    {
        std::cout << "The list contains no even numbers." << std::endl;
    }
    return 0;
}