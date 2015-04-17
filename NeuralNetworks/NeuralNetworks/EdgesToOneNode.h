//
//  EdgesToOneNode.h
//  NeuralNetworks
//
//  Created by Ryan Barrett on 4/15/15.
//  Copyright (c) 2015 Ryan Barrett. All rights reserved.
//

#ifndef __NeuralNetworks__EdgesToOneNode__
#define __NeuralNetworks__EdgesToOneNode__

#include <stdio.h>
#include <vector>

using namespace std;

class EdgesToOneNode{
public:
    //getter
    double getEdgeAt(int index){ return edges.at(index); }
    
    //setter
    void setEdgeTo(double val, int index){ edges.at(index) = val; }
    
private:
    vector<double> edges;
};

#endif /* defined(__NeuralNetworks__EdgesToOneNode__) */
