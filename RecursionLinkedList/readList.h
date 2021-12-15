#pragma once


template <typename T>
ListNode<T>* readList(int n){
    if(n == 0)
    {
        return nullptr;
    }
    else
    {
        T x;
        cin >> x;
        return new ListNode<T>(x, readList<T>(n-1) );
    }
}

