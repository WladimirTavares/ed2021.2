#include <iostream>
#include <cassert>
#include "list.h"

using namespace std;
using ed::List;



int main(){

    List<int> l1;

    l1.insert_front(7);
    l1.insert_front(9);
    l1.insert_front(3);
    l1.insert_front(4);
    l1.insert_front(1);
    
    for(auto it = l1.begin(); it != l1.end(); it = it.next() ){
        cout << it.value() << endl;
    }
    
   

 

}

