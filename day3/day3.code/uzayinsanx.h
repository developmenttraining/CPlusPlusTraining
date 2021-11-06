#ifndef __UZAYINSANX_H
#define __UZAYINSANX_H

#include "insanx.h"
#include "robot.h"

class UzayInsanX :public InsanX, public Robot {
public:
	UzayInsanX();
	void ogren();
	inline void donvesay() {
		for (int i{ 0 }; i < 10; ++i) {
			cout << "donvesay " << i << endl;
		}
	}
};

#endif // __UZAYINSANX_H
