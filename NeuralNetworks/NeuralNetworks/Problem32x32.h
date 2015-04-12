//
//  Problem32x32.h
//  NeuralNetworks
//
//  Created by Ryan Barrett on 4/12/15.
//  Copyright (c) 2015 Ryan Barrett. All rights reserved.
//

#ifndef __NeuralNetworks__Problem32x32__
#define __NeuralNetworks__Problem32x32__

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

class Problem{
public:
    //Constructor
    Problem(string fileName);
    
    //Getters
    int getNumAt(int x, int y){return bitMap[x][y]; }

private:
    //2D representation of the bitmap
    int bitMap[32][32];
};


#endif /* defined(__NeuralNetworks__Problem32x32__) */
