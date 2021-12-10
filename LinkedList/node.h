#pragma once
#include <iostream>
#include <vector>
#include <stdexcept>
#include <functional>
#include <utility>

using namespace std;


template <typename T>
class ListNode {
    public:
    T val;
    ListNode *next;

    ListNode() : val( T()  ), next(nullptr) {}
    ListNode(T x) : val(x), next(nullptr) {}
    ListNode(T x, ListNode * next) : val(x), next(next) {}
    
};

#include "size_list.h"
#include "last_element.h"
#include "kthElement.h"
#include "hasElement.h"
#include "insert_front.h"
#include "insert_back.h"
#include "remove_front.h"
#include "remove_back.h"
#include "filterList.h"
#include "getNthFromLast.h"


