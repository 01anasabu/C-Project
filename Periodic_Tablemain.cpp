#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include <conio.h>

using namespace std;

int num;
char ch;

class Newland{
    public:
       int Atomicno;
       char Symbol[5];
       char Name[30];
       char LatinName[30];
       char table0[15];
};

class Mendleeve: public Newland{
public:
       int Yearofdiscovery;
       char discoveredby[30];
       char Group[10];
       char table[15];
       int Electrons;
       int Protons;
       int Neutrons;
};

class PTE: public Mendleeve{
public:
            char AtomicRadius[10];
            float AtomicMass;
            int Period;
            char Block[30];
            int Valency;
            float Electronegativity;
            char Phase[15];
            char Halflife[30];
            char Lifetime[30];
            char Magnetictype[30];
            char table1[15];

            void putdata();
            int Search()
            {
                return Atomicno;
            }

}ob[12];

void PTE::putdata()
        {
            cout<<"\n\n\n\n \tTHE DETAILS ARE AS FOLLOWING :: \n"<<endl;

            cout<<"\n\n     Atomic No:\t\t\t";
            cout<<Atomicno;
            cout<<"\n\n     Symbol:\t\t\t";
            cout<<Symbol;
            cout<<"\n\n     Name:\t\t\t";
            cout<<Name;
            cout<<"\n\n     Latin Name:\t\t";
            cout<<LatinName;
            cout<<"\n\n     Year of discovery:\t\t";
            cout<<Yearofdiscovery;

            cout<<"\n\n     Discovered By:\t\t";
            cout<<discoveredby;
            cout<<"\n\n     Electrons:\t\t\t";
            cout<<Electrons;
            cout<<"\n\n     Protons:\t\t\t";
            cout<<Protons;
            cout<<"\n\n     Neutrons:\t\t\t";
            cout<<Neutrons;

            cout<<"\n\n     Atomic Radius:\t\t";
            cout<<AtomicRadius;
            cout<<"\n\n     Atomic Mass:\t\t";
            cout<<AtomicMass;
            cout<<"\n\n     Peroid:\t\t\t";
            cout<<Period;
            cout<<"\n\n     Group:\t\t\t";
            cout<<Group;
            cout<<"\n\n     Block:\t\t\t";
            cout<<Block;
            cout<<"\n\n     Valency:\t\t\t";
            cout<<Valency;
            cout<<"\n\n     Electronegativity:\t\t";
            cout<<Electronegativity;
            cout<<"\n\n     Phase:\t\t\t";
            cout<<Phase;
            cout<<"\n\n     Halflife:\t\t\t";
            cout<<Halflife;
            cout<<"\n\n     Lifetime:\t\t\t";
            cout<<Lifetime;
            cout<<"\n\n     Magnetic type:\t\t";
            cout<<Magnetictype;
             cout<<"\n\n    Element present in 1872 of: ";
            cout<<table1;
            cout<<"\n\n    Element present in 1913 of: ";
            cout<<table;
            cout<<"\n\n    Element present in 1865 of: ";
            cout<<table0;

        }


int main()
{
    int sml=1;
	char ch=sml,c,f='n';

    system("color 72");
        cout<<"\n\t\t\t\t\t\t\t\t National Institute of Technology, RAIPUR\t\t\t";
        cout<<"\n\n\n\t\t\t Computer Programming TERM PROJECT, SEMESTER II \t\t\n";
        cout<<"\n\n\t\t\t Under the supervision of: Dr. Mou Dasgupta, CS Department \t\t\t\n";


    _getch();
    system("color 79");


    cout<<"\n\n\n\n\n   Made By--\t\t\t\n\n\n\t Abu Anas \n\t Roll No: 20120005\n \t Branch: Metallurgical and Material Engineering"<<endl;

    cout<<"\t ________________________________________________"<<""<<"\n\n\n\n"<<endl;

    _getch();
    system("cls");
    system("color 72");

    cout<<"\n\n\n\n\t\t    \t"<<"______________"<<endl;
    cout<<"\n\t\t"<<"PERIODIC TABLE ";
    _getch();
    cout<<"\n\n______________________________";
    cout<<"\n\t      \t   "<<ch<<" "<<ch<<" Hey  \n\n\t\t|| Get Ready to Know Different Elements ||  "<<ch<<" "<<ch;
    cout<<"\n______________________________\n\n";

    cout<<"\n\n\t ABOUT PERIODIC TABLE\n"<<endl;
    cout<<"\n\n\t The periodic table, or periodic table of elements, is a tabular "<<endl;
    cout<<"\t arrangement of the chemical elements, arranged by atomic number,"<<endl;
    cout<<"\t electron configuration, and recurring chemical properties, "<<endl;
    cout<<"\t whose structure shows periodic trends. The seven rows of the table,"<<endl;
    cout<<"\t called periods, generally have metals on the left and non-metals"<<endl;
    cout<<"\t on the right. The columns, called groups, contain elements with"<<endl;
    cout<<"\t similar chemical behaviors. Six groups have accepted names as well "<<endl;
    cout<<"\t as assigned numbers: for example, group 17 elements are the halogens"<<endl;
    cout<<"\t and group 18 are the noble gases. Also displayed are four simple "<<endl;
    cout<<"\t rectangular areas or blocks associated with the filling of different "<<endl;
    cout<<"\t atomic orbitals.\n"<<endl;
    cout<<"\n"<<endl;

    cout<<"\t Mendeelev arranged the then known elements in order of their increasing "<<endl;
    cout<<"\t atomic weights with similar properties and leaving out blank spaces wherever "<<endl;
    cout<<"\t necessary. Nine vertical columns group and seven horizontal rows called periods."<<endl;


int no;
    home:
    cout<<"\n"<<endl;
    system("color 3F");
cout<<"\n\n\n\n     Want to search by Atomic No or Search Random"<<endl;
    ET:
cout<<"\n\n\n     Enter 1 for Random Search and \n     Enter 2 for Atomic No search:";
cin>>no;

if(no==1)
{
    do
    {   int num;
        system("color 3F");
        cout<<"\n\n\n\tPress Enter to get a Random Element From Periodic Table  ";
        num=rand()%10+1;
        ifstream fi("petb.txt",ios::in);
        fi.seekg(0);
        for(int i=1;i<=10;i++)
        {

        fi>>ob[i].Atomicno;
        fi>>ob[i].Symbol;
        fi>>ob[i].Name;
        fi>>ob[i].LatinName;
        fi>>ob[i].Yearofdiscovery;
        fi>>ob[i].discoveredby;
        fi>>ob[i].Electrons;
        fi>>ob[i].Protons;
        fi>>ob[i].Neutrons;
        fi>>ob[i].AtomicRadius;
        fi>>ob[i].AtomicMass;
        fi>>ob[i].Period;
        fi>>ob[i].Group;
        fi>>ob[i].Block;
        fi>>ob[i].Valency;
        fi>>ob[i].Electronegativity;
        fi>>ob[i].Phase;
        fi>>ob[i].Halflife;
        fi>>ob[i].Lifetime;
        fi>>ob[i].Magnetictype;
        fi>>ob[i].table1;
        fi>>ob[i].table;
        fi>>ob[i].table0;


         if(ob[i].Search()==num){
                ob[i].putdata();
                f='y';
                break;
         }
        }
        fi.close();
        if(f=='n')
            cout<<"\n\n     Record not found!!!\n\n";

        system("color 5b");
        cout<<"\n\n\n\n      Do Want to KNOW MORE RANDOM Elements(Y) !! OR Return to Home(N):\n";
        MN:             // For Goto Statements if Entered other than Y or N.
        cout<<"\n      Enter(Y/N):";
        cin>>c;
        if (c=='N'||c=='n')
            {
                system("cls");
                goto home;
            }

        if(c!='n'&&c!='N'&&c!='Y'&&c!='y')
        {
            cout<<"\n\nYou Entered Another than (Y/N)\n";
            goto MN;
        }

    }while(c=='Y'||c=='y');
}
if(no==2)
{
do
    {   system("color 3F");

        double in;
        En:
        cout<<"\n\n\tEnter the (Atomic No) do you want to search for:";
        cin>>in;

        if(in>10||in==0){
            cout<<"\n\n\tYOU HAVE ENTERED ABOVE 10\n\n \tPlease Enter From(1 - 10)\n";
            goto En;
        }
        ifstream fi("petb.txt",ios::in);
        fi.seekg(0);

        for(int i=1;i<=10;i++)
        {
        fi>>ob[i].Atomicno;
        fi>>ob[i].Symbol;
        fi>>ob[i].Name;
        fi>>ob[i].LatinName;
        fi>>ob[i].Yearofdiscovery;
        fi>>ob[i].discoveredby;
        fi>>ob[i].Electrons;
        fi>>ob[i].Protons;
        fi>>ob[i].Neutrons;
        fi>>ob[i].AtomicRadius;
        fi>>ob[i].AtomicMass;
        fi>>ob[i].Period;
        fi>>ob[i].Group;
        fi>>ob[i].Block;
        fi>>ob[i].Valency;
        fi>>ob[i].Electronegativity;
        fi>>ob[i].Phase;
        fi>>ob[i].Halflife;
        fi>>ob[i].Lifetime;
        fi>>ob[i].Magnetictype;
        fi>>ob[i].table1;
        fi>>ob[i].table;
        fi>>ob[i].table0;

        if(ob[i].Search()==in)
{
                ob[i].putdata();
                f='y';
                break;
            }
        }
        fi.seekg(0);
        fi.close();
        if(f=='n')
            cout<<"\n\n    Record not found!!!\n\n";

        system("color 5b");
        cout<<"\n\n\n\n      Do Want to KNOW MORE(Y) !! OR Return to Home(N):\n";
        XY:
        cout<<" \n     Enter(Y/N):";
        cin>>c;
        if (c=='n'||c=='N')
            {system("cls");
                goto home;

            }
        if(c!='n'&&c!='N'&&c!='Y'&&c!='y')
            {
                cout<<"\n\nYou Entered Another than (Y/N)\n";
                goto XY;
            }
    }while(c=='Y'||c=='y');
}
else
{
    cout<<"\n\n     Another Valued Entered!!! Enter 1 or 2:";
    goto ET;
}
    return 0;
}
