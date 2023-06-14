#include <iostream>
#include "Carte.h"
#include "Cititor.h"
#include "Imprumut.h"
using namespace std;

int main()
{

    system("CLS");
    char opt,opt1,opt2,opt3;
    int countBook=6,countCit=6,countImp=0;
    int nrGen;
    int optCarte;
    int optCititor;
    string titluCautat;
    string data_luat="";
    bool searchCarte = false;
    Carte *book[50];
    book[0] = new Carte("Harry Potter","J.K. Rowling","Arthur A. Levine Books","SF",1999,360 );
    book[1]=new Carte("Puterea prezentului","Eckhart Tolle","Curtea Veche Publishing","dezvoltare personala",2016,264);
    book[2] = new Carte("Crimele de la internat","Lucinda Riley","Litera","Thriller",2023,464);
    book[3]=new Carte("Hotul de carti","Markus Zusak","RAO","istorica",2021,440);
    book[4]=new Carte ("Acolo unde canta racii","Delia Owens","Pandora M","Thriller",2022,448);
    book[5]=new Carte("Fata de pe peron","Samantha M. Bailey","RAO","Thriller",2022,296);
    Cititor *cit[50];
   // cit[0] = new Cititor()
    cit[0]=new Cititor("Popescu","Marta",20);
    cit[1]=new Cititor("Boicu","Iulian",15);
    cit[2]=new Cititor("Croitor","Alina",18);
    cit[3]=new Cititor("Balan", "Catalina",19);
    cit[4]=new Cititor("Mihai","Catalin",20);
    cit[5]=new Cititor("Bondar","Iulia",20);
    Imprumut *imp[50];
    string buffer;
    do
    {

        cout<<"1.Introduceti date de la tastatura"<<endl;
        cout<<"2.Afisare date"<<endl;
        cout<<"3.Cautare"<<endl;
        cout<<"4.Exit"<<endl;

        cout<<"Alegeti o optiune"<<endl;
        cin>>opt;
        switch(opt)
        {
        case '1':
            do
            {
                system("CLS");
                cout<<"1.Introduceti date carte"<<endl;
                cout<<"2.Introduceti date cititor"<<endl;
                cout<<"3.Introducere date imprumut"<<endl;
                cout<<"4.Revenire la meniul principal"<<endl;
                cout<<"Alegeti o optiune"<<endl;
                cin>>opt1;
                switch(opt1)
                {
                case '1':
                    book[countBook] = new Carte();
                    cin>>*book[countBook++];
                    system("pause");
                    system("CLS");
                    break;
                case '2':
                    system("cls");
                    cit[countCit] = new Cititor();
                    cin>>*cit[countCit++];

                    system("pause");
                    system("CLS");

                    break;
                case '3':
                    system("cls");
                    cout<<"Alegeti carte"<<endl;
                    cout<<"Cartile disponibile sunt:"<<endl;
                     for(int i=0;i<countBook;i++){
                        cout<<i<<" "<<*book[i]<<endl;
                    }
                    cout<<"Cititorii sunt:"<<endl;
                    for(int i=0;i<countCit;i++){
                        cout<<i<<" "<<*cit[i]<<endl;
                    }
                    cout<<"Selectati cartea dorita:"<<endl;

                    cin>>optCarte;
                    cout<<"Selectati ce cititor doreste sa imprumute cartea:"<<endl;

                    cin>>optCititor;

                    cout<<"Data imprumutului(zz/ll/aaaa):"<<endl;
                    cin>>data_luat;
                    imp[countImp] = new Imprumut();
                    imp[countImp]->realizareImprumut(data_luat,*cit[optCititor],*book[optCarte]);
                    countImp++;
                    system("pause");
                    system("CLS");
                    break;
                case '4':
                    break;
                default:
                    system("cls");
                    cout<<"Optiune inexistenta"<<endl;
                    system("pause");
                    system("cls");
                    break;
                }
            }
            while(1 && opt1!='4');
            system("CLS");
            break;

        case '2':
            system("CLS");
            do
            {

                cout<<"1.Afisare date carte"<<endl;
                cout<<"2.Afisare date cititor"<<endl;
                cout<<"3.Afisare date imprumutat"<<endl;
                cout<<"4.Revenire la meniu principal"<<endl;

                cout<<"Alegeti o optiune"<<endl;
                cin>>opt2;
                switch(opt2)
                {
                case '1':
                    system("cls");
                    cout<<"Titlu"<<"\t\t\t\t"<<"Autor"<<"\t\t"<<"Editura"<<"\t\t"<<"Gen"<<"\t"<<"An publicare"<<"\t"<< "Numar pagini"<<endl;
                    for(int i=0;i<countBook;i++){
                        cout<<*book[i]<<endl;
                    }
                    system("pause");
                    system("CLS");
                    break;
                case '2':
                    system("cls");
                    for(int i=0;i<countCit;i++){
                        cout<<*cit[i]<<endl;
                    }
                    system("pause");
                    system("CLS");
                    break;
                case '3':
                    system("cls");
                    cout<<"Data imprumut"<<"\t"<<"Cititor"<<"\t\t"<<"Carte"<<endl;
                    for(int i=0;i<countImp;i++){
                        cout<<*imp[i]<<endl;
                    }
                    system("pause");
                    system("CLS");
                    break;

                case '4':
                    break;
                default:
                    system("cls");
                    cout<<"Optiune inexistenta"<<endl;
                    system("pause");
                    system("cls");
                    break;
                }
            }
            while(1 && opt2!='4');
            system("CLS");
            break;
        case '3':

            do
            {
                system("CLS");
                cout<<"1.Cautare carte dupa titlu"<<endl;
                cout<<"2.Revenire la meniul principal"<<endl;
                cout<<"Alegeti o optiune"<<endl;
                cin>>opt3;
                switch(opt3)
                {
                case '1':
                    system("cls");
                    cout<<"Introduceti titlul cartii pe care o cautati:"<<endl;
                    getline(cin>>ws,titluCautat);
                 //   cout<<titluCautat;
                    searchCarte  = false;
                    for(int i =0; i<countBook; i++)
                    {
                        if( titluCautat == book[i]->Gettitlu())
                        {
                            searchCarte = true;
                            break;
                        }
                    }
                    if(searchCarte==true)
                    {
                        cout<<"Cartea dorita a fost gasita"<<endl;
                    }
                    else
                    {
                        cout<<"Cartea nu a fost gasita."<<endl;
                    }
                    system("pause");
                    system("CLS");

                    break;

                case '2':
                    break;
                default:
                    system("cls");
                    cout<<"Optiune inexistenta"<<endl;
                    system("pause");
                    system("cls");
                    break;

                }
            }
            while(1&& opt3!='2');
            system("CLS");
            break;
        case '4':
            exit(0);

            break;
        default:
            system("CLS");
            cout<<"Optiune inexistenta}";
            system("pause");
            system("cls");
            break;

        }

    }
    while(1);

    return 0;
}


