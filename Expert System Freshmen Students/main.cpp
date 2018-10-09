//
//  main.cpp
//  Expert System Freshmen Students
//
//  Created by HARSH H PATNI on 9/30/18.
//  Copyright © 2018 HARSH H PATNI. All rights reserved.
//

#include <iostream>
#include <string.h>
#include "Profession_BW.h"
#include "Area_FW.h"
using namespace std;

int main()
{
    BackWard backchain;
    Area_FW forwardchain;
    string maj = backchain.mainBack();
    cout<<"-------------------------------------------"<<endl;
    cout<<"Your major should be: "<<maj<<endl;
    cout<<"-------------------------------------------"<<endl;
    string speci = forwardchain.mainForw(maj);
    
    return 0;
}


