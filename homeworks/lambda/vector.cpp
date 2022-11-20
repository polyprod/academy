/********************************
* Filename: vector.cpp
* 
* author: filbri
* created: 2019-12-03
* 
* notes: 
* 
* ver: 2019-12-03 first version
* ******************************/
#include<iostream>
#include<string>
#include<vector>
#include<numeric>
#include<algorithm>
int main()
{
    std::vector<int> V = {4, 8, 1, 6, 10, 7};
    // print the unsorted data using std::for_each and a lambda
    std::cout << "Original data" << std::endl;
    std::for_each(V.begin(), V.end(), [](auto i) 
    { 
        std::cout << i << " "; 
    });
    std::cout << std::endl;
    // sort the data in descending order using sort and a lambda
    std::sort(V.begin(), V.end(), [](auto i, auto j) 
    {
        return (i > j);
    });
    // print the sorted data using std::for_each and a lambda
    std::cout << "Sorted data in descending order" << std::endl;
    std::for_each(V.begin(), V.end(), [](auto i) 
    {
        std::cout << i << " ";
    });
    std::cout << std::endl;
    // sort the data in ascending order using sort ASCENDING BY DEFAULT!
    std::sort(V.begin(), V.end() );
    // print the sorted data using for_each and a lambda
    std::cout << "Sorted data in ascending order" << std::endl;
    std::for_each(V.begin(), V.end(), [](auto i) 
    {
        std::cout << i << " ";
    });
    std::cout << std::endl;
    return 0;
}