// Copyright (c) 2020 Ahmad el-khawaldeh All rights reserved.
//
// Created by Ahmad el-khawaldeh
// Created on Nov 2020
// This program checks if u got the right random number


#include <iostream>
#include <random>


int main() {
     
int input_number;
int  RANDOM_NUMBER;

    // input
    std::cout << " enter a number from 1-9: " ;
    std::cin >>  input_number;
    std::cout << "" << std::endl;

    //process 
    if ( input_number > RANDOM_NUMBER) {
    //output
    std::cout << " correct ";
   } else {
     std::cout << " Icorrecct , random number is  ";
   }

int someRandomNumber;

  std::random_device rseed;
  std::mt19937 rgen(rseed()); 
  std::uniform_int_distribution<int> idist(1,9); 
  RANDOM_NUMBER = idist(rgen);

  std::cout <<  RANDOM_NUMBER << std::endl;

}