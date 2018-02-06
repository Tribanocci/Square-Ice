# Square-Ice

A monte carlo algorithm that runs through all the possible states permitted by the neightbour conditions(ice rules) of six vertex model, in order to compute thermodynamical quantities such as residual entropy or specific heat.


## Getting Started

These instructions will get you a copy of the project up and running on your local machine for development and testing purposes. 
* Download all files to a directory
* Include the .h file to all the .cpp file(Change the path name of the first line of each .cpp)
* Open .dev file with DevC++
* Compile project

If you're running linux distro then all you have to do is:
* Download all files to a directory 
* Include the .h file to all the .cpp file(Change the path name of the first line of each .cpp)
* Execute the exec.sh file


The result will be a number of N different states all written in .txt files(each number represents one of the six vertices) and visualized in .pbm




### Requirements
For Windows:
* DevC++
* C++11

For linux:
* g++


To implement c++11 code insert on Devcompiler options --std=c++11



## Running the tests

After the list of N states is generated you can extract a diagram of Energy per state using a energetic model such as F model.


## Files
* sixvertex.cpp <br />
These files contain functions for the .pbm visualization of the states.

* rand.cpp <br />
The function which generate the random numbers.

* step.cpp <br />
The long loop algorithm responsible for the Markov chain(the transition to a new possible state).

* neightboor-cond.cpp <br />
Functions that describe the near neightboor condition. It impliments the ice rules

* initialize.cpp <br />
The first randomly created first stateof the grid.

## Authors

* **Konstantinos Fitilis** - *Initial work* - [Tribonacci](https://github.com/Tribanocci)
Feel free to share and use any of the files and contribute to my project


## Relevant

* Square ice model
* Stochastic, Markov chains
* Six vertex Model
* c++11

