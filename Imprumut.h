#ifndef IMPRUMUT_H
#define IMPRUMUT_H
#include <iostream>
#include "Carte.h"
#include "Cititor.h"
using namespace std;

class Imprumut
{
    public:
        /** Default constructor */
        Imprumut();
        /** Default destructor */
        virtual ~Imprumut();

        int Getnumar_carte();
        void Setnumar_carte(int val);
        string Getgen();
        void Setgen(string val);
        Imprumut( int _numar_carte,string _gen);
        void realizareImprumut(string data_imprumut1,Cititor cit1,Carte car1);
        void CitireGen();

        friend ostream& operator<<(ostream& os, Imprumut& imp){
            os<<imp.data_imprumut<<" "<<imp.cit<<" "<<imp.car<<endl;
                        return os;
        }
    protected:

    private:
        int numar_carte;
        string gen;
        Cititor cit;
        Carte car;
        string data_imprumut;
        string genuri[6] = {"SF","romance","thriller","dezvoltare personala","fantasy","educationale"};


};

#endif // IMPRUMUT_H
