#include <iostream>
#include <cassert>
#include "list.h"

using namespace std;
using ed::List;


int main(){

    List <int> l;

    l.insert_front(4);
    l.insert_front(3);
    l.insert_front(2);
    l.insert_back(5);


    cout << l << endl;
    
    cout << l.front() << endl;
    cout << l.back() << endl;
    
    l.remove_back();
    cout << l << endl;

    l.remove_back();
    cout << l << endl;

    l.remove_back();
    cout << l << endl;

    l.remove_back();
    cout << l << endl;

    l.insert_before( l.begin(), 4);
    l.insert_before( l.begin().next(), 5);
    l.insert_before( l.begin().next().next() , 6);
    
    cout << l << endl;

    l.erase_before( l.begin().next() );

    cout << l << endl;    

}

