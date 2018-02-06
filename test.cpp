#include "/home/tribonacci/Documents/Square-Ice/mainice.h"

bool fexists(const std::string& filename) {
  std::ifstream ifile(filename.c_str());
  return (bool)ifile;
}

//===========check lattice============================================================
void checklattice(std::array<int,HEIGHT*WIDTH> a){
	for(int i{0}; i<HEIGHT*WIDTH; ++i){
		if (nearneight(a,i)) {std::cout << '\n' << "ERROR oCCURED IN "  << i << '\n';
				exit(EXIT_FAILURE);}
		
	}
	
}

int main(){
std::array<int,HEIGHT*WIDTH> a;
if (fexists("initial.txt")) {
			std::ifstream istr{"initial.txt"};
			for(int i=0; i<(WIDTH*HEIGHT); ++i){
				istr >>	a[i];
			}
		}
checklattice(a);

return 0;
}

