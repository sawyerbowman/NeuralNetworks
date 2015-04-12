//
//  Problem8x8.h
//  NeuralNetworks
//
//  Created by Ryan Barrett on 4/12/15.
//  Copyright (c) 2015 Ryan Barrett. All rights reserved.
//

#ifndef __NeuralNetworks__Problem8x8__
#define __NeuralNetworks__Problem8x8__

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
    int bitMap[8][8];
};


#endif /* defined(__NeuralNetworks__Problem8x8__) */
