#include <iostream>

using namespace std;
int estePrim(int n)
{
    if(n==0) return 0;
    if(n==1) return 0;
    if(n==2) return 1;
    for(int i=2;i<=n/2;i++)
        if(n%i==0)
            return 0;
    return 1;
}
typedef int tipDate;
int s=0;
int nr=0;
int maxim=0;
int minim=9;
int sumaceruta=14;
int sumNivel[100];
int nrNivel[100];
struct nod {
    tipDate info;
    struct nod *st; struct nod *dr;
};
typedef nod * arbore;
int esteArboreNul(arbore a)
{
   return (a==NULL);
}

void initArbore(arbore& a)
{
   if (!esteArboreNul(a)) a=NULL;
}
bool adaugaLaArboreElement(arbore& a, tipDate el) {
    if (esteArboreNul(a)) {
        a=new nod;
        if (!a) return false;
        a->info = el; a->st = NULL; a->dr = NULL;
        return true;
    }
    else if (el < a->info)
        return adaugaLaArboreElement(a->st, el);
    else
        return adaugaLaArboreElement(a->dr, el);
}
void sumaElementePrime(arbore a)
{

    if (!esteArboreNul(a))
    {
        sumaElementePrime(a->st);
        if(estePrim(a->info))
            {
                s=s+a->info;
                nr++;
            }
        sumaElementePrime(a->dr);
    }
}
int main()
{
    cout << "Arbori binari de cautare\n\n";
    arbore a; initArbore(a);
    unsigned int i; unsigned int n;
    tipDate x;
    cout<<"Dati numarul de elemente ale arborelui: "; cin>>n;
    for (i=1; i<=n; i++) {
        cout<<"Dati elementul al "<<i<<"-lea: ";
        cin>>x; adaugaLaArboreElement(a,x);
    }
    cout<<"Suma Elementelor Prime Este:";
    sumaElementePrime(a);
    cout<<s;
    return 0;
}
