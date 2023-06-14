#include "Cititor.h"
using namespace std;
Cititor::Cititor()
{
    //ctor
}

Cititor::~Cititor()
{
    //dtor
}
Cititor::Cititor(string _nume,string _prenume,int _varsta)
{
    this->nume=_nume;
    this->prenume=_prenume;
    this->varsta=_varsta;
}
string Cititor::Getnume()
{
    return nume;
}
void Cititor::Setnume(string val)
{
    nume = val;
}
string Cititor::Getprenume()
{
    return prenume;
}
void Cititor::Setprenume(string val)
{
    prenume = val;
}
int Cititor::Getvarsta()
{
    return varsta;
}
void Cititor::Setvarsta(int val)
{
    varsta = val;
}
void Cititor::copyCititor(Cititor cit){
            nume = cit.Getnume();
            prenume = cit.Getprenume();
            varsta = cit.Getvarsta();
        }
