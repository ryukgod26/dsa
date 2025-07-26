#include "single_linked_list.hpp"

int main(void)
{
    SLinkedList<int> testint;
    SLinkedList<std::string> teststr;
    
    testint.add(5);
    teststr.add("hello");

    std::cout<<"TestInt First Element is : " << testint.get_element()<<'\n';
    std::cout<<"Test Str First Elemnent is : " << teststr.get_element()<<'\n';

    testint.add(9);
    teststr.add("Hi");

    std::cout<<"TestInt First Element is : " << testint.get_element()<<'\n';
    std::cout<<"Test Str First Elemnent is : " << teststr.get_element()<<'\n';

    testint.remove();
    teststr.remove();

    std::cout<<"TestInt First Element is : " << testint.get_element()<<'\n';
    std::cout<<"Test Str First Elemnent is : " << teststr.get_element()<<'\n';

    return 0;
}