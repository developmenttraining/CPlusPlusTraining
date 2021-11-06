#include "insanx.h"


int InsanX::insanSayisi = 0;
const double InsanX::cekimSabiti = 9.8;

void InsanX::nefesAlVer() {
	cout << " Ben InsanX nefes alip veriyorum." << endl;
}

void InsanX::bobrekcalis() const {
	cout << "Ben insan bobrek calisti" << endl;
}

InsanX::InsanX() : kimlikNo{ 0 }
{
	++insanSayisi;
	kalpatisi = 70;
	cout << "		con1 InsanX" << "yaratildi" << endl;
}
InsanX::InsanX(string a, int y, long long k) :yas{ y }, adi{ a }, kimlikNo{ k }
{
	++insanSayisi;
	kalpatisi = 70;
	cout << "		co2 InsanX, " << adi << " yaratildi" << endl;
}
InsanX::InsanX(string a, int y, int kalpA, int k) :yas{ y }, adi{ a }, kimlikNo{ k } {
	++insanSayisi;
	setKalpatisi(kalpA);
	cout << "		co3 InsanX, " << adi << " yaratildi" << endl;
}
InsanX::~InsanX() {
	--insanSayisi;
	cout << "		des Insan, " << adi << " oldu" << endl;
}
void InsanX::meteorcarp() {
	insanSayisi = 0;
	//yas = 0; //static olmayan memberlara eriþim yasaktýr.
}
void InsanX::yasa() {
	++yas;
}
void InsanX::yasa(int y) {
	yas += y;
}
void InsanX::tanit() const {
	cout << "Ben insan " << adi << "  " << yas << endl;
}
void InsanX::setKalpatisi(int k) {
	if (k >= 30)
		kalpatisi = k;
	else
		cout << "Kalpatisi <30 olamaz." << endl;
}
int InsanX::getKalpatisi() const {
	return kalpatisi;
}
void InsanX::suic() const {
	cout << "Ben insan su içiyorum" << endl;
	bobrekcalis();
}
void InsanX::yemekye() const {
	cout << "Ben insan yemek yiyorum" << endl;
	bobrekcalis();
}
void InsanX::ogren() {
	cout << "Ben InsanX ogreniyorum" << endl;
}