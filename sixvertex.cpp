
//==================================================================================================================
//=================================================NOTATION=========================================================
// 1 u r
// 2 u l
// 3 d r
// 4 d l
// 5 u d
// 6 l r
//==================================================================================================================
//==================================================================================================================

#include "mainice.h"

std::string fileName = "gen";
std::string fileType = ".pbm";



void sixvertexoutput(std::array<int,HEIGHT*WIDTH> a, int gen){
std::array<int,STORHEIGHT*STORWIDTH> b;
for(int i=0; i<(STORHEIGHT*STORWIDTH); ++i){
	b[i]=0;}
std::stringstream ss;
ss.str("");
ss.clear(); // Clear state flags


for (int i=0; i<(HEIGHT); ++i){
for (int j=0; j<(WIDTH); ++j){
 switch(a[i*WIDTH+j]) {
      case 1 :
      	
         {
		 b[(6*i+6)*STORWIDTH+(6*j+6)]=1; b[(6*i-1+6)*STORWIDTH+(6*j+6)]=1; b[(6*i-2+6)*STORWIDTH+(6*j+6)]=1;
		 b[(6*i+6)*STORWIDTH+(6*j+1+6)]=1; b[(6*i+6)*STORWIDTH+(6*j+2+6)]=1;}
         break;
      case 2 :
      	 {b[(6*i+6)*STORWIDTH+(6*j+6)]=1; b[(6*i-1+6)*STORWIDTH+(6*j+6)]=1; b[(6*i-2+6)*STORWIDTH+(6*j+6)]=1;
		 b[(6*i+6)*STORWIDTH+(6*j-1+6)]=1; b[(6*i+6)*STORWIDTH+(6*j-2+6)]=1;}
		 break;
      case 3 :
      	
         {b[(6*i+6)*STORWIDTH+(6*j+6)]=1;  b[(6*i+1+6)*STORWIDTH+(6*j+6)]=1; b[(6*i+2+6)*STORWIDTH+(6*j+6)]=1;
		 b[(6*i+6)*STORWIDTH+(6*j+1+6)]=1; b[(6*i+6)*STORWIDTH+(6*j+2+6)]=1;}
         break;
      case 4 :
          {b[(6*i+6)*STORWIDTH+(6*j+6)]=1; b[(6*i+1+6)*STORWIDTH+(6*j+6)]=1; b[(6*i+2+6)*STORWIDTH+(6*j+6)]=1;
		 b[(6*i+6)*STORWIDTH+(6*j-1+6)]=1; b[(6*i+6)*STORWIDTH+(6*j-2+6)]=1;}
         break;
      case 5 :
      	
          {b[(6*i+6)*STORWIDTH+(6*j+6)]=1; b[(6*i-1+6)*STORWIDTH+(6*j+6)]=1; b[(6*i-2+6)*STORWIDTH+(6*j+6)]=1;
		 b[(6*i+1+6)*STORWIDTH+(6*j+6)]=1; b[(6*i+2+6)*STORWIDTH+(6*j+6)]=1;}
		
         break;
    	case 6 :
    		{b[(6*i+6)*STORWIDTH+(6*j+6)]=1; b[(6*i+6)*STORWIDTH+(6*j+1+6)]=1; b[(6*i+6)*STORWIDTH+(6*j+2+6)]=1;
		 b[(6*i+6)*STORWIDTH+(6*j-1+6)]=1; b[(6*i+6)*STORWIDTH+(6*j-2+6)]=1;}
    	break;
    
    
   }
}}

std::ofstream ostr; 
 //Push all the parameters into the string 
    ss<<fileName<<gen<<fileType;
ostr.open(ss.str().c_str());

 ostr << "P1" << '\n' << STORHEIGHT << " " << STORWIDTH << '\n';
for (int j=0; j<STORWIDTH*STORHEIGHT; ++j){
	ostr << b[j] << '\n';}


}


