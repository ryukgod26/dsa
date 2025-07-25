template <typename T>
class DNode{
    private:
        DNode *prev;
        DNode *next;
        T data;
    friend class DLinkedList;
};

template <typename T>
class DLinkedList{
    public:
        DLinkedList();
        ~DLinkedList();
        const T front();
        const T back();
        const bool empty();
        void addFront(const T&);
        void addBack(const T&);
        void removeFront();
        void removeBack();

    private:
        DNode<T> *header;
        DNode<T> *trailer;
    protected:
        void add(DNode<T>* node, const T& elem );
        void remove(DNode<T>* node);
};

template <typename T>
DLinkedList<T>::DLinkedList()
:header(NULL),trailer(NULL)
{

}

template <typename T>
const bool DLinkedList<T>::empty(){
    return header->next==trailer;
}

template <typename T>
const T DLinkedList<T>::front()
{
if(!(empty())){
    return header->next;
}
}

template <typename T>
const T DLinkedList<T>::back(){
    if(!(empty())){
        return trailer->prev;
    }
}

template <typename T>
void DLinkedList<T>::add(DNode<T>* node, const T& elem)
{
if(!(empty()))
{
DNode<T>* a = new DNode<T>;
a->data = elem;
a->next = node->next;
node->next =a;
a->prev = node->prev;

}
}

template <typename T>
void DLinkedList<T>::remove(DNode<T>* node)
{
if(!(empty()))
{
DNode<T>* a = new DNode<T>;
a= node->prev;
a->next = trailer;
trailer->prev = a;
delete node;

}
}

template <typename T>
void DLinkedList<T>::addfront(const T& node){
    add()
}

template <typename T>
DLinkedList<T>::~DLinkedList(){

}
