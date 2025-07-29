#include"double_linked_list.hpp"

template<typename T>
void reverse(DLinkedList<T>& D){
DLinkedList<T> temp;
while(!(D.empty())){
    temp.addFront(D.front());
    D.removeFront();
}
while (!(temp.empty()))
{
    D.addBack(temp.front());
    temp.removeFront();
}


}


int main(void){
    DLinkedList<int> test;
    test.addFront(5);
    test.addFront(6);
    test.addFront(7);

    std::cout<<"Before Reversing:\n";
    test.printList();

    reverse(test);
    std::cout<<"After Reversing:\n";
    test.printList();
}