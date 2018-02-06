//=================================================================================================================
//-----------This file contains functions responsible for the creation of the first state of the lattice taking----
//---------- into account the neightboor conditions----------------------------------------------------------------
//-----------the output is returned  via an array of fixed dimensions(WIDTH, HEIGHT)-------------------------------
//=================================================================================================================

#include "/home/tribonacci/Documents/Square-Ice/mainice.h"

bool fexists(const std::string& filename) {
  std::ifstream ifile(filename.c_str());
  return (bool)ifile;
}


bool initialize(std::array<int,WIDTH*HEIGHT> &a ){

if (fexists("initial.txt")) {
			std::ifstream istr{"initial.txt"};
			for(int i=0; i<(WIDTH*HEIGHT); ++i){
				istr >>	a[i];
				}
			return false;
			}
else
			
	for(int i=0; i<(WIDTH*HEIGHT); ++i){
		a[i]=0;
		}
	a[0]=3;
	for (int i=1; i<(WIDTH*HEIGHT); ++i){
		int tr{0};
	do {++tr;
		if(tr>50) {return true;} //restart if stuck in same lattice spot for over of 50 tries
		a[i]=randstat();//assign a random number between 1 and 6 (six vertex model)
		std::cout << "entered " << a[i] << "position   " << i << '\t' << tr << '\n'; 
		} while((nearneight(a,i)));//run the loop until the neightboor conditions are satisfied
	}


	for (int k=0; k<(HEIGHT*WIDTH); ++k){
		std::cout << a[k] << "   ";  
		}

	std::ofstream ostr{"initial.txt", std::ios_base::trunc};
	for (int k=0; k<(HEIGHT*WIDTH); ++k){
		ostr << a[k] << '\n';	
		}
	return false;

}


