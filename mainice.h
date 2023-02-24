#include <cmath>
#include <string>
#include <sstream>
#include <time.h>
#include <iostream>
#include <array>
#include <fstream>
#include <stdlib.h>


//------------Dimensions of the lattice grid------------------
int const HEIGHT{7};
int const WIDTH{7};
//------------------------------------------------------------

//-----------Dimensions of the array -------------------------
//------responsible for the lattice visualization-------------
int const STORHEIGHT{6*HEIGHT+6}; //"6" is for the zoom factor, is arbitrary
int const STORWIDTH{6*WIDTH+6};
//------------------------------------------------------------



//---------long loop algorithm, the creation of the markov chain---
int step(std::array<int,WIDTH*HEIGHT> &, int , int &, int&, int&);


//------the visualization of the lattice six vertex model-------
void sixvertexoutput(std::array<int,HEIGHT*WIDTH> ,int );

//random number functions
int randpos();
int randstat();
float randprob();

//---initial state creation-------------------------------------
bool initialize(std::array<int,WIDTH*HEIGHT> &);
bool fexists(const std::string& );

//---------neightboor conditions--------------------------------
bool nearneight(std::array<int,HEIGHT*WIDTH> , int );
bool defectnearneight(std::array<int,HEIGHT*WIDTH> , int  );
