#include <iostream>

using namespace std;

struct cladire {
	unsigned char numar;
	char* culoare;
	float inaltime;
	int nr_etaje;
	bool deschisa;
};
//strcpy(destinatia,sursa)
cladire citireCladire() {
	cladire c;
	char x[100];

	cout << '\n' << "Culoare: ";
	cin >> x;
	c.culoare = new char[strlen(x) + 1];
	strcpy_s(c.culoare, strlen(x) + 1, x);

	cout << '\n' << "Inaltime: ";
	cin >> c.inaltime;

	cout << '\n' << "Nr etaje: ";
	cin >> c.nr_etaje;

	cout << '\n' << "Deschis(0/1): ";
	cin >> c.deschisa;
	return c;

}


void afisareCladire(cladire c) {
	cout << "Culoare cladire: " << c.culoare;
	cout << '\n' << "Inaltime cladire: " << c.inaltime;
	cout << '\n' << "Nr etaje cladire: " << c.nr_etaje;
	cout << '\n' << "Deschisa(0/1): " << c.deschisa;
}
void modificareEtaje(int noulNrEtaje, cladire* c) { //trb sa stim si la ce cladire se modifica nr etajelor
	(*c).nr_etaje = noulNrEtaje;
}
void modificareEtajeReferinta(int noulNrEtaje, cladire& c) {
	c.nr_etaje = noulNrEtaje;
}

void main() {
	cladire c = citireCladire();
	afisareCladire(c);
	modificareEtaje(20, &c); //?
	afisareCladire(c);
	modificareEtajeReferinta(21, c);
	afisareCladire(c);
	/*citireCladire();
	char* vectorC;
	vectorC = new char[strlen("POO") + 1];
	strcpy_s(vectorC, strlen("POO") + 1, "POO"); //care e dif dintre strcpy si strcpy_s

	cladire c;
	int nrCladiri = 5;
	cladire* cladiri;
	cladiri = new cladire[nrCladiri + 1];*/
	//cladiri = (cladire*)malloc(sizeof(cladire) * nrCladiri);

}
