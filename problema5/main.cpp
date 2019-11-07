#include <iostream>
#include <iostream>
#define tipDate int
using namespace std;
struct nod
{
    tipDate info;
    nod* urm;
    nod* prec;
};
struct listaDubla
{
    nod* prim;
    nod *ultim;
    unsigned int lungime;
};
void citesteListaDubla(listaDubla& L) {
    cout<<"Dati numarul de elemente: ";
    cin>>L.lungime;
    tipDate element;
    L->ultim=NULL; L->prim=NULL;
    nod* p; nod* q;
    for (unsigned int i=1; i<=L.element; i++)
    {
        cout<<"Dati elementul al "<<i<<"-lea: ";
        cin>>element; p=new nod; p->info=element;
        p->urm=L;L=p;
    }
}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
