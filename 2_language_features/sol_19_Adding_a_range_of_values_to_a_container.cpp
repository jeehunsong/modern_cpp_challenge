#include <iostream>
#include <vector>

#define endl '\n'

using namespace std;

/*
    1. Use variadic
    2. Use std::copy (begin, end, ostream_iterator<type>(std::cout, " ")) to print list
*/

template <typename ContainerType, typename ValueType>
void add(ContainerType& container, const ValueType& value)
{
    container.push_back(value);
}

int main(int argc, char** argv)
{
    ios_base::sync_with_stdio(false);

    vector<int> v;
    add(v, 1);
    add(v, 2);
    add(v, 3);

    for (auto i: v)
        cout << i << " ";
    cout << endl;

    return 0;
}