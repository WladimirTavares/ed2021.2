#pragma once

//returns the number of items in a list
template <typename T> 
int sizeList(ListNode <T> * head){

    if(head == nullptr)
        return 0;
    else
        return 1 + sizeList(head->next);

}