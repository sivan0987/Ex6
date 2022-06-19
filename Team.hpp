
#pragma once
#include <iostream>

using namespace std;

namespace basketball{
    class Team{
        private:

            string _name;
            double _talent;
            int _id;
            int _points;
            int lose;
            int wins;
            int Win_row;

        public:
        Team();


        Team(int talent,string name, int id){
             if (name == "\t" || name == "\n" || name.empty() || name == " " || name == "\r"){
                throw invalid_argument("Invalid team name\n");
            }
           // this->_talent =talent
             setTalent(talent);
            this->_name = name;
            this ->_id = id;
        }
        void setTalent( double talent){
            if(talent>1 || talent<0 ){
                    throw invalid_argument("the talent should be between 1-0");
            }
            
            this-> _talent = talent;
        }
        int getTalent(){
            return this->_talent;
        }
        
        ~Team();
    }
    }