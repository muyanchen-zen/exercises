
#pragma once
#include "base.h"
#include <iostream>
#include <memory>
using namespace std;


class DeriveB : public Base{
public:
	DeriveB(){}
	~DeriveB(){}
protected:
	virtual void write_buff(const char* ptr, size_t size) {
		cout << " DeriveB " <<ptr << " " << size << endl;
	};
	virtual void foo(){}
};
