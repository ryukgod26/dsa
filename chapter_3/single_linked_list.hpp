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
        T get_element() const;
        void add(const T&);
        void remove();
        bool empty() const;
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
bool SLinkedList<T>::empty() const {
return (head==nullptr);
}

template <typename T>
T SLinkedList<T>::get_element() const{
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
