#include <vector>
#include <iostream>
struct Box{
  double min_x;
  double min_y;
  double max_x;
  double max_y;
  Box(double x1,double y1, double x2, double y2): min_x(x1), min_y(y1), max_x(x2), max_y(y2){}
};

class BoxArray: public std::vector<Box>
{
  public:
    template<class... Args>
    BoxArray(Args&&... args) : std::vector<Box>(std::forward<Args>(args)...){}
};

class BoxArrays : public std::vector<BoxArray>
{
  public:
    template<class... Args>
    BoxArrays(Args&&... args) : std::vector<BoxArray>(std::forward<Args>(args)...){}
};


int main(int argc, char* argv[]){
	
	int a[] = {1,2,3,4,5};
	BoxArrays v2;
	v2.emplace_back();
	v2.back().emplace_back(1,2,3,4);
	v2.back().emplace_back(2,2,3,4);
	v2.emplace_back();
	v2.back().emplace_back(1,2,3,4);
	v2.back().emplace_back(2,2,3,4);

	for(auto v : v2){
		for(auto p : v){
			std::cout << p.min_x << " " << p.min_y << " " << p.max_x << p.max_y<< std::endl;
		}
		std::cout << "--" << std::endl;
	}
	return 0;
}
