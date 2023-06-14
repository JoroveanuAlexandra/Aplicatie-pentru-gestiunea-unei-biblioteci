#ifndef CITITOR_H
#define CITITOR_H

#include <string.h>
#include <bits/stdc++.h>
#include <iostream>

using namespace std;
class Cititor
{
    public:
        Cititor();
        virtual ~Cititor();
        Client(string _nume,string _prenume, int _varsta);
        string Getnume();
        void Setnume(string val);
        string Getprenume();
        void Setprenume(string val);
        int Getvarsta();
        void Setvarsta(int val);
        Cititor(string _nume,string _prenume, int _varsta);
        friend  ostream& operator<<(ostream& os, Cititor &cl)
        {
           os<<cl.Getnume()<<" "<<cl.Getprenume()<<" "<<cl.Getvarsta();
           return os;
        }
        friend istream& operator >>(istream& is,Cititor& cit)
        {   cout<<endl;
            cout<<"Introduceti numele"<<endl;
              is>>cit.nume;
            cout<<"Introduceti prenumele"<<endl;
              is>>cit.prenume;
            cout<<"Introduceti varsta"<<endl;
            is>>cit.varsta;
            return is;
        }
        void copyCititor(Cititor cit);
    protected:

    private:
        string nume;
        string prenume;
       int varsta;
};

#endif // CLIENT_H


