#include<iostream>
template <typename T>
class SLinkedList;

template<typename T>
class SNode{
private:
    SNode* next;
    T elem;
    friend class SLinkedList<T>;
};

template<typename T>
class SLinkedList{
    public:
        SLinkedList();
        ~SLinkedList();
        const T get_element();
        void add(const T&);
        void remove();
        bool empty();
    private:
        SNode<T> *head;
};

template <typename T>
SLinkedList<T>::SLinkedList()
:head(nullptr)
{}

template<typename T>
SLinkedList<T>::~SLinkedList(){
    while(!(empty())){
        remove();
    }
    delete head;
}

template <typename T>
bool SLinkedList<T>::empty(){
return (head==nullptr);
}

template <typename T>
const T SLinkedList<T>::get_element(){
    return head->elem;
}

template<typename T>
void SLinkedList<T>::add(const T& input){
SNode<T>* a = new SNode<T>;
a->elem = input;
a->next = head;
head = a;
}

template<typename T>
void SLinkedList<T>::remove(){
    SNode<T>* old = head;
    head= old->next;
    delete old;
}
