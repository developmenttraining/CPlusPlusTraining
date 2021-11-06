#include <iostream>
#include <iomanip>
#include <chrono>

using namespace std;

class Date {
private:
	const int* aylar;

public:
	Date() {
		aylar = new int[] {31, 28, 31};
	}
	Date(int y, int a, int g) {
		aylar = new int[] {31, 28, 31};
	}
	~Date(){
		delete[] aylar;
	}
};

int main() {

}
class Saat {
private:
	int saniye{};
	int dakika{};
	int saat{};

public:
	Saat() {}
	Saat(int saatx, int dakikax, int saniyex)
	{
		auto array{ new int* [10] };
		setSaat(saatx);
		setDakika(dakikax);
		setSaniye(saniyex);
	}
	void setSaat(int s) {
		if (s >= 0 && s <= 23)
			saat = s;
		else
			cout << s << " saat degeri gecersiz." << endl;
	}
	void setDakika(int d) {
		if (d >= 0 && d <= 59)
			dakika = d;
		else
			cout << d << " dakika degeri gecersiz." << endl;
	}
	void setSaniye(int s) {
		if (s >= 0 && s <= 59)
			saniye = s;
		else
			cout << s << " saniye degeri gecersiz." << endl;
	}
	int getSaat() {
		return saat;
	}
	int getDakika() {
		return dakika;
	}
	int getSaniye() {
		return saniye;
	}
	//tick()
	void tick() {
		if (saniye == 59)
		{
			saniye = 0;
			if(dakika == 59)
			{
				dakika = 0;
				if (saat == 23)
					saat = 0;
				else
					++saat;
			}
			else
				dakika++;
		}
		else
			++saniye;

	}
	void goster() {
		cout << setfill('0') << std::setw(2) << saat << ":";
		cout << setfill('0') << std::setw(2) << dakika << ":";
		cout << setfill('0') << std::setw(2) << saniye << endl;
	}
};

int main20() {
	Saat s1(23, 59, 59);
	s1.goster();
	cout << s1.getSaat() << endl ;
	cout << s1.getDakika() << endl;
	cout << s1.getSaniye() << endl;
	s1.tick();
	s1.tick();
	s1.tick();
	s1.goster();
	return 0;
}

class Insan {
public: // public variables
	string adi{};
	int yas{};
private: // private variables
	int kalpatisi{};
private: // private functions
	void bobrekcalis() {
		cout << "Ben insan bobrek calisti" << endl;
	}
public:

	Insan() {
		adi = "Mahmut";
		yas = 20;
		kalpatisi = 70;
		cout << "		con1 Insan" << "yaratildi" << endl;
	}
	Insan(string a, int y) {
		adi = a;
		yas = y;
		kalpatisi = 70;
		cout << "		co2 Insan, " << adi << " yaratildi" << endl;
	}
	Insan(string a, int y, int kalpA) {
		adi = a;
		yas = y;
		setKalpatisi(kalpA);
		cout << "		co3 Insan, " << adi << " yaratildi" << endl;
	}
	~Insan() {
		cout << "		des Insan, " << adi << " oldu" << endl;
	}
	void yasa() {
		++yas;
	}
	void yasa(int y) {
		yas+=y;
	}
	void tanit() {
		cout << "Ben insan " << adi << "  " << yas << endl;
	}

	void setKalpatisi(int k) {
		if (k >= 30)
			kalpatisi = k;
		else
			cout << "Kalpatisi <30 olamaz." << endl;
	}
	int getKalpatisi() {
		return kalpatisi;
	}
	void suic() {
		cout << "Ben insan su içiyorum" << endl;
		bobrekcalis();
	}
	void yemekye() {
		cout << "Ben insan yemek yiyorum" << endl;
		bobrekcalis();
	}
};

int main19() {
	Insan kml("Kamil", 40);
	kml.yas = 10;
	//Yasak private // kml.kalpatisi = 90;
	kml.setKalpatisi(10);
	cout << kml.getKalpatisi() << endl;

	Insan nrm("Nermin", 20, 15);
	nrm.suic();
	nrm.yemekye();
	return 0;
}

int main18() {

	Insan adem;
	adem.adi = "ADEM";
	adem.yas = 10;
	adem.tanit();
	adem.yasa();
	adem.yasa();
	adem.yasa(4);
	adem.tanit();

	Insan havva;
	havva.adi = "HAVVA";
	havva.yas = 5;
	havva.tanit();
	havva.yasa();
	havva.yasa();
	havva.yasa(4);
	havva.tanit();

	Insan ibo;
	ibo.tanit();

	Insan cnn("Canan", 88);
	cnn.tanit();

	Insan* pIns = new Insan();
	pIns->tanit();
	delete pIns;

	Insan* pIns2 = new Insan("Nuri", 22);
	pIns2->tanit();
	delete pIns2;
	return 0;
}

/*
int a = 10;
int b = 10;
void topla() {
	cout << a + b << endl;
}
void carp() {
	cout << a * b << endl;
}
*/
class Islem {
public:
	int a = 10;
	int b = 10;
	void topla() {
		cout << a + b << endl;
	}
	void carp() {
		cout << a * b << endl;
	}
};

//encapsulation
//inheritance 
//polymorphism
//abstraction

int main17() {
	//topla();
	//carp();
	Islem i1;
	i1.a = 90;
	i1.b = 90;
	i1.topla();
	i1.carp();

	Islem i2;
	i2.topla();
	return 0;
}


struct Kisi {
	string ad{ "ali" };
	int puan{ 8 };

	void print() {
		cout << ad << "  " << puan << endl;
	}
	~Kisi() {
		cout << ad << " oldu" << endl;
	}

};

Kisi& yeniKisiver() {

	Kisi *k = new Kisi;
	k->ad = "Mahmut";
	k->puan = 88;
	
	return *k;
}
Kisi* yeniKisiadresiver() {

	Kisi* k = new Kisi;
	k->ad = "Mahmut";
	k->puan = 88;

	return k;
}

int main16() {
	Kisi& k = yeniKisiver();
	cout << k.ad << "  " << k.puan << endl;

	delete& k;
	cout << "------" << endl;

	Kisi* p = yeniKisiadresiver();
	delete p;
	return 0;
}

Kisi& yeniKisiverhataliverir() {

	Kisi k;
	k.ad = "Mahmut";
	k.puan = 88;

	return k;
}
int main15() {
	Kisi& k5 = yeniKisiverhataliverir();
	cout << k5.ad << "  " << k5.puan << endl;
	return 0;
}
int main14() {

	int a = 10;
	
	int* p = new int;
	*p = 99;
	cout << *p << endl;
	delete p;

	int* const q = new int[10];
	p = q;
	*p++ = 199;
	*p++ = 299;

	p = q;
	cout << *p++ << endl;
	cout << *p++ << endl;
	delete[] q;

	Kisi* pkisi = new Kisi;
	pkisi->ad = "Hasan";
	pkisi->puan = 66;
	cout << pkisi->ad << "  " << pkisi->puan << endl;
	delete pkisi;
	return 0;
}

int main13() {

	string ad = "ali";
	int puan = 8;

	cout << ad << "  " << puan << endl;


	string ad2;
	int puan2;

	ad2 = ad;
	puan2 = puan;

	cout << ad << "  " << puan << endl;


	Kisi k1;
	cout << k1.ad << "  " << k1.puan << endl;

	Kisi k2;
	k2 = k1;
	cout << k2.ad << "  " << k2.puan << endl;

	Kisi* p;
	p = &k1;

	cout << (*p).ad << "  " << (*p).puan << endl;
	
	p = &k2;
	cout << p->ad << "  " << p->puan << endl;

	typedef int tamsayi;
	tamsayi score = 99;
	
	using tumsayi = int;
	tumsayi score2 = 199;

	using Person = Kisi;
	Person k3;

	Kisi k4{ "Kamil", 20 };
	cout << k4.ad << "  " << k4.puan << endl;

	return 0;
}

void*  memcpy(void* dest, void* src, size_t n)
{
	int8_t* pdest = static_cast<int8_t*>(dest);
	int8_t* psrc = static_cast<int8_t*>(src);

	for (size_t i = 0; i < n; ++i)
		*pdest++ = *psrc++;

	return dest;
}
int main12() {
	
	int d[]{ 11,22,33 };
	int t[3];
	cout << sizeof(d) / sizeof(d[0]) << endl;
	cout << size(d) << endl;
	memcpy(t, d, sizeof(d));
	cout << t[0] << endl;
	cout << t[2] << endl;
	return 0;
}

char* mystrchr(char* str, char harf) { // Merhaba, 'z'

	char* zip = str;
	while (*zip != 0)
	{
		if (*zip == harf)
			return zip;
		zip++;
	}
	
	return nullptr;
}

int main11() {
	char txt[] = "merhaba";
	char* bulunan = mystrchr(txt, 'h');
	if(bulunan != nullptr)
		cout << bulunan << endl;

	return 0;
}


int mystrcmp(char* str1, const char* str2) {

	char* zip1 = str1;
	const char* zip2 = str2;

	while (*zip1 != 0 && *zip2 != 0) {
		if (*zip1 < *zip2)
			return -1;
		else if (*zip2 < *zip1)
			return 1;
		zip1++;
		zip2++;
	}
	if (*zip1 < *zip2)
		return -1;
	else if (*zip2 < *zip1)
		return 1;

	return 0;
}

int main10() {

	char txt[] = "merhaba";

	cout << mystrcmp(txt, "zerhaba") << endl;
	cout << mystrcmp(txt, "berhaba") << endl;
	cout << mystrcmp(txt, "merhaba") << endl;
	return 0;
}

size_t mystrlen(char* str)
{
	//int i;for (i = 0; i < strlen(str) ; ++i);
	char* zip = str;

	while (*zip != 0)
		zip++;

	return zip - str;
}
int main9() {
	char txt[] = "Merhaba";

	cout << mystrlen(txt) << endl;
	return 0;
}

//pass by value
void karesi(int t)
{
	t = t * t;
}
//pass by referans
void karesi2(int& t)
{
	t = t * t;
}
//pass by referans
void karesi3(int* t)
{
	*t = *t * *t;
}
//pass by referans
void karesi4(int t[])
{
	t[0] = t[0] * t[0];
}
//pass by referans
void karesi5(int *t)
{
	*t = *t * *t;
	//t[0] = t[0] * t[0];
}


int main8()
{
	int k = 10;
	karesi(k);
	cout << k << endl;

	k = 10;
	karesi2(k);
	cout << k << endl;

	k = 10;
	karesi3(&k);
	cout << k << endl;

	int h[]{ 10,20,40 };
	karesi4(h);
	cout << h[0] << endl;

	h[0] = 10;
	karesi5(h);
	cout << h[0] << endl;
	return 0;
}

int main7() {
	//referans deðiþken
	int a = 10;

	int* p = &a;

	int& k = a; // referans deðiþken
	
	cout << a << endl;
	cout << k << endl;

	int b = 30;
	k = b;
	cout << a << endl;
	cout << k << endl;


	return 0;
}

int main6() {

	int k = 10;
	int b = 10 + k++;//önce ifade hesaplanýr, sonra k arttýrýlýr

	//      11			20
	cout << k << " " << b << endl;

	
	k = 10;
	b = 10 + ++k;//önce k arttýrýlýr, sonra ifade hesaplanýr
	cout << k << " " << b << endl;

	k = 10;

	if (k++ == 11)
		cout << "OK" << endl;

	//* / % + -
	k = 10;
	k += 2;
	k -= 2;
	k *= 2;
	k /= 2;
	k %= 2;
	return 0;
}

void mystrcpy(char* dest, char* src) {

	char* kaynak = src;
	char* hedef = dest;

	while (*kaynak != 0) {
		*hedef = *kaynak;
		++kaynak;
		++hedef;
	}
	*hedef = 0;
	
}

int main5() {
	char txt[10] = "Merhaba";
	char txt2[10];
	char txt3[10];
	char txt4[10];
	char txt5[10];

	
	//  ilk çalýþma ; koþul ; arttýrým
	for (int i = 0; i < strlen(txt) + 1; i++)
				txt2[i] = txt[i];
	cout << txt2 << endl;


	strcpy_s(txt3, txt);

	char* kaynak = txt;
	char* hedef = txt4;

	while (*kaynak != 0) {
		*hedef = *kaynak;
		++kaynak;
		++hedef;
	}
	*hedef = 0;
	
	/*
	while (*kaynak != 0) {
		*hedef++ = *kaynak++;
	}
	*hedef = 0;
	*/
	//while (*hedef++ = *kaynak++);

	cout << txt4 << endl;

	char* p = txt5;

	mystrcpy(p, txt);


	cout << p << endl;


	return 0;
}

int main4() {
	// c string = bir baþlangýç adresi (char*) 
	// bu adresten itibaren ardýþýk bytelar karakter 
	//olarak alýnýr. Ardýþýk byte'larý tararken
	//okuduðu ardýþýk byte içinde 0 yazýyor ise.
	//0 string'in bittiði anlamýna gelir.
	char txt[8] = {'M','e' ,'r' ,'h' ,'a' ,'b','a',0};
	//char* const txt
	char txt2[] = "Merhaba";

	cout << txt << endl;
	cout << txt2 << endl;

	char* p = txt; //&txt[0];

	cout << p << endl;

	return 0;
}

int main3() {
	int puan{ 55 };
	int d[10]{};
	int k[5]{ 11,22,33,44,55 };
	//int* const k = bellek { eleman1, eleman2 ...} 

	cout << k[0] << endl;

	// k === &k[0]

	int* p = &k[0];
	cout << *p << endl;

	p = k; //k === &k[0];
	*p = 111;

	cout << &k[0] << endl;
	cout << k << endl;
	cout << p << endl;

	*p = 111;
	cout << k[0] << endl;
	//*p 			// k[0]  //100
	//*(p + 1)		// k[1] //104
	//*(p + 2)		// k[2] //108
	cout << *p << endl;
	cout << *(p + 1) << endl;
	cout << *(p + 2) << endl;
	cout << *(p + 3) << endl;
	cout << *(p + 4) << endl;
	cout << *(p + 5) << endl;


	cout << p[0] << endl;
	cout << p[1] << endl;
	cout << p[2] << endl;
	cout << p[3] << endl;
	cout << p[4] << endl;

	p = k;
	cout << *p << endl;
	p = p + 1; //yeni p === &k[1]
	cout << *p << endl;
	p = p + 1; //yeni p === &k[2]
	cout << *p << endl;
	p = p + 1; //yeni p === &k[3]
	cout << *p << endl;
	p = p + 1; //yeni p === &k[4]
	cout << *p << endl;


	p = k;
	cout << *p << endl;
	++p; //p = p + 1; //yeni p === &k[1]
	cout << *p << endl;
	++p; //p = p + 1; //yeni p === &k[2]
	cout << *p << endl;
	++p; //p = p + 1; //yeni p === &k[3]
	cout << *p << endl;
	++p; //p = p + 1; //yeni p === &k[4]
	cout << *p << endl;

	--p; //p = p - 1; //yeni p === &k[3]
	cout << *p << endl;
	p-=2; //p = p - 2; //yeni p === &k[3]
	cout << *p << endl;


	return 0;
}

int main2() {

	double d = 23482342346.623874238472384223;
	int* p = (int*)&d;
	//p adres
	//*p deðer

	cout << p << endl;
	cout << &d << endl;

	*p = 8;
	cout << *p << endl;
	cout << d << endl;

	return 0;

}

int main1() {
	int a = 10;
	int* p = &a	;  

	cout << &a << endl;
	cout << p << endl;

	*p = 88;

	cout << a << endl;
	cout << *p << endl;

	int b = 20;

	p = &b;

	cout << b << endl;
	cout << *p << endl;

	int* q;

	q = p;// = &b

	cout << b << endl;
	cout << *p << endl;
	cout << *q << endl;

	b = 99;
	cout << b << endl;
	cout << *p << endl;
	cout << *q << endl;

	const int c = 30;
	
	//1.const  2.const
	const int* const r = &b;
	//*r = 66; //Yasak 1. consttan dolayý
	//r = &a;  //Yasak 2. consttan dolayý
	return 0;
}




