
#pragma once
#include "base.h"
#include <iostream>
#include <memory>
using namespace std;


class DeriveA : public Base{
public:
	DeriveA(){}
	~DeriveA(){}
private:
	virtual void write_buff(const char* ptr, size_t size) {
		cout << " DeriveA  "  << ptr << " " << size << endl;
	};
	virtual void foo(){}

};



