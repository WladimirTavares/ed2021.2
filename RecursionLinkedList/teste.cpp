#include <cassert>
#include <iostream>
#include "node.h"

#define DEBUG
using namespace std;

int main(){

    ListNode <int> * e1 = new ListNode<int>(6, nullptr);
    ListNode <int> * e2 = new ListNode<int>(4, e1);
    ListNode <int> * e3 = new ListNode<int>(3, e2);
    ListNode <int> * e4 = new ListNode<int>(5, e3);

    #ifdef DEBUG
    cout << "sizeList function ... " << endl;
    assert( sizeList(e4) == 4);
    cout << "last function ... " << endl;
    assert( last(e4) == 6);
    
    cout << "kthElement function testing..." << endl;
    assert( kthElement(e4, 0) == 5);
    assert( kthElement(e4, 1) == 3);
    assert( kthElement(e4, 2) == 4);
    assert( kthElement(e4, 3) == 6);


    assert( hasElement(e4, 5) == true);
    assert( hasElement(e4, 3) == true);
    assert( hasElement(e4, 4) == true);
    assert( hasElement(e4, 6) == true);

    
    
    #endif 

}