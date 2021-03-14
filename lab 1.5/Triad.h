#pragma once
#include <string>
#include <sstream> 

using namespace std;

class Triad 
{
private:
	int first;
	int second;
	int third;
public:
	int getFirst() const { return first; }
	void setFirst(int value) { first = value; }
	int getSecond() const { return second; }
	void setSecond(int value) { second = value; }
	int getThird() const { return third; }
	void setThird(int value) { third = value; }
	void Init(int firstValue, int secondValue, int thirdValue);
	void Display() const;
	void Read();
	bool h1(Triad t) const;
	bool h2(Triad t) const;
	bool m1(Triad t) const;
	bool m2(Triad t) const;
	bool s1(Triad t) const;
	bool s2(Triad t) const;
	const string toString();
	double check();
};