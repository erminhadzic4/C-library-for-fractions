#ifndef RAZLOMCI_H
#define RAZLOMCI_H
#include <iostream>

using namespace std;

class Razlomci {
	
    private:

	int brojnik, nazivnik;

    public:
        
        Razlomci() {brojnik = 0;  nazivnik = 1;}
        Razlomci(int brojnik1, int nazivnik1);
        Razlomci &operator=(const Razlomci &desno);
        Razlomci(const Razlomci &desno);
        friend Razlomci operator*(const Razlomci& lijevo, const Razlomci& desno);    
        friend Razlomci operator*(int lijevo, const Razlomci& desno);     
        friend Razlomci operator*(const Razlomci& desno, int lijevo);    
        friend Razlomci operator/(const Razlomci& lijevo, const Razlomci& desno);  
        friend Razlomci operator--(Razlomci& razlomak);
        friend Razlomci operator++(Razlomci& razlomak);
        friend Razlomci operator+(const Razlomci& lijevo, const Razlomci& desno);
        friend Razlomci operator-(const Razlomci& lijevo, const Razlomci& desno);
        friend void operator+=(Razlomci& lijevo, const Razlomci& desno);
        friend void operator*=(Razlomci& lijevo, const Razlomci& desno);
        friend void operator-=(Razlomci& lijevo, const Razlomci& desno);
        friend bool operator==(const Razlomci& lijevo, const Razlomci& desno); 
        friend bool operator<(const Razlomci& lijevo, const Razlomci& desno);
        friend bool operator>(const Razlomci& lijevo, const Razlomci& desno);
        friend bool operator>=(const Razlomci& lijevo, const Razlomci& desno);
        friend bool operator<=(const Razlomci& lijevo, const Razlomci& desno);
        friend bool operator!=(const Razlomci& lijevo, const Razlomci& desno);   
        friend std::istream& operator>>(std::istream &strim, Razlomci &a); 
        friend std::ostream& operator<<(std::ostream &strim, const Razlomci &a);  
        void pretvori_u_mjesoviti ();
        void pretvori_u_realni();
        bool pravilan ();
        int najveciZS(int a, int b);
        void dodjela_vrijednosti(int a, int b);
        double decimalni ();
};

Razlomci::Razlomci(int brojnik1, int nazivnik1) {
		dodjela_vrijednosti(brojnik1, nazivnik1);
        }

int Razlomci::najveciZS(int a, int b) {
            while (a != b) {
                if (a > b) {
                    a -= b;
                } else {
                    b -= a;
                }
            }
            return a;
}

void Razlomci::dodjela_vrijednosti (int brojnik1, int nazivnik1) {
	if (nazivnik1==0) {
                cerr << "\t\t\t\t\t      Uneseni nazivnik ne valja; ne smije biti jednak nuli" << endl;
                exit(0);
            } else if (brojnik1 == 0) {
                brojnik = 0;
                nazivnik = 1;
            } else {
                int predz = 1;
                if (brojnik1 < 0) {
                    predz *= -1;
                    brojnik1 *= -1;
                }
                if (nazivnik1 < 0) {
                    predz *= -1;
                    nazivnik1 *= -1;
                }

                int priv = najveciZS(brojnik1, nazivnik1);
                brojnik = brojnik1/priv*predz;
                nazivnik = nazivnik1/priv;
            }
}

double Razlomci::decimalni () {
	double a = double(brojnik)/double(nazivnik);
	return a;
}

void Razlomci::pretvori_u_realni () {
	double rezultat = this->brojnik / this->nazivnik;
	cout << rezultat;
}

bool Razlomci::pravilan () {
	return ((this->brojnik) < (this->nazivnik));
}

void Razlomci::pretvori_u_mjesoviti () {
	int a;
	int b;
	if ((this->brojnik) > (this->nazivnik)){
		a = this->brojnik / this->nazivnik;
		b = this->brojnik - (a*this->nazivnik);
		cout << a << " " << b << "/" << this->nazivnik;
		}
	else cout << "Pretvorba nemoguca.";
}


Razlomci &Razlomci:: operator=(const Razlomci &desno) { 
    brojnik=desno.brojnik;
    nazivnik=desno.nazivnik;
    return *this;
}

Razlomci:: Razlomci(const Razlomci &desno) { 
    brojnik=desno.brojnik;
    nazivnik=desno.nazivnik;
}

Razlomci operator-(const Razlomci& lijevo, const Razlomci& desno) {
    Razlomci priv(lijevo.brojnik*desno.nazivnik
                -desno.brojnik*lijevo.nazivnik,
                lijevo.nazivnik*desno.nazivnik);
    return priv;
}


Razlomci operator+(const Razlomci& lijevo, const Razlomci& desno) {
    Razlomci priv(lijevo.brojnik*desno.nazivnik
                +desno.brojnik*lijevo.nazivnik,
                lijevo.nazivnik*desno.nazivnik);
    return priv;
}

void operator-=(Razlomci& lijevo, const Razlomci& desno) {
    Razlomci priv(lijevo.brojnik*desno.nazivnik
                -desno.brojnik*lijevo.nazivnik,
                lijevo.nazivnik*desno.nazivnik);
    lijevo = priv;
}

void operator+=(Razlomci& lijevo, const Razlomci& desno) {
    Razlomci priv(lijevo.brojnik*desno.nazivnik
                -desno.brojnik*lijevo.nazivnik,
                lijevo.nazivnik*desno.nazivnik);
    lijevo = priv;
}

Razlomci operator*(const Razlomci& lijevo, const Razlomci& desno) {
    Razlomci priv(lijevo.brojnik*desno.brojnik,
               lijevo.nazivnik*desno.nazivnik);
    return priv;
}

void operator*=(Razlomci& lijevo, const Razlomci& desno) {
    Razlomci priv(lijevo.brojnik*desno.brojnik,
               lijevo.nazivnik*desno.nazivnik);
    lijevo = priv;
}

Razlomci operator*(int lijevo, const Razlomci& desno) {
    Razlomci priv(lijevo*desno.brojnik,desno.nazivnik);
    return priv;
}

Razlomci operator*(const Razlomci& desno, int lijevo) {
    Razlomci priv(lijevo*desno.brojnik,desno.nazivnik);
    return priv;
}

Razlomci operator/(const Razlomci& lijevo, const Razlomci& desno) {
    Razlomci priv(lijevo.brojnik*desno.nazivnik,
                 lijevo.nazivnik*desno.brojnik);
    return priv;
}

Razlomci operator++(Razlomci& razlomak) {
    Razlomci priv(razlomak.brojnik++, razlomak.nazivnik++);
    return priv;
}

Razlomci operator--(Razlomci& razlomak) {
    Razlomci priv(razlomak.brojnik--, razlomak.nazivnik--);
    return priv;
}

bool operator==(const Razlomci& lijevo, const Razlomci& desno) {
    return (((lijevo.brojnik*desno.nazivnik) - (lijevo.nazivnik*desno.brojnik)) == 0);
}

bool operator<(const Razlomci& lijevo, const Razlomci& desno) {
	if (((lijevo.brojnik*desno.nazivnik) - (lijevo.nazivnik*desno.brojnik)) < 0) return true;
	else return false;
}

bool operator>(const Razlomci& lijevo, const Razlomci& desno) {
	if (((lijevo.brojnik*desno.nazivnik) - (lijevo.nazivnik*desno.brojnik)) > 0) return true;
	else return false;
}

bool operator>=(const Razlomci& lijevo, const Razlomci& desno) {
	return (lijevo > desno) or (lijevo == desno);
}

bool operator<=(const Razlomci& lijevo, const Razlomci& desno) {
	return (lijevo < desno) or (lijevo == desno);
}

bool operator!=(const Razlomci& lijevo, const Razlomci& desno) {
	return (((lijevo.brojnik*desno.nazivnik) - (lijevo.nazivnik*desno.brojnik)) != 0);
}

std::ostream& operator<<(std::ostream &strim, const Razlomci &a) {
    if (a.nazivnik == 1) {
        strim << a.brojnik;
    } else {
        strim << a.brojnik << "/" << a.nazivnik;
    }
    return strim;
}

std::istream& operator>>(std::istream &strim, Razlomci &a) {
	
	int brojnik1, nazivnik1;
	char znak;
    strim >> brojnik1 >> znak >> nazivnik1;
    a.brojnik = brojnik1;
    a.nazivnik = nazivnik1;
    return strim;
}

#endif
