#pragma once
#include <iostream>
#include <memory>
using namespace std;


class Base{
public:
	Base(){}
	~Base(){}
public:
	virtual void write_buff(const char* ptr, size_t size) = 0;
	virtual void foo() = 0;
};

