#include "Schedule.hpp"
#include <iostream>
#include <vector>
#include "Leauge.hpp"
#include "Game.hpp"

//  vector<Game*> Schedule:: schedule (){
//         if(this->_team.empty() || this->_team.size()>20){
//             throw invalid_argument("error");
//         }
//         vector<Game*> temp;
//         for (unsigned int i = 0; i < this->teams.size(); i++) {
//             for (unsigned int j = i; j < this->teams.size(); j++) {
//                 if(i!=j){
//                     temp.push_back(new Game(this->teams.at(i), this->teams.at(j)));
//                 }
//             }
//         }
//         for (unsigned int i = 0; i < this->teams.size(); i++) {
//             for (unsigned int j = i; j < this->teams.size(); j++) {
//                 if(i!=j){
//                     temp.push_back(new Game(this->teams.at(j), this->teams.at(i)));
//                 }
//             }
//         }
//         for (unsigned int i = 0; i < temp.size(); ++i) {
//             if(temp.at(i)->team_in->points_good==temp.at(i)->team_out->points_good){
//                 this->num_of_teko+=1;
//             }
//         }
//         return temp;
//     }