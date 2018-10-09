//
//  Area_FW.h
//  Expert System Freshmen Students
//
//  Created by HARSH H PATNI on 9/30/18.
//  Copyright © 2018 HARSH H PATNI. All rights reserved.
//

#ifndef Area_FW_h
#define Area_FW_h

#include<iostream>
using namespace std;

class Area_FW
{
public:
    Area_FW();
    virtual ~Area_FW();
    void searchFn();
    void checkInit();
    void initForw();
    string mainForw(string);
protected:
private:
    string varList[38];
    string clsVarList[282];
    string major,eqn,compeqn,natlaws,compele,machines,circuits,carintsr,code,moneymang,handle,acc,likemang,blood,bones,heart,tumors,surgery,cond,diagonsis,socialrules,criminal,politicalknow,legal,humanbehav,counselling,socrs,usa,asi,euro,afr,healthmang,awareness,deskjob,teachchild,manycourses,univ,evsstudies;
    string spec; // Specialization
    string v; // Variable
    int matrix[47][6]={{1,2,3,4,0,0},{1,2,3,4,0,0},{1,2,3,5,0,0},{1,2,3,5,0,0},{1,2,0,0,0,0},{1,6,7,0,0,0},{1,6,7,8,0,0},{1,6,7,8,0,0},{1,6,9,0,0,0},{1,6,9,0,0,0},{1,10,0,0,0,0},{1,10,11,12,0,0},{1,10,11,12,13,0},{1,10,11,12,13,0},{1,10,11,0,0,0},{1,14,15,0,0,0},{1,14,15,16,0,0},{1,14,15,16,17,0},{1,14,15,16,17,0},{1,14,0,0,0,0},{1,18,19,0,0,0},{1,18,19,20,0,0},{1,18,19,20,0,0},{1,18,0,0,0,0},{1,21,22,0,0,0},{1,21,22,23,0,0},{1,21,22,23,24,0},{1,21,22,23,24,0},{1,21,0,0,0,0},{1,25,26,0,0,0},{1,25,26,27,0,0},{1,25,26,27,0,0},{1,25,0,0,0,0},{1,28,0,0,0,0},{1,28,29,0,0,0},{1,28,29,30,0,0},{1,28,29,30,31,0},{1,28,29,30,31,0},{1,32,33,0,0,0},{1,32,33,0,0,0},{1,32,34,0,0,0},{1,32,34,0,0,0},{1,35,0,0,0,0},{1,35,36,37,0,0},{1,35,36,37,38,0},{1,35,36,37,38,0},{1,35,36,0,0,0}};
    
    string cndVar[38]; // Conclusion queue
    int instList[38];         /* instantiated list*/
    int flag;
    int clsIndex=0;
    int fa;
    int sa;
    int k;
    int i,j;
    int snb,cn; // statement number, clause number
    int fp, bp; // front pointer, back pointer
};



#endif /* Area_FW_h */
