# Detecte Loop

Dada uma lista encadeada de N nós. Sua tarefa é checar se essa lista encadeada tem um loop. 


**Exemplo 1:**

**Entrada:**
```
N = 3
X = 2
valores = [1,2,3]
```
**Saída**
```
1
```

**Explicação:** Essa entrada indica que o último nó da lista encadeada aponta para o segundo nó da lista gerando uma lista com um loop

1->2->3->2->3->...





**Exemplo 2:**

**Entrada:**
```
N = 3
X = 0
valores = [1,2,3]
```
**Saída**
```
0
```

**Explicação:** Essa entrada indica que o último nó da lista encadeada aponta para nullptr.

1->2->3->nullptr

**Dica:**

Use o algoritmo da tartaruga e o coelho. Mantenha dois ponteiros na lista encadeada,:  slow (a tartaruga) e o  fast (coelho). Em cada etapa do algoritmo, o ponteiro slow(tartaruga) avança um nó a frente e o ponteiro fast(coelho) avança dois nós a frente (não esqueça de verificar se o ponteiro intermediário é não nulo). Se os dois ponteiros são iguais então a lista encadeada possui um ciclo entre slow e fast.

Por exemplo, considere a seguinte função $f(x) = (2x + 1) ~mod~ 7$. Essa função será utilizada para gerar a nossa lista encadeada com um loop. Considere a seguinte lista encadeada gerada pelos seguintes valores: $[x_0, f(x_0), f((x_0)), \ldots]$ com $x_0 = 2$: $[2,5,4,2,5,4,...]$.

Passo 0: slow = 2, fast = 2
Passo 1: slow = f(2) = 5, fast = f(f(2)) = 4
Passo 2: slow = f(5) = 4, fast = f(f(4)) = 5
Passo 3: slow = f(4) = 2, fast = f(f(5)) = 2 
```
Passo 0:
 slow
 v 
[2,5,4,2,]
 ^
 fast

Passo 1:
 slow
   v 
[2,5,4,2,5,4,2,5,4]
     ^
     fast

Passo 2:
    slow
     v 
[2,5,4,2,5,4,2,5,4]
         ^
         fast


Passo 3:
    slow
       v 
[2,5,4,2,5,4,2,5,4]
             ^
             fast
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
    int n, x;
    cin >> n >> x;
    ListNode * head;
    ListNode * tmp = nullptr;

    ListNode * ptr;
        
    for(int i = 1; i <= n; i++){
        int v;
        cin >> v;
        if( i == 1){
            head = new ListNode(v);
            ptr = head;
        }else{
            ptr->next = new ListNode(v, nullptr);
            ptr = ptr->next;
        }

        if(i == x){
            tmp = ptr;
        }

    }

    
    ptr->next = tmp;
    return head;

}

bool detectLoop(ListNode* head)
{
    
}





int main(){
    
    ListNode * head = readList();
    
    cout << detectLoop(head) << endl;

    return 0;    
}


```


