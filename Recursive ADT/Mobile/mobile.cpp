#include <iostream>
#include <vector>
#include <cassert>
#include <stdexcept>
#include <functional>
#include <utility>
#include <string>
#include <algorithm>

using namespace std;

class Mobile {
    public:
    int peso;
    bool bar;
    Mobile * esq;
    Mobile * dir;
    Mobile(int peso) : peso(peso) , esq(nullptr), dir(nullptr), bar(false) {}
    Mobile(Mobile * m1, Mobile * m2) : peso(0), esq(m1), dir(m2), bar(true) {} 
    bool is_bar(){ return bar; }
};


int peso(Mobile * m){
    if( m->bar == true )
        return peso(m->esq) + peso(m->dir);
    else
        return m->peso;
}

int num_objetos(Mobile * m){
   if( m->bar == false )
        return 1;
    else
        return num_objetos(m->esq) + num_objetos(m->dir);
}


int num_barras(Mobile * m){
   if( m->bar == false )
        return 0;
    else
        return 1 + num_barras(m->esq) + num_barras(m->dir);
}

//include <algorithm> std::max

int altura(Mobile * m){
   if( m->bar == false )
        return 0;
    else
        return 1 + max( altura(m->esq), altura(m->dir) );
}


bool equilibrado( Mobile * m){
    if( m->bar == false )
        return true;
    else
        return  peso(m->esq) == peso(m->dir) && 
                equilibrado(m->esq) &&
                equilibrado(m->dir);
} 

Mobile * reflect1( Mobile * m){
    if( !m->bar )
        return m;
    else
        return new Mobile( reflect1(m->dir), reflect1(m->esq) );
} 

void reflect2( Mobile * m){
    if( m->bar )
    {
        swap(m->esq, m->dir);
        reflect2(m->esq);
        reflect2(m->dir);
    }
        
} 



ostream& operator<<(ostream &output, Mobile * m)
{
    if( m->bar )
    {
        output << "[ [" << m->esq << "] [" << m->dir << "] ]";    
    }
    else
    {
        output << " " << m->peso << " ";
    }
    
    return output;
}


int main(){
    
    Mobile * m1 = new Mobile(10);
    Mobile * m2 = new Mobile(20);
    Mobile * m3 = new Mobile(m1,m2);
    Mobile * m4 = new Mobile(30);
    Mobile * m5 = new Mobile(m3,m4);
    

    cout << peso(m5) << endl;
    
    cout << num_objetos(m5) << endl;

    cout << equilibrado(m5) << endl;    

    cout << num_barras(m5) << endl;
    
    cout << altura(m5) << endl; 

    cout << m5 << endl;   

    Mobile * m6 = reflect1(m5);

    cout << m6 << endl;   

    reflect2(m6);

    cout << m6 << endl;   




}

