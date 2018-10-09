//
//  Profession_BW.h
//  Expert System Freshmen Students
//
//  Created by HARSH H PATNI on 9/30/18.
//  Copyright © 2018 HARSH H PATNI. All rights reserved.
//

#ifndef Profession_BW_h
#define Profession_BW_h

#include<iostream>
#include<string.h>
using namespace std;

class BackWard
{
public:
    BackWard();
    virtual ~BackWard();
    void detMemConcList();
    void pushStack();
    void initBack();
    string mainBack();
protected:
private:
    string varListBack[16];
    string concList[18];
    string clsVarLst[108];
    char temp[10];
    string grades,sci,dis,time,money,bio,tech,lecture,extra,rfunds,alotwork,confi,probsk,team,resmentor,scholarship;
    string major;
    string var;
    int instlt[16];  // Instantiated list
    int statsk[16];  // Statement stack
    int clausk[16];  // clause stack
    int sn; // Statement Number
    int sp; // Stack pointer
    int f;
    int s;
    int i,j,k;
    int matrix[18][6]={{1,2,3,4,5,0},{1,2,3,4,5,0},{1,2,3,4,0,0},{1,2,3,6,0,0},{1,2,3,6,0,0},{1,2,0,0,0,0},                   {1,7,8,9,0,0},{1,7,8,9,0,0},{1,7,8,10,0,0},{1,7,8,10,0,0},{1,7,11,0,0,0},{1,7,11,12,0,0},                            {1,7,11,12,0,0},{1,16,13,14,0,0},{1,16,13,14,0,0},{1,16,13,15,0,0},{1,16,13,15,0,0},{1,16,0,0,0,0}};
    
};


#endif /* Profession_BW_h */
