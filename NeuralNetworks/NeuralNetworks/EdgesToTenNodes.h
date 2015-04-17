//
//  EdgesToTenNodes.h
//  NeuralNetworks
//
//  Created by Ryan Barrett on 4/15/15.
//  Copyright (c) 2015 Ryan Barrett. All rights reserved.
//

#ifndef __NeuralNetworks__EdgesToTenNodes__
#define __NeuralNetworks__EdgesToTenNodes__

#include <stdio.h>
#include <vector>

using namespace std;

class EdgesToTenNodes{
public:
    //getter
    double getEdgeAt(int nodeNum, int index){return edges.at(nodeNum).at(index); }
    
    //setter
    void setEdgeTo(double val, int nodeNum, int index){edges.at(nodeNum).at(index) = val; }

private:
    vector<vector<double>> edges;
    
};

#endif /* defined(__NeuralNetworks__EdgesToTenNodes__) */
