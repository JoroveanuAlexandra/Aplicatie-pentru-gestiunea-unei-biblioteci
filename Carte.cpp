#include "Carte.h"
#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;

Carte::Carte()
{
    //ctor
}

Carte::~Carte()
{
    //dtor
}
void Carte::Settitlu(string val)
{
    titlu = val;
}
string Carte::Gettitlu()
{
    return titlu;
}

string Carte::Getautor()
{
    return autor;
}
void Carte::Setautor(string val)
{
    autor = val;
}
string Carte::Geteditura()
{
     return editura;
}
void Carte::Seteditura(string val)
{
    editura = val;
}
int Carte::Getan_public()
{
    return an_public;
}
void Carte::Setan_public(int val)
{
    an_public= val;
}
string Carte::Getgen()
{
    return gen;
}
void Carte::Setgen(std::string val)
{
    gen = val;
}
int Carte::Getnr_pag()
{
    return nr_pag;
}
void Carte::Setnr_pag(int val)
{
    nr_pag = val;
}
Carte::Carte(string _titlu, string _autor, string _editura,  string _gen,int _an_public, int _nr_pag)
{
    this->titlu = _titlu;
    this->autor = _autor;
    this->editura = _editura;
    this->an_public = _an_public;
    this->gen = _gen;
    this->nr_pag = _nr_pag;
}


void Carte::copyCarte(Carte c)
{

            titlu = c.Gettitlu();
            autor = c.Getautor();
            editura = c.Geteditura();
            gen = c.Getgen();
            nr_pag = c.Getnr_pag();
            an_public = c.Getan_public();
            data_returnare = c.data_returnare;

        }
