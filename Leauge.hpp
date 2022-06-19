#pragma once
#include <iostream>
#include <vector>
#include "Team.hpp"

using namespace std;

namespace basketball{
    class Leauge {
        private:
             vector<Team*> _leaga;
        public:
        Leauge();
        Leauge(vector<Team*> other);

    }}
