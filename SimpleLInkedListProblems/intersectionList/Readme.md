# Intersecção de duas listas encadeadas

Dadas duas listas ordenadas em ordem crescente, crie uma nova lista representando a interseção das duas listas. A nova lista deve ser feita com memória própria - as listas originais não devem ser alteradas.

Observação: os elementos da lista não são necessariamente distintos.


**Exemplo 1:**

**Entrada:**
```
L1 = 1->2->3->4->6
L2 = 2->4->6->8
```
**Saída**
```
2->4->6
```





**Exemplo 2:**

**Entrada:**
```
L1 = 10->10->20->40->50
L2 = 10->15->40
```
**Saída**
```
10->40
```








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

 

ListNode* readList(){
    int n;
    cin >> n;
    ListNode * head;
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

    return head;

}


ListNode * intersectionList(ListNode * head1, ListNode * head2){



}


void printList(ListNode * head){
    for(ListNode * ptr = head; ptr != nullptr; ptr = ptr->next)
        cout << ptr->val << endl;
}



int main(){
    
    ListNode * head1 = readList();
    ListNode * head2 = readList();
     
    ListNode * res = intersectionList(head1, head2);


    printList(res);

    return 0;    
}



```


