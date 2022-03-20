#include <string>
#include <windows.h>
#include <iostream>
#include <cctype>
#include "Razlomci.h"

using namespace std;

string odgovor;
bool programTraje ();
void Meni ();
void Pauza ();
void Logika (string odgovor);
string Unesi ();

//Main

int main() {
	
while (programTraje) {
	
	Meni();
	Pauza();
	Logika (Unesi());
	}
	  
    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool programTraje () {
	for (int i = 0; i < odgovor.size(); i++) toupper(odgovor[i]);
	if (odgovor == "RACUNAJ" || odgovor == "PRIMJER" || odgovor == "RACUNANJE" || odgovor == "OPERACIJE") //return (odgovor == "RACUNAJ" || odgovor == "PRIMJER" || odgovor == "RACUNANJE" || odgovor == "OPERACIJE");
	return true;
	else return false;
}


void Meni () {
	cout << "\t\t\t\t===========================================================================" << endl;
	Sleep(250);
	cout << "\t\t\t\t                     Unesite neku od sljedecih opcija: "                     << endl;
	Sleep(250);
	cout << "\t\t\t\t                    Za ispis primjera unesite - ""primjer"""                   << endl;
	Sleep(250);
	cout << "\t\t\t\t                   Za ispis funkcija unesite  -  ""funkcije"""                   << endl;
	Sleep(250);
	cout << "\t\t\t\t                  Za ispis operacija unesite  - "" operacije"""                  << endl;
	Sleep(250);
	cout << "\t\t\t\t                 Za matematicke funkcije unesite - ""racunanje"""                << endl;
	Sleep(250);
	cout << "\t\t\t\t===========================================================================" << endl;
}


void Pauza () {
	Sleep(2000);
}


string Unesi () {
	string odabir;
	cout << "\t\t\t\t\t        Unesite vas odabir (Nije Case Sensitive) : ";
	cin >> odabir;
	for (int i = 0; i < odabir.size(); i++) if (islower(odabir[i])) odabir[i] = toupper(odabir[i]);
	return odabir;
}


void Logika (string odgovor) {
	if (odgovor == "RACUNANJE"){
		string znak;
		Razlomci r1,r2;
		cout << "\t\t\t\t\t          Unesite relaciju (1/3 + 2/5) : ";
		cin >> r1 >> znak >> r2; 
		if (znak == "-=") {r1-=r2; cout << endl << "\t\t\t\t\t\t\t\t   " << r1 << endl;}
		if (znak == "+=") {r1+=r2; cout << endl << "\t\t\t\t\t\t\t\t   " << r1 << endl;}
		if (znak == "*=") {r1*=r2; cout << endl << "\t\t\t\t\t\t\t\t   " << r1 << endl;}
		if (znak == "+") cout << "\t\t\t\t\t\t\t\t   " << r1 + r2 << endl;
		if (znak == "-") cout << "\t\t\t\t\t\t\t\t   " << r1 - r2 << endl;
		if (znak == "*") cout << "\t\t\t\t\t\t\t\t   " << r1 * r2 << endl;
		if (znak == "/") cout << "\t\t\t\t\t\t\t\t   " << r1 / r2 << endl;
		if (znak == "!=") r1 != r2 ? cout << "\t\t\t\t\t\t\t     " << r1 << " je razlicit od "     << r2 << endl : cout << "\t\t\t\t\t\t\t   " << r1 << " i " << r2 << " su jednaki" << endl;
		if (znak == "==") r1 == r2 ? cout << "\t\t\t\t\t\t\t     " << r1 << " je jednak "          << r2 << endl : cout << "\t\t\t\t\t\t\t   " << r1 << " nije jednak " << r2        << endl;
		if (znak == "<")  r1 < r2 ?  cout << "\t\t\t\t\t\t\t     " << r1 << " je manji"            << endl : cout << "\t\t\t\t\t\t\t   " << r1 << " nije manji"                      << endl;
		if (znak == ">")  r1 > r2 ?  cout << "\t\t\t\t\t\t\t     " << r1 << " je veci"             << endl : cout << "\t\t\t\t\t\t\t   " << r1 << " nije veci"             		     << endl;
		if (znak == "<=") r1 <= r2 ? cout << "\t\t\t\t\t\t\t     " << r1 << " je manji ili jednak" << endl : cout << "\t\t\t\t\t\t\t   " << r1 << " nije manji ili jednak"           << endl;
		if (znak == ">=") r1 >= r2 ? cout << "\t\t\t\t\t\t\t     " << r1 << " je veci ili jednak"  << endl : cout << "\t\t\t\t\t\t\t   " << r1 << " nije veci ili jednak"            << endl;
		cout << "\t\t\t\t===========================================================================" << endl;
		Sleep (5000);
		system("cls");
		}
		
		else if (odgovor == "PRIMJER") {
			bool tacno(1);
			Razlomci a(22,5),b(16,9);
			Razlomci c;
    		c = a + b;
    		cout << "\t\t\t\t\t\t\t     " << a << " + " << b << " = " << c << endl;
			Sleep (50);
    		c = a - b;
    		cout << "\t\t\t\t\t\t\t     " << a << " - " << b << " = " << c << endl;
			Sleep (50);
   			c = a * b;
    		cout << "\t\t\t\t\t\t\t     " << a << " * " << b << " = " << c << endl;  		
    		Sleep (50);
    		c = a / b;
    		cout << "\t\t\t\t\t\t\t     " << a << " / " << b << " = " << c << endl;
    		Sleep (50);
    		c = -1 * b;
    		cout << "\t\t\t\t\t\t\t     " << "-1" << " * " << b << " = " << c << endl;
    		Sleep (50);
    		c = b * (-1);
    		cout << "\t\t\t\t\t\t\t     " << b << " * " << "-1" << " = " << c << endl;
    		Sleep (50);
    		Razlomci d(4,5); 
    		++d;
			cout << "\t\t\t\t\t\t\t     " << a << " ++ " << " = " << d << endl; 
			Sleep (50);
    		--d; --d;
			cout << "\t\t\t\t\t\t\t     " << a << " -- " << " = " << d << endl; 
    		Sleep (50);
			cout << "\t\t\t\t\t\t\t     " << a << " < " << b << " = "; 
			a < b ?	cout << tacno << endl : cout << !tacno << endl;
			Sleep (50);
			cout << "\t\t\t\t\t\t\t     " << a << " > " << b << " = "; 
			a > b ?	cout << tacno << endl : cout << !tacno << endl;
			Sleep (50);
			cout << "\t\t\t\t\t\t\t     " << a << " <= " << b << " = "; 
			a <= b ? cout << tacno << endl : cout << !tacno << endl;
			Sleep (50);
			cout << "\t\t\t\t\t\t\t     " << a << " >= " << b << " = ";  
			a >= b ? cout << tacno << endl : cout << !tacno << endl;
			Sleep (50);
			cout << "\t\t\t\t\t\t\t     " << "a.pretvori_u_realni()"  << " = ";
			a.pretvori_u_realni();
			cout << endl;
			Sleep (50);
			cout << "\t\t\t\t\t\t\t     " << "a.pretvori_u_mjesoviti()"  << " = ";
			a.pretvori_u_mjesoviti();	
			Sleep (50);
			cout << "\t\t\t\t\t\t\t\t\t\t     " << "a.pravilan()"  << " = " << a.pravilan()<<endl;
			Sleep (50);
			cout << "\t\t\t\t\t\t\t     " << "a.decimalni()"  << " = " << double(a.decimalni()) << endl;
			cout << "\t\t\t\t===========================================================================" << endl;
			Sleep (5000);
			system("cls");
		}
		
		else if (odgovor == "FUNKCIJE") { 
			cout << "\t\t\t\t\t\t\t objekat.pretvori_u_realni();" << endl;
			Sleep (50);
    		cout << "\t\t\t\t\t\t\t objekat.pretvori_u_mjesoviti();" << endl;
			Sleep (50);
    		cout << "\t\t\t\t\t\t\t objekat.pravilan();" << endl;
    		Sleep (50);
    		cout << "\t\t\t\t\t\t\t objekat.decimalni();" << endl;
    		cout << "\t\t\t\t===========================================================================" << endl;
			Sleep (5000);
			system("cls");
		}
		
		else if (odgovor == "OPERACIJE") { 
    		
    		cout << "\t\t\t\t\t\t                       + " << endl;   		
    		Sleep (50);
    		cout << "\t\t\t\t\t\t                       - " << endl;   		
    		Sleep (50);
    		cout << "\t\t\t\t\t\t                       * " << endl; 		
    		Sleep (50);			
			cout << "\t\t\t\t\t\t                       / " << endl;			
			Sleep (50);			
			cout << "\t\t\t\t\t\t                       -- " << endl;			
			Sleep (50);			
			cout << "\t\t\t\t\t\t                       ++ " << endl; 			
			Sleep (50);			
			cout << "\t\t\t\t\t\t                       += " << endl; 			
			Sleep (50);			
			cout << "\t\t\t\t\t\t                       *= " << endl; 			
			Sleep (50);			
			cout << "\t\t\t\t\t\t                       -= " << endl; 			
			Sleep (50);			
			cout << "\t\t\t\t\t\t                       == " << endl; 			
			Sleep (50);			
			cout << "\t\t\t\t\t\t                       != " << endl; 			
			Sleep (50);			
			cout << "\t\t\t\t\t\t                       > " << endl; 			
			Sleep (50);
			cout << "\t\t\t\t\t\t                       < " << endl; 			
			Sleep (50);		
			cout << "\t\t\t\t\t\t                       >= " << endl; 			
			Sleep (50);
			cout << "\t\t\t\t\t\t                       <= " << endl; 
			Sleep (50);
			cout << "\t\t\t\t\t\t                       >> " << endl; 
			Sleep (50);
			cout << "\t\t\t\t\t\t                       << " << endl; 
			cout << "\t\t\t\t===========================================================================" << endl;
			Sleep (5000);
			system("cls");
		}
		
		else {
			cout << "\t\t\t\t\t\t\t     Pogresan unos! "; 
		exit(0); 
		}
}















