#include "/home/tribonacci/Documents/Square-Ice/mainice.h"

//====================================================================================
//----------------energetic model-----------------------------------------------------
int interenergy(std::array<int,HEIGHT*WIDTH> a){
	int energy{0};
	for (int i{0}; i< HEIGHT*WIDTH; ++i){
		if (a[i]==5) {--energy;}
		if (a[i]==6) {--energy;}
		}
	return energy;
}

//===========check lattice============================================================
void checklattice(std::array<int,HEIGHT*WIDTH> a){
	for(int i{0}; i<HEIGHT*WIDTH; ++i){
		if (nearneight(a,i)) {std::cout << '\n' << "ERROR oCCURED IN "  << i << '\n';
				exit(EXIT_FAILURE);}
	}
}
         	

int main() {
//====================================================================================
srand(time(NULL));

	std::array<int,WIDTH*HEIGHT> a; //current state array
	std::array<int,WIDTH*HEIGHT> buffer;//helps to reset a non solvable long loop
	std::array<int,40> energy;//energetic model
	std::array<int,100> doe;//density of energy
	for (int i{0}; i<40; ++i){
		energy[i]=0;}
	bool cond=true;
	int st;
int k;
int neightlast;
int m;
int pr;
int endcond;
int initenergy{0};
int finalenergy{0};
float thermalenergyratio{0.1};
int co{0};
std::stringstream ss;
ss.str("");
ss.clear();
//===============================================================================
//====================initialze==================================================
while(cond){
	cond=initialize(a);
}
sixvertexoutput(a,0);
//===================================================================================



//===================================================================================
//=========================SAMPLE====================================================
for (int i{0}; i<(HEIGHT*WIDTH); ++i){
	buffer[i]=a[i];
}
std::ofstream ofstr{"longloops.txt", std::ios_base::trunc};
for (int tries{0}; tries<40; tries++){

initialstep:	

	initenergy=interenergy(a);
k=randpos();
m=0;
pr=-1;
endcond=0;
st=step(a,k,m,pr,endcond);
neightlast=endcond;

	std::cout << '\n' << "the will come when i hit ........" << neightlast << '\n';
	ofstr << '\n' << "finish when posit....." << neightlast << '\n';


	pr=k;
for (int i{0}; i<1000; ++i){

	ofstr << '\n' << "came from  " << pr << '\n' << "curr pos: "  << st << ".......was a : " << a[st] << ".....became   ";
	
		st=step(a,st,m,pr,endcond);
		if (st==neightlast) { break;}
		if (defectnearneight(a,st))
		{for (int i{0}; i<(HEIGHT*WIDTH); ++i){
	a[i]=buffer[i];}
goto initialstep;}
	
	std::cout << a[pr];
}
co=0;
while(nearneight(a,st)){
	a[st]=randstat();
	++co;
	if(co>1000) {for (int i{0}; i<(HEIGHT*WIDTH); ++i){
	a[i]=buffer[i];}
goto initialstep;}
	}
	


finalenergy=interenergy(a);
std::cout << '\n' << '\n' << finalenergy-initenergy << '\n' << '\n';
if ((finalenergy-initenergy)<=0)
{for (int i{0}; i<(HEIGHT*WIDTH); ++i){
	buffer[i]=a[i];
}
energy[tries]=finalenergy;

sixvertexoutput(a,tries+1);}
if ((finalenergy-initenergy)>0)
{if (randprob()<exp(-thermalenergyratio*(finalenergy-initenergy)))
{for (int i{0}; i<(HEIGHT*WIDTH); ++i){
	buffer[i]=a[i];
}
energy[tries]=finalenergy;

sixvertexoutput(a,tries+1);}
else
	{for (int i{0}; i<(HEIGHT*WIDTH); ++i){
	a[i]=buffer[i];}
	--tries;
	}
}

}
std::ofstream ost;
    ss<<"energy"<<thermalenergyratio<<".txt";
ost.open(ss.str().c_str());
for(int i{0}; i<40; ++i){
	ost <<'\n' << energy[i];
}



	return 0;
}



