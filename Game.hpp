#pragma once
#include <iostream>
#include "Team.hpp"

using namespace std;

namespace basketball{
    class Game {
        private:
            Team* _home;
            Team* _out;
            string _win;
        public:
            Game(){
                this->_win="";
            }
            void winner();
            ~Game();
            int begin(double min, double max);
    }
    }