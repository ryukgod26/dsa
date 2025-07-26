#include "double_linked_list.hpp"

int main(void){
    
    DLinkedList<int> test;
    test.addFront(5);
    test.addFront(60);

    std::cout<<"Front element is:"<<test.front()<<std::endl;
    test.removeFront();
    std::cout<<"Front element is:"<<test.front()<<std::endl;
    test.addBack(9);    
    std::cout<<"Front element is:"<<test.front()<<std::endl;
    test.addFront(20);
    std::cout<<"Front element is:"<<test.front()<<std::endl;
    

    return 0;
}