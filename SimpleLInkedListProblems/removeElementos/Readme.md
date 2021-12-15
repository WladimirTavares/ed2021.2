# Remove elementos

Dada a cabeça de uma lista encadeada e um inteiro val, remova todos os nós da lista encadeada que possui Node.val == val e retorne a nova cabeça.

Exemplo:

![Exemplo1](https://assets.leetcode.com/uploads/2021/03/06/removelinked-list.jpg)

Entrada:  head = [1,2,6,3,4,5,6], val = 6
Saída: [1,2,3,4,5]




```C++
#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

class ListNode {
    public:
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {} 
};

ListNode* removeElements(ListNode* head, int val) 
{
        
        
        
}

int main(){
    int n, val;
    ListNode * head= nullptr;
    cin >> n >> val;
    for(int i = 0; i < n; i++){
        ListNode * ptr;
        int x;
        cin >> x;
        if( i == 0){
            head = new ListNode(x);
            ptr = head;
        }else{
            ptr->next = new ListNode(x, nullptr);
            ptr = ptr->next;
        }
    }

    head = removeElements(head, val);

    for(ListNode * ptr = head; ptr != nullptr; ptr = ptr->next)
        cout << ptr->val << endl;
    
    return 0;    
}

```


