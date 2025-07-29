#include "circular_linked_list.hpp"

int main(void){

    CLinkedList<int> testint;
    CLinkedList<std::string> teststr;

    std::cout<<"Adding Initial values to the lists.\n";

    testint.add(50);
    teststr.add("hello");

    std::cout<<"Front element of the Linked List type Int is: " <<testint.front() <<std::endl;
    std::cout<<"Front element of the Linked List type String is: "<<teststr.front()<<std::endl;
    
    std::cout<<"Back element of the Linked List type Int is: "<<testint.back()<<std::endl;
    std::cout<<"Back element of the Linked List type String is: "<<teststr.back()<<std::endl;

    testint.add(45);
    teststr.add("hi");

    std::cout<<"Front element of the Linked List type Int is: " <<testint.front() <<std::endl;
    std::cout<<"Front element of the Linked List type String is: "<<teststr.front()<<std::endl;
    
    std::cout<<"Back element of the Linked List type Int is: "<<testint.back()<<std::endl;
    std::cout<<"Back element of the Linked List type String is: "<<teststr.back()<<std::endl;

    testint.add(20);
    teststr.add("testing");

    std::cout<<"Front element of the Linked List type Int is: " <<testint.front() <<std::endl;
    std::cout<<"Front element of the Linked List type String is: "<<teststr.front()<<std::endl;
    
    std::cout<<"Back element of the Linked List type Int is: "<<testint.back()<<std::endl;
    std::cout<<"Back element of the Linked List type String is: "<<teststr.back()<<std::endl;

    std::cout<<"Advancing the Cursors.\n";

    testint.advance();
    teststr.advance();

    std::cout<<"Front element of the Linked List type Int is: " <<testint.front() <<std::endl;
    std::cout<<"Front element of the Linked List type String is: "<<teststr.front()<<std::endl;
    
    std::cout<<"Back element of the Linked List type Int is: "<<testint.back()<<std::endl;
    std::cout<<"Back element of the Linked List type String is: "<<teststr.back()<<std::endl;

    std::cout<<"Removing the Values from the Linked Lists.\n";

    testint.remove();
    teststr.remove();

    return 0;
}