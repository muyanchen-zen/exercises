
#pragma once
#include "derive_b.h"
#include <iostream>
#include <memory>
using namespace std;


class DeriveC : public DeriveB{
	public:
	DeriveC(){}
	~DeriveC(){}
private:
	virtual void write_buff(const char* ptr, size_t size) {
		cout << " DeriveC " <<ptr << " " << size << endl;
	};
};

