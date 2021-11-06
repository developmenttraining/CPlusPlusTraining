 #ifndef __ROBOT_H
#define __ROBOT_H

class Robot {
private:
	int iq{ 200 };

public:
	int cpu{ 1 }; // GHz
	Robot();
	~Robot();
	Robot(int iq);
	void setIq(int iq);
	int getIq() const;
	void reset();
};

#endif // !__ROBOT_H