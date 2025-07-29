#include<iostream>

template<typename T>
class CLinkedList;

template <typename T>
class CNode{
    private:
        T elem;
        CNode<T>* next;
        friend class CLinkedList<T>;
};

template <typename T>
class CLinkedList
{
private:
    /* data */
    CNode<T>* cursor;
public:
    CLinkedList(/* args */);
    ~CLinkedList();
    void add(const T& value);
    void remove();
    bool empty() const;
    void advance();
    T& front() const;
    T& back() const; 
};

template <typename T>
CLinkedList<T>::CLinkedList(/* args */)
:cursor(nullptr)
{
}

template<typename T>
CLinkedList<T>::~CLinkedList()
{
    while (!(empty()))      remove();
}

template <typename T>
bool CLinkedList<T>::empty() const {
    return (cursor==nullptr);
}

template<typename T>
void CLinkedList<T>::add(const T& value){
    CNode<T>* a = new CNode<T>;
    a->elem = value;
    if(empty()){
        cursor=a;
        cursor->next = cursor;
    }
    else{
    a->next = cursor->next;
    cursor->next = a;
    }
}

template<typename T>
void CLinkedList<T>::remove(){
    CNode<T>* old = cursor->next;
    if(old==cursor){
        cursor=nullptr;
    }
    else{
        cursor->next = old->next;
        delete old;
    }
}

template<typename T>
T& CLinkedList<T>::front() const{
    return (cursor->next->elem);
}

template<typename T>
T& CLinkedList<T>::back() const{
    return (cursor->elem);
}

template <typename T>
void CLinkedList<T>::advance(){
    if(!(empty())){
        cursor = cursor->next;
    }
}