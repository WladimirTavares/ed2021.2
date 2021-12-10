#pragma once

//remove duplicate elements from list
//nubList( 3->2->1->2->3->nullptr) == 3->2->1->nullptr
template <typename T>
ListNode<T> * nubList(ListNode<T> * head){
    if(head == nullptr)
        return nullptr;
    else{ 
        head->next = nubList( removeElement(head->next, head->val) );
        return head;
    }
}

