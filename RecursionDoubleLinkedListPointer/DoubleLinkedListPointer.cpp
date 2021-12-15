#include <iostream>
#include <vector>
#include <cassert>
#include <stdexcept>
#include <functional>
#include <utility>

using namespace std;

template <typename T>
class Node {
    public:
    T val;
    Node *next;
    Node *prev;
    Node() : val( T()  ), next(nullptr), prev(nullptr) {}
    Node(T x) : val(x), next(nullptr), prev(nullptr) {}
    Node(T x, Node *prev, Node *next) : val(x), prev(prev), next(next) {} 
};

template<typename T>
Node<T> * readLinkedList(int n){
    if(n==0)
        return nullptr;

    T x;
    cin >> x;

    if(n == 1)
    {
        return new Node(x);
    }
    else
    {   
        auto ptr  = readLinkedList<T>(n-1);
        auto ptr2 = new Node<T>(x, nullptr, ptr);
        ptr->prev = ptr2;
        return ptr2; 
    }
} 

template <typename T>
ostream& operator<<(ostream &output, Node<T> * head)
{
    if( head==nullptr )
    {
        output << "nullptr";    
    }
    else
    {
        output << head->val << " <-> " << head->next;

        if(head->next){
            assert( head->next->prev == head );
        }
    }   
    return output;
}

template <typename T>
Node<T> * deleteNode(Node<T> * head, Node<T> * node)
{
    node->prev->next = node->next;
    node->next->prev = node->prev;
    delete node;

    return head;
}

template <typename T>
bool * searchNode(Node<T> * head, T x)
{
    if(head == nullptr)
        return false;
    else if(head->val == x)
        return true;
    else   
        return searchNode(head->next, x);
}


template <typename T>
Node<T> * remove_element(Node<T> * head, T x){
    if(head == nullptr)
    {
        return nullptr;
    }else{

        if(head->val == x)
        {
           auto ptr  = head->next;
           delete head;
           return ptr;
        }
        else
        {
            head->next = remove_element(head->next, x);
            if( head->next )
                head->next->prev = head;
            return head;
        }

    }
}

template <typename A, typename B> 
Node <B> * mapList(Node<A> * head, function <B (A)> f)
{
    if(head == nullptr)
    {
        return nullptr;
    }
    else if(head->next == nullptr){
        return new Node<B>( f(head->val) );
    }
    else
    {   
        auto ptr = mapList(head->next, f);
        auto ptr2 = new Node<B>( f(head->val), nullptr , ptr );
        ptr->prev = ptr2;
        return ptr2;
    }

}

template <typename T>
Node<T> * remove_element2(Node<T> * head, T x){
    auto ptr = head;
    while(ptr){
        if(ptr->val == x)
        {
            
            auto temp = ptr;
            ptr->prev->next = ptr->next;
            ptr->next->prev = ptr->prev;
            ptr = ptr->next;
            
            if(temp == head){
                head = head->next; 
            }
            
            delete temp;
        }
        else
        {
            ptr = ptr->next;
        }
    }
    return head;
}
template <typename T>
void  insertNode(Node <T> * & head, int pos, T x){
  
   auto ptr = head;
      
   for(int k = 0; k < pos; k++){
       ptr = ptr->next;
   }
   
   auto ptr2 = new Node<T>(data);
   
   ptr2->next = ptr->next;
   ptr2->prev = ptr;
      
   ptr->next = ptr2;



}

template <typename T>
Node <T> * insertNode2(Node <T> * head, int pos, T x){

    if(pos == -1){
        Node<T> * ptr = new Node<T>(x, nullptr, head);
        return ptr;
    }else{
        head->next = insertNode2(head->next, pos-1, x);
        head->next->prev = head;
        return head;
    }

}

template <typename T>
Node<T> * insertSorted(Node<T> * head, T x)
{

    if(head == nullptr)
    {
        return new Node<T>(x);
    }
    else
    {
        if( head->val > x)
        {
            return new Node<T>(x, head->prev, head);
        }
        else
        {
            head->next = insertSorted(head->next, x);
            if(head->next)
                head->next->prev = head;
            return head;
        }


    }


}

// Given a doubly linked list, rotate the linked list counter-clockwise 
// by P nodes. Here P is a given positive integer and is smaller than 
// the count of nodes(N) in a linked list.

// rotateList(1 <-> 2 <-> 3 <-> 4 <-> 5 <-> 6 -> nullptr, 2) = 
//  3 <-> 4 <-> 5 <-> 6 -> 1 <-> 2 -> nullptr

template <typename T>
Node<T> * rotateList(Node<T> * head, int p);



//Given a doubly linked list of n elements. 
//The task is to reverse the doubly linked list.
template <typename T>
Node<T> * reverseList(Node<T> * head);

template <typename T>
Node<T> * partition(Node<T> * head);

template <typename T>
Node<T> * quicksort(Node<T> * head);

template <typename T>
Node<T> * selectionsort(Node<T> * head);



int main(){
    int n;
    cin >> n;

    Node<int> * head = readLinkedList<int>(n);
    cout << head << endl;

    auto node = head->next->next;

    head = deleteNode(head, node);

    cout << head << endl;




    
    //int x;
    //cout << "element to insert: ";
    //cin >> x;
    //head = insertSorted(head, x);
    //cout << head << endl;


    //function<int(int)> dobro = [](int x){ return 2*x; };    

    //head = mapList(head, dobro ); 

    //cout << head << endl;



}

