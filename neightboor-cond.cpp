#include "mainice.h"

//================================================================================================
//--------------------bool nearneightboor(a,k) has input the a array(current state) and the ------
//--------------------position of a specific vertex. Returns true if up, down, left, right--------
//--------------------neightboors are acceptable-------------------------------------------------- 
bool nearneight(std::array<int,  HEIGHT*WIDTH> a, int k ){
	int check{0};
	int m{k-1}; int n{k+1}; int o={k-WIDTH}; int p={k+WIDTH};//m->left, n->right, o->up, p->down
	if ((o)<0) {o=(WIDTH*HEIGHT-WIDTH+k);} if (p>(HEIGHT*WIDTH)) {p=k+WIDTH-WIDTH*HEIGHT;}
	if ((k%WIDTH)==0) {m=k+(WIDTH-1);} if (((k+1)%WIDTH)==0) {n=k-WIDTH+1;}
	switch(a[k]) {
         case 1 :
        		if ((a[m]==1)||(a[m]==3)||(a[m]==6)||(a[m]==0)) {++check;}
        		if ((a[o]==1)||(a[o]==2)||(a[o]==6)||(a[o]==0)) {++check;}
        		if ((a[n]==1)||(a[n]==3)||(a[n]==5)||(a[n]==0)) {++check;}
        		if ((a[p]==1)||(a[p]==2)||(a[p]==5)||(a[p]==0)) {++check;}
         break;
      case 2 :
      	        	if ((a[m]==2)||(a[m]==4)||(a[m]==5)||(a[m]==0)) {++check;}
        		if ((a[o]==1)||(a[o]==2)||(a[o]==6)||(a[o]==0)) {++check;}
        		if ((a[n]==2)||(a[n]==4)||(a[n]==6)||(a[n]==0)) {++check;}
        		if ((a[p]==1)||(a[p]==2)||(a[p]==5)||(a[p]==0)) {++check;}  
         break;
      case 3 :
        		if ((a[m]==1)||(a[m]==3)||(a[m]==6)||(a[m]==0)) {++check;}
        		if ((a[o]==3)||(a[o]==4)||(a[o]==5)||(a[o]==0)) {++check;}
        		if ((a[n]==1)||(a[n]==3)||(a[n]==5)||(a[n]==0)) {++check;}
        		if ((a[p]==3)||(a[p]==4)||(a[p]==6)||(a[p]==0)) {++check;}  
         break;
      case 4 :
                	if ((a[m]==2)||(a[m]==4)||(a[m]==5)||(a[m]==0)) {++check;}
        		if ((a[o]==3)||(a[o]==4)||(a[o]==5)||(a[o]==0)) {++check;}
        		if ((a[n]==2)||(a[n]==4)||(a[n]==6)||(a[n]==0)) {++check;}
        		if ((a[p]==3)||(a[p]==4)||(a[p]==6)||(a[p]==0)) {++check;}  
         break;
      case 5 :
               		if ((a[m]==1)||(a[m]==3)||(a[m]==6)||(a[m]==0)) {++check;}
        		if ((a[o]==1)||(a[o]==2)||(a[o]==6)||(a[o]==0)) {++check;}
        		if ((a[n]==2)||(a[n]==4)||(a[n]==6)||(a[n]==0)) {++check;}
        		if ((a[p]==3)||(a[p]==4)||(a[p]==6)||(a[p]==0)) {++check;}  
         break;
    	case 6 :
    	      		if ((a[m]==2)||(a[m]==4)||(a[m]==5)||(a[m]==0)) {++check;}
        		if ((a[o]==3)||(a[o]==4)||(a[o]==5)||(a[o]==0)) {++check;}
        		if ((a[n]==1)||(a[n]==3)||(a[n]==5)||(a[n]==0)) {++check;}
        		if ((a[p]==1)||(a[p]==2)||(a[p]==5)||(a[p]==0)) {++check;}  
        	break;
		}
		if(check==4) 
		{return false;}
		else return true;
		}
   

bool defectnearneight(std::array<int,  HEIGHT*WIDTH> a, int k ){
	int check{0};
	int m{k-1}; int n{k+1}; int o={k-WIDTH}; int p={k+WIDTH};
	if ((o)<0) {o=(WIDTH*HEIGHT-WIDTH+k);} if (p>(HEIGHT*WIDTH)) {p=k+WIDTH-WIDTH*HEIGHT;}
	if ((k%WIDTH)==0) {m=k+(WIDTH-1);} if (((k+1)%WIDTH)==0) {n=k-WIDTH+1;}
	switch(a[k]) {
         case 1 :
        		if ((a[m]==1)||(a[m]==3)||(a[m]==6)||(a[m]==0)) {++check;}
        		if ((a[o]==1)||(a[o]==2)||(a[o]==6)||(a[o]==0)) {++check;}
        		if ((a[n]==1)||(a[n]==3)||(a[n]==5)||(a[n]==0)) {++check;}
        		if ((a[p]==1)||(a[p]==2)||(a[p]==5)||(a[p]==0)) {++check;}
         break;
      case 2 :
      	        if ((a[m]==2)||(a[m]==4)||(a[m]==5)||(a[m]==0)) {++check;}
        		if ((a[o]==1)||(a[o]==2)||(a[o]==6)||(a[o]==0)) {++check;}
        		if ((a[n]==2)||(a[n]==4)||(a[n]==6)||(a[n]==0)) {++check;}
        		if ((a[p]==1)||(a[p]==2)||(a[p]==5)||(a[p]==0)) {++check;}  
         break;
      case 3 :
        		if ((a[m]==1)||(a[m]==3)||(a[m]==6)||(a[m]==0)) {++check;}
        		if ((a[o]==3)||(a[o]==4)||(a[o]==5)||(a[o]==0)) {++check;}
        		if ((a[n]==1)||(a[n]==3)||(a[n]==5)||(a[n]==0)) {++check;}
        		if ((a[p]==3)||(a[p]==4)||(a[p]==6)||(a[p]==0)) {++check;}  
         break;
      case 4 :
                	if ((a[m]==2)||(a[m]==4)||(a[m]==5)||(a[m]==0)) {++check;}
        		if ((a[o]==3)||(a[o]==4)||(a[o]==5)||(a[o]==0)) {++check;}
        		if ((a[n]==2)||(a[n]==4)||(a[n]==6)||(a[n]==0)) {++check;}
        		if ((a[p]==3)||(a[p]==4)||(a[p]==6)||(a[p]==0)) {++check;}  
         break;
      case 5 :
               		if ((a[m]==1)||(a[m]==3)||(a[m]==6)||(a[m]==0)) {++check;}
        		if ((a[o]==1)||(a[o]==2)||(a[o]==6)||(a[o]==0)) {++check;}
        		if ((a[n]==2)||(a[n]==4)||(a[n]==6)||(a[n]==0)) {++check;}
        		if ((a[p]==3)||(a[p]==4)||(a[p]==6)||(a[p]==0)) {++check;}  
         break;
    	case 6 :
    	      		if ((a[m]==2)||(a[m]==4)||(a[m]==5)||(a[m]==0)) {++check;}
        		if ((a[o]==3)||(a[o]==4)||(a[o]==5)||(a[o]==0)) {++check;}
        		if ((a[n]==1)||(a[n]==3)||(a[n]==5)||(a[n]==0)) {++check;}
        		if ((a[p]==1)||(a[p]==2)||(a[p]==5)||(a[p]==0)) {++check;}  
        	break;
		}
		if(check==2) 
		{return true;}
		else return false;
		}
   
