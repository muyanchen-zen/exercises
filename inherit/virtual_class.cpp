#include "base.h"
#include "derive_a.h"
#include "derive_b.h"
#include "derive_c.h"
#include "derive_d.h"
#include "derive_static.h"
#include <iostream>
#include <memory>
using namespace std;

vector<size_t> DeriveStatic::s;

int  main(int argc, char** ){
	std::shared_ptr<Base> writer;
	writer = std::make_shared<DeriveA>();
	writer->write_buff("...", 3);
	writer = std::make_shared<DeriveB>();
	writer->write_buff("bbb", 3);
	writer = std::make_shared<DeriveC>();
	writer->write_buff("ccc", 3);
	writer->foo();
	writer = std::make_shared<DeriveD>();
	writer->write_buff("ddd", 3);
	writer->foo();
	writer = std::make_shared<DeriveStatic>();
	writer->write_buff("ddd", 3);
	writer->foo();
	for(auto& i : DeriveStatic::s){
		i+= 3;
	}
	for(auto i : DeriveStatic::s){
		cout << i<< std::endl;
	}
	return 0;
}





