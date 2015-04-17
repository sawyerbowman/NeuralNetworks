//
//  SmallProblem.h
//  NeuralNet
//
//  Created by Ryan Barrett on 4/16/15.
//  Copyright (c) 2015 Ryan Barrett. All rights reserved.
//

#ifndef __NeuralNet__SmallProblem__
#define __NeuralNet__SmallProblem__

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

class SmallProblem{
    
public:
    SmallProblem(string fileName);
    
private:
    int bitmap[8][8];
};

#endif /* defined(__NeuralNet__SmallProblem__) */
