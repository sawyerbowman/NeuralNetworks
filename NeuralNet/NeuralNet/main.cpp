//
//  main.cpp
//  NeuralNet
//
//  Created by Ryan Barrett on 4/16/15.
//  Copyright (c) 2015 Ryan Barrett. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include "SmallProblem.h"

using namespace std;

int main(int argc, const char * argv[]) {
    
    string fileName;
    int numEpochs;
    double learnRate;
    int problemType;
    int outputType;
  
    
    if(argc != 6){
        cout << "Please re-enter the parameters" << endl;
        cout << endl;
        cout << "fileName (string)" << endl;
        cout << "numEpochs (int)" << endl;
        cout << "problemType (8 or 32) (int)" << endl;
        cout << "outputType (1 or 10) (int)" << endl;
    }
    
    else{
        fileName = argv[1];
        numEpochs = stoi(argv[2]);
        learnRate = stod(argv[3]);
        problemType = stoi(argv[4]);
        outputType = stoi(argv[5]);
        
        SmallProblem sp = SmallProblem(fileName);
    }
    
    
    return 0;
}
