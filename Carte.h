#ifndef CARTE_H
#define CARTE_H
#include <iostream>
using namespace std;


class Carte
{

    public:
Carte();
        virtual ~Carte();
        Carte(string _titlu, string _autor, string _editura,  string _gen,int _an_public, int _nr_pag);
        void copyCarte(Carte c);
        string Gettitlu();
        void Settitlu(string val);
        string Getautor();
        void Setautor(string val);
        string Geteditura();
        void Seteditura(string val);
        string Getgen();
        void Setgen(string val);
        int Getan_public();
        void Setan_public(int val);
        int Getnr_pag();
        void Setnr_pag(int val);
        friend std::ostream & operator <<( std:: ostream& os,Carte& book)
        {
            os<<book.titlu<<"\t\t"<<book.autor<<"\t"<<book.editura<<"\t"<<book.gen<<"\t"<<book.an_public<<"\t"<<book.nr_pag;
            return os;
        }
        friend istream& operator >>(istream& is,Carte& book)
        {
            cout<<endl;
            cout<<"Informatii carte"<<endl;
            cout<<"Introduceti numele cartii:"<<endl;
            is>>book.titlu;
            cout<<"Introduceti autorul cartii: "<<endl;
            is>>book.autor;
            cout<<"Introduceti editura cartii: "<<endl;
            is>>book.editura;
            cout<<"Introduceti genul cartii: "<<endl;
            is>>book.gen;
            cout<<"Introduceti anul publicarii cartii: "<<endl;
            is>>book.an_public;
            cout<<"Introduceti numarul de pagini al cartii:"<<endl;
            is>>book.nr_pag;
            return is;
        }

        string data_returnare;
    protected:

    private:
        string titlu;
        string autor;
        string editura;
        string gen;
        int nr_pag, an_public;

};

#endif // CARTE_H
