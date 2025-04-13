#include <iostream>
#include <vector>

#include "human.h"
#include "student.h"

int main(int argc, char* argv[]){
    std::vector<int> scores;
    scores.push_back(5);
    scores.push_back(4);
    scores.push_back(3);
    scores.push_back(5);
    scores.push_back(4);
    scores.push_back(2);

    student *stud1=new student("Ivanov","Ivan","Ivanovich",scores);
    std::cout << stud1->get_full_name() << std::endl;
    std::cout << "Средний балл: " << stud1->get_average_score() << std::endl;

}