    #include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
using namespace std;
#include "Leauge.hpp"
#include "Game.hpp"

namespace basketball{
    class Schedule{
        private:
            vector<Team*> _team;
            int _points;
        public:
            Schedule(vector<Team*> other){
                this->_team = other;
            }
            vector<Game*> schedule ();
            }
            }
             
   