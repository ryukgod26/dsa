#include <iostream>
#include<cstdlib>
template <typename T>
class DLinkedList;

template <typename T>
class DNode{
    private:
        DNode<T> *prev;
        DNode<T> *next;
        T data;
        friend class DLinkedList<T>;
};

template <typename T>
class DLinkedList{
    public:
        DLinkedList();
        ~DLinkedList();
        T& front() const;
        T& back() const;
        bool empty() const;
        void addFront(const T&);
        void addBack(const T&);
        void removeFront();
        void removeBack();
        void printList();
    private:
        DNode<T> *header;
        DNode<T> *trailer;
    protected:
        void add(DNode<T>* node, const T& elem );
        void remove(DNode<T>* node);
};

template <typename T>
DLinkedList<T>::DLinkedList()

{
header = new DNode<T>;
trailer = new DNode<T>;
header->next =  trailer;
trailer->prev = header;
}

template <typename T>
bool DLinkedList<T>::empty() const{
    return (header->next==trailer);
}

template <typename T>
T& DLinkedList<T>::front() const
{
if(!(empty())){
    return (header->next->data);
}
}

template <typename T>
T& DLinkedList<T>::back() const
{
    if(!(empty())){
        return trailer->prev->data;
    }
}

template <typename T>
void DLinkedList<T>::add(DNode<T>* node, const T& elem)
{
DNode<T>* a = new DNode<T>;
a->data = elem;
a->next = node->next;
node->next->prev = a;
node->next =a;
a->prev = node;

}

template <typename T>
void DLinkedList<T>::remove(DNode<T>* node)
{
if(!(empty()))
{
node->next->prev = node->prev;
node->prev->next = node->next;
delete node;
}
}

template <typename T>
void DLinkedList<T>::addFront(const T& elem){
    add(header, elem);
}

template<typename T>
void DLinkedList<T>::addBack(const T& elem)
{
    add(trailer->prev,elem);
}

template<typename T>
void DLinkedList<T>::removeFront()
{
remove(header->next);
}

template<typename T>
void DLinkedList<T>::removeBack()
{
remove(trailer->prev);
}

template <typename T>
DLinkedList<T>::~DLinkedList(){
while ((!(empty())))
{
    removeFront();
}
delete header;
delete trailer;
}

template<typename T>
void DLinkedList<T>::printList(){
    DLinkedList<T> del;
while(!(empty())){
    std::cout<<"Element: "<<front()<<std::endl;
    del.addFront(front());
    removeFront();
}
while(!(del.empty())){
    addFront(del.front());
    del.removeFront();
}

}
