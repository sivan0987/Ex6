#include <iostream>
#include "Leauge.hpp"
int const MAXother = 20;
double const EPS = 0.0001;
using namespace std;

namespace basketball{



Leauge::Leauge(){
    for (int i=0 ;i<20;i++){
        this->_leaga.push_back( new Team(to_string(i),0))
    }
}

Leauge::Leauge(vector<Team*> other){
    if (other.size()>20){
            throw invalid_argument("you can only 20 \n");
        }
        
        for (unsigned int i = 0; i < other.size(); i++) {
            this->_leaga.push_back(other.at(i));
        }
        if(i<20){
            for (unsigned int j = i; i < 20 j++) {
                 this->_leaga.push_back( new Team(to_string(j),0))
            }

        }

        
}}