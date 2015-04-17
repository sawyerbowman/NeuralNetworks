//
//  main.cpp
//  NeuralNetworks
//
//  Created by Ryan Barrett on 4/12/15.
//  Copyright (c) 2015 Ryan Barrett. All rights reserved.
//

#include <iostream>
using namespace std;

void printWarnings(){
    cout << "Please enter the correct number of parameters." << endl;
    cout << "fileName:      the name of the file (string)" << endl;
    cout << "numEpochs:     the number of epochs (int)" << endl;
    cout << "learnRate:     the learning rate (double)" << endl;
}

int main(int argc, const char * argv[]) {
    //check to see if correct number of parameters
    if (argc != 6){
        printWarnings();
    }

    string fileName = argv[1];
    int numEpochs = stoi(argv[2]);
    double learnRate = stod(argv[3]);
    int problemType = stoi(argv[4]);
    int outputType = stoi(argv[5]);
    
    SmallProblem sp = SmallProblem(fileName);
    
    
    cout << fileName << " " << numEpochs << " " << learnRate << " " << problemType << " " << outputType << endl;
    
    return 0;
}
