#ifndef __SUPERINSANX_H
#define __SUPERINSANX_H

#include "insanx.h"
#include <iostream>
using namespace std;


class SuperInsanX :public InsanX {
private:
	int iphonever{};

public:
	SuperInsanX();
	SuperInsanX(string a, int y, long long k, int iphver);
	SuperInsanX(string  a) = delete;
	SuperInsanX(int iphone);
	~SuperInsanX();
	void kodYaz();
	void setIphoneVer(int i);
	int getIphoneVer() const;
	void ogren();
};

#endif //  !__SUPERINSANX_H