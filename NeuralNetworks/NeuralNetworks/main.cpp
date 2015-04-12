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
    // insert code here...
    if (argc != 3){
        printWarnings();
    }
    
    string fileName = argv[0];
    int numEpochs = stoi(argv[1]);
    double learnRate = stod(argv[2]);
    
    
    cout << "Hello, World!\n";
    return 0;
}
