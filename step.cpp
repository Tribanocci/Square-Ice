
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

#include "/home/tribonacci/Documents/Square-Ice/mainice.h"

bool newvc(int , int );

int step(std::array<int,WIDTH*HEIGHT> &a, int k, int &m, int &prev, int &neight2){

	int neight1, newv;
	int m1, m2;
	//==================BOUNDARY-PERIODIC-CONDITIONS================
	int q{k-1}; int n{k+1}; int o={k-WIDTH}; int p={k+WIDTH};
	if ((o)<0) {o=(WIDTH*HEIGHT-WIDTH+k);} if (p>(HEIGHT*WIDTH)) {p=k+WIDTH-WIDTH*HEIGHT;}
	if ((k%WIDTH)==0) {q=k+(WIDTH-1);} if (((k+1)%WIDTH)==0) {n=k-WIDTH+1;}
	//==============================================================
	switch(a[k]) {
         case 1 :
			         	do 
			         	{newv=randstat();}
			         	while((newv==4)||(newv==1)||newvc(m,newv));
			         	a[k]=newv;
			         		switch(newv) {
			         				case 2:
								 neight1 = q; neight2= n;
								 m1=1; m2=-1;
								 break;
								case 3:
								 neight1= o; neight2 =p;
								 m1=2; m2=-2;
								 break;
								case 5:
								 neight1=n; neight2=p;
								 m1=-1;  m2=-2;
								 break;
								case 6:
								 neight1=o; neight2=q;
								 m1=2; m2=1;
								 break;
								 }
								 break;
		 case 2 :
         					do 
         					{newv=randstat();}
         					while((newv==3)||(newv==2)||newvc(m,newv));
         						a[k]=newv;
				         		switch(newv) {
				         			case 1:
									 neight1 = q; neight2= n;
									 m1=-3; m2=3;
									 break;
									case 4:
									 neight1= o; neight2 =p;
									 m1=2; m2=-2;
									 break;
									case 5:
									 neight1=q; neight2=p;
									 m1=-3; m2=-2;   
									 break;
									 case 6:
									 	neight1=o; neight2=n;
									 	m1=2; m2=3;
									 	break;
									 }
									 break;
         	
        case 3 :
         					do 
         					{newv=randstat();}
         					while((newv==3)||(newv==2)||newvc(m,newv));
         						a[k]=newv;
				         		switch(newv) {
				         			case 1:
									 neight1= o; neight2 =p;
									 m1=-4; m2=4;
									 break;
									case 4:
									 neight1= q; neight2 =n;
									 m1=1; m2=-1;
									 break;
									case 5:
									 neight1=o; neight2=n;
									 m1=-4; m2=-1;   
									 break;
									 case 6:
									 	neight1=q; neight2=p;
									 	m1=1; m2=4;
									 	break;
									 }
									 break;	
    	case 4 :
         					do 
         					{newv=randstat();}
         					while((newv==4)||(newv==1)||(newvc(m,newv)));
         						a[k]=newv;
				         		switch(newv) {
				         			case 2:
									 neight1= o; neight2 =p;
									 m1=-4; m2=4;
									 break;
									case 3:
									 neight1= q; neight2 =n;
									 m1=-3; m2=3;
									 break;
									case 5:
									 neight1=o; neight2=q; 
									 m1=-4; m2=-3;  
									 break;
									 case 6:
									 	neight1=n; neight2=p;
									 	m1=3; m2=4;
									 	break;
									 }
									 break;	 	
          case 5 :
         					do 
         					{newv=randstat();}
         					while((newv==5)||(newv==6)||newvc(m,newv));
         						a[k]=newv;
				         		switch(newv) {
				         			case 1:
									 neight1= n; neight2 =p;
									 m1=3; m2=4;
									 break;
									case 2:
									 neight1= q; neight2 =p;
									 m1=1; m2=4;
									 break;
									case 3:
									 neight1=o; neight2=n; 
									 m1=2; m2=3;  
									 break;
									 case 4:
									 	neight1=o; neight2=q;
									 	m1=2; m2=1;
									 	break;
									 }
									 break;	 	
         case 6 :
         					do 
         					{newv=randstat();}
         					while((newv==5)||(newv==6)||newvc(m,newv));
         						a[k]=newv;
				         		switch(newv) {
				         			case 1:
									 neight1= o; neight2 =q;
									 m1=-4; m2=-3;
									 break;
									case 2:
									 neight1= o; neight2 =n;
									 m1=-4; m2=-1;
									 break;
									case 3:
									 neight1=q; neight2=p;   
									 m1=-3; m2=-2;
									 break;
									 case 4:
									 	neight1=n; neight2=p;
									 	m1=-1; m2=-2;
									 	break;
									 }
									 break;	 	
	}
	if(prev==neight1) {m=m2; prev=k; return neight2;}
	else if(prev==neight2) {m=m1; prev=k; return neight1;}
	else {
		prev=k;
	int ch;
	ch=randprob();
	if(ch<0.5) {m= m1; return neight1;}
	else 
	{m=m2; return neight2;}
}
}






bool newvc(int m, int newv){
	switch(m){
		case -4:
			if (newv==3||newv==4||newv==5) {return true;}
			else return false;
			break;		
		case -3:
			if (newv==2||newv==4||newv==5) {return true;}
			else return false;
			break;	
		case -2:
			if (newv==1||newv==2||newv==5) {return true;}
			else return false;
			break;
		case -1:
			if (newv==1||newv==3||newv==5) {return true;}
			else return false;
			break;
		case 0:
			return false;
			break;
		case 1:
			if (newv==1||newv==3||newv==6) {return true;}
			else return false;
			break;
		case 2:
			if (newv==1||newv==2||newv==6) {return true;}
			else return false;
			break;
		case 3:
			if (newv==2||newv==4||newv==6) {return true;}
			else return false;
			break;
		case 4:
			if (newv==3||newv==4||newv==6) {return true;}
			else return false;
			break;
	}
}
         		
