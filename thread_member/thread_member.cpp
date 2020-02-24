#include <vector>
#include <iostream>
#include<thread>
#include<chrono>

using namespace std;

struct data{
	vector<int> v;
	~data(){
		cout << "destruct data\n";
	}
};

class thread_work{
	public:
	thread_work():m_i(0){
		for(int i=0; i < 10; i++){
			v.push_back(i);	
			d.v.push_back(i);
		}
		w = std::thread(thread_t{m_i, v, d});
		cout << "-=================-\n";
	}
	~thread_work(){
		w.join();
	}
	int m_i;
	vector<int> v;
	data d;
	std::thread w;
	class thread_t{
		public:
		thread_t(int& i, vector<int>& v, data& d): m_i(i),m_v(v),m_d(d){}
		void operator()(){
			while(m_i < 10){
				this_thread::sleep_for(chrono::seconds(2));	
				cout <<  m_i ++ << " "<< m_v[m_i] << " " << m_d.v[m_i]<< " running... \n" ;
			}
		}
		int& m_i;
		vector<int>& m_v;
		data & m_d;
	};	
	
};

class container{
	public:
		container(){
			work = make_shared<thread_work>();
		}
		~container(){
			cout << "destructed\n";
		}
		shared_ptr<thread_work> work;
};


int main(int argc, char** argv){
	container c;
	cout << "\n-------\n";
	return 0;
}







