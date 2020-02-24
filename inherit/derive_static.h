#pragma once
#include "base.h"
#include <iostream>
#include <memory>
#include <vector>
using namespace std;


class DeriveStatic : public Base{
public:
	DeriveStatic(){
		for(int i=0; i< 10; i++){
			s.emplace_back(i);
		}
	}
	~DeriveStatic(){}
	static vector<size_t> s;
	void foo(){}
private:
	virtual void write_buff(const char* ptr, size_t size) {
		cout << " DeriveD " <<ptr << " " << size << endl;
	};
	
};


