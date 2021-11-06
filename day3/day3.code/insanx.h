#ifndef __INSANX_H
#define __INSANX_H

#include <iostream>
using namespace std;


class InsanX {
public: // public variables
	static int insanSayisi;
	static const double cekimSabiti;

	string adi{ "Yok" };
	int yas{ 0 };

	const long long kimlikNo{};

protected:
	int oksijenTuketimi{ 500 }; // cc / Nefes

	void nefesAlVer();

private: // private variables
	int kalpatisi{};
private: // private functions
	void bobrekcalis() const;
public:
	InsanX();
	InsanX(string a, int y, long long k);
	InsanX(string a, int y, int kalpA, int k);
	~InsanX();
	static void meteorcarp();
	void yasa();
	void yasa(int y);
	void tanit() const;
	void setKalpatisi(int k);
	int getKalpatisi() const;
	void suic() const;
	void yemekye() const;
	virtual void ogren();

	friend void insanKalpAtisiBastir(const InsanX& ins);
	friend class KalpSayici;
};

#endif // !__INSANX_H