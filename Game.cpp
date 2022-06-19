#include "Game.hpp"
#include <iostream>
#include <vector>
#include <string>
#include "Team.hpp"
#include "random"

  int Game::begin(double min, double max){
        double evg = (min + max)/2;
        double tem = (max - min)/6;
        random_device random;
        mt19937 gen(random());
        normal_distribution<float> d(evg, tem);
        int x = static_cast<int>(round(d(gen)));
        return x;
    }
    void Game::winner(){
       
    }