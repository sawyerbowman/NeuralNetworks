//
//  SmallProblem.cpp
//  NeuralNet
//
//  Created by Ryan Barrett on 4/16/15.
//  Copyright (c) 2015 Ryan Barrett. All rights reserved.
//

#include "SmallProblem.h"

SmallProblem::SmallProblem(string fileName){
    cout << fileName << endl;
    
    ifstream read(fileName);
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            read >> bitmap[i][j];
        }
        cout << endl;
    }
    
    
}