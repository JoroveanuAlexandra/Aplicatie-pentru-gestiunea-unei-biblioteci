#include "Imprumut.h"
using namespace std;
Imprumut::Imprumut()
{
    //ctor
}

Imprumut::~Imprumut()
{
    //dtor
}
Imprumut::Imprumut( int _numar_carte,string _gen)
{
    numar_carte=_numar_carte;
    gen=_gen;
}
int Imprumut::Getnumar_carte()
{
     return numar_carte;
}
void Imprumut::Setnumar_carte(int val)
{
    numar_carte = val;
}
string Imprumut::Getgen()
{
     return gen;
}
void Imprumut::Setgen(string val)
{
    gen = val;
}
void Imprumut:: realizareImprumut(string data_imprumut1,Cititor cit1,Carte car1){
            data_imprumut = data_imprumut1;
            car.copyCarte(car1);
            cit.copyCititor(cit1);
        }
void Imprumut::CitireGen(){
            cout<<"0-SF"<<endl;
            cout<<"1-thriller"<<std::endl;
            cout<<"2-dezvoltare personala"<<endl;
            cout<<"3-fantasy"<<endl;
            cout<<"4-educationale"<<endl;
            int genc;
            cin>>genc;
            cout<<"Introduceti numarul cartilor de acest gen"<<endl;
            int nrcarte;
            cin>>nrcarte;
            numar_carte = nrcarte;
            gen= genuri[genc];
        }
