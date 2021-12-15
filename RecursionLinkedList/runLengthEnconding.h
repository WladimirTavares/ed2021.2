#pragma once

/*
[1,1,1,1,2,2,2,3,3,3,4,5]
[(1,4)->(2,3)->(3,2)->(4,1)->(5,1)]
*/
template <typename T> 
ListNode < pair<T, int> > * runLengthEnconding(ListNode <T> * head){

    if(head == nullptr)
        return nullptr;
    else
    {
        T x = head->val;
        int cnt = 0;
        auto ptr = head;
        while( ptr && ptr->val == x){
            cnt++;
            ptr = ptr->next;
        }

        return new ListNode( make_pair(x, cnt), runLengthEnconding(ptr) );


    }


}
