#include <iostream>

using namespace std;

class base{
public:
	base(){	cout << "i'm base" << endl; }
	~base(){}
	virtual void display() = 0;
	virtual void display(const char* val) = 0;
protected:
	string val;
	const string cval;
};

class son : public base{
public:
	son(){ cout << "i'm son" << endl; }
	~son(){}
	void display() override { cout << "display son" << endl; }
	void display(const char* val) { val = val; cout << "cval: " << val << endl; }
};

class grandson: public son{
	public:
		grandson(){ cout << " grandson " << endl; }
		void display() { cout << "display grandson" << endl; }

};


int main(int argc, char** argv){
    base * b;
	b = new son();
	b->display();
	b->display("vallll");
	delete b;
	b = new grandson();
	b->display();
	delete b;
	return 0;
}




