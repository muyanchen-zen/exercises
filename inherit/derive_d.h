#pragma once
#include "derive_d.h"
#include <iostream>
#include <memory>
using namespace std;


class DeriveD : public DeriveB{
	public:
	DeriveD(){}
	~DeriveD(){}
private:
	virtual void write_buff(const char* ptr, size_t size) {
		cout << " DeriveD " <<ptr << " " << size << endl;
	};
};
