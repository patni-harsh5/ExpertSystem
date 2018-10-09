//
//  Profession_BW.cpp
//  Expert System Freshmen Students
//
//  Created by HARSH H PATNI on 9/30/18.
//  Copyright © 2018 HARSH H PATNI. All rights reserved.
//

#include <stdio.h>
#include "Profession_BW.h"

#include <iostream>
#include<string>
using namespace std;
string varvalues[]={"grades","sci","dis","time","money","bio","tech","lecture","extra","rfunds","alotwork","confi","probsk","team","resmentor","scholarship"};
BackWard::BackWard()
{
    //ctor
}

BackWard::~BackWard()
{
    //dtor
}

void BackWard::initBack(){
    // Instantiate variable(var) if it isn't already.
    int i=0;
    // financed variable in the list
    while(var!=varListBack[i] && i<16) i++;
    if(var==varListBack[i] && instlt[i]!=1){
        instlt[i]=1;
        switch(i+1){
                // Input the questions for the knowledge base
            case 1: {
                int num;
                cout<<"How much is your high school grades:"<<endl<<"1. High"<<endl<<"2. Medium"<<endl<<"3. Low"<<endl;
                cin>> num;
                if(num==1) grades = "HIGH";
                if(num==2) grades = "MEDIUM";
                if(num==3) grades = "LOW";
                
                break;
            }
            case 2: cout<<"Are you interested in science? Y/N"<<endl;
                cin>>sci;
                break;
            case 3: cout<<"Are you interested in discovering new things? Y/N"<<endl;
                cin>>dis;
                break;
            case 4: cout<<"Do you have enough time for studies? Y/N"<<endl;
                cin>>time;
                break;
            case 5: cout<<"Do you budget problem? Y/N"<<endl;
                cin>>money;
                break;
            case 6: cout<<"Are you interested in biology? Y/N"<<endl;
                cin>>bio;
                break;
            case 7: cout<<"Do you like teaching to others? Y/N"<<endl;
                cin>>tech;
                break;
            case 8: cout<<"Can you give lecture in front of others? Y/N"<<endl;
                cin>>lecture;
                break;
            case 9: cout<<"Can you teach extra courses? Y/N"<<endl;
                cin>>extra;
                break;
            case 10: cout<<"Do you have funds for research? Y/N"<<endl;
                cin>>rfunds;
                break;
            case 11: cout<<"Can you do multi-tasking and lot of work? Y/N"<<endl;
                cin>>alotwork;
                break;
            case 12: cout<<"Are you confident? Y/N"<<endl;
                cin>>confi;
                break;
            case 13: cout<<"Do you have problem solving skills? Y/N"<<endl;
                cin>>probsk;
                break;
            case 14: cout<<"Can you work in group? Y/N?"<<endl;
                cin>>team;
                break;
            case 15: cout<<"Do you any mentor whom you follow? Y/N"<<endl;
                cin>>resmentor;
                break;
            case 16:cout<<"Did you get any scholarship's? Y/N"<<endl;
                cin>>scholarship;
                break;
                
        }
    }
}

void BackWard::detMemConcList(){
    // To determine if a variable(var) is a member of the conclusion list.
    sn = 0;
    i = f; // member of conclusion list to be searched is f
    while(var!=concList[i-1] && i<18) i++;
    if (var==concList[i-1]) sn = i;
    
}

void BackWard::pushStack(){
    // To push statement number (sn) and a clause number of 1 onto the conclusion stack
    // Conclusion stack consists of the statement stack(statsk) and clause stack(clausk)
    // To push decrement the stack pointer sp
    sp=sp-1;
    statsk[sp] = sn;
    clausk[sp] = 1;
}

string BackWard::mainBack(){
    sp=23;
    for(int i=0;i<16;i++){ //Initializing the arrays empty
        instlt[i]=0;
        statsk[i]=0;
        clausk[i]=0;
    }
    for(int i=0;i<18;i++) concList[i]="";
    for(int i=0;i<16;i++) varListBack[i]="";
    for(int i=0;i<108;i++) clsVarLst[i]="";
    //Initializing conclusion list
    for(int i=0;i<18;i++) concList[i]="MAJOR";
    cout<<"LIST OF MAJORS\n"<<" 1. SCIENCE-RESEARCH \n 2. ENGINEERING \n 3. BUSINESS \n 4. MEDICAL \n 5. DENTIST \n 6. LAW \n 7. PSYCOLOGY \n 8. HISTORY \n 9. NURSING \n 10.EDUCATION"<<endl;
    //Initializing Variable list
    for(int i=0;i<16;i++) varListBack[i]=varvalues[i];
    cout<<"--------------------- VARIABLE LIST --------------------- \n";
    for(int i=0;i<16;i++) cout<<"Var "<<i+1<<": "<<varListBack[i]<<endl;
    // Enter variables as they appear in the IF-ELSE statements
    int clsVrIndex=0;
    cout<<"--------------------- CLAUSE-VARIABLE LIST ---------------------\n";
    for(int i=0;i<18;i++){
        cout<<"CLAUSE : "<<i+1<<endl;
        for(int j=0;j<6;j++){
            int index=matrix[i][j];
            if(index == 0) clsVarLst[clsVrIndex]="";
            else clsVarLst[clsVrIndex]=varvalues[index-1];
            cout<<"Var "<<clsVrIndex+1<<" : "<<clsVarLst[clsVrIndex]<<endl;
            clsVrIndex++;
        }
        cout<<endl;
    }
    char choice;
    cout<<"-------------------------------------------\n";
    cout<<"\n DO YOU NEED EXPERT ADVICE FOR SELECTING YOUR MAJOR ? (Y/N):  ";
    cin>>choice;
    
    if(choice == 'n' || choice == 'N'){
        cout<<"NO MAJOR!!"<<endl;
        return(0);
    }
    else cout<<"ANSWER THE QUESTIONS PROPERLY TO HELP US SO THAT WE CAN HELP YOU!!"<<endl;
    var = "MAJOR";
    f=1;
    detMemConcList();
    if(sn!=0){
        do{
            pushStack();
            while(!var.empty()){
                i = (statsk[sp] -1) *6 + clausk[sp];
                var = clsVarLst[i-1]; // Clause-Variable
                if(!var.empty()){
                    f=1;
                    detMemConcList();
                    initBack();
                    clausk[sp] = clausk[sp] + 1;
                }
            }
            
            sn = statsk[sp];
            s = 0;
            // Knowledge-base
            switch(sn){
                case 1: if(grades=="HIGH" && sci=="Y" && dis=="Y" && time=="Y" && money=="Y") s=1;
                    break;
                case 2: if(grades=="HIGH" && sci=="Y" && dis=="Y" && time=="Y" && money=="N") s=1;
                    break;
                case 3: if(grades=="HIGH" && sci=="Y" && dis=="Y" && time=="N") s=1;
                    break;
                case 4: if(grades=="HIGH" && sci=="Y" && dis=="N" && bio=="Y") s=1;
                    break;
                case 5: if(grades=="HIGH" && sci=="Y" && dis=="N" && bio=="N") s=1;
                    break;
                case 6: if(grades=="HIGH" && sci=="N") s=1;
                    break;
                case 7: if(grades=="MEDIUM" && tech=="Y" && lecture=="Y" && extra=="Y" ) s=1;
                    break;
                case 8: if(grades=="MEDIUM" && tech=="Y" && lecture=="Y" && extra=="N") s=1;
                    break;
                case 9: if(grades=="MEDIUM" && tech=="Y" && lecture=="N" && rfunds=="Y") s=1;
                    break;
                case 10: if(grades=="MEDIUM" && tech=="Y" && lecture=="N" && rfunds=="N") s=1;
                    break;
                case 11: if(grades=="MEDIUM" && tech=="N" && alotwork=="Y") s=1;
                    break;
                case 12: if(grades=="MEDIUM" && tech=="N" && alotwork=="N" && confi=="Y") s=1;
                    break;
                case 13: if(grades=="MEDIUM" && tech=="N" && alotwork=="N" && confi=="N") s=1;
                    break;
                case 14: if(grades=="LOW" && scholarship=="Y" && probsk=="Y" && team=="Y") s=1;
                    break;
                case 15: if(grades=="LOW" && scholarship=="Y" && probsk=="Y" && team=="N") s=1;
                    break;
                case 16: if(grades=="LOW" && scholarship=="Y" && probsk=="N" && resmentor=="Y") s=1;
                    break;
                case 17: if(grades=="LOW" && scholarship=="Y" && probsk=="N" && resmentor=="N") s=1;
                    break;
                case 18: if(grades=="LOW" && scholarship=="N") s=1;
                    break;
                    
            }
            if(s!=1){
                // Failed to financed the solution.. search rest of the statements for same conclusion
                i = statsk[sp];
                var = concList[i-1];
                f = statsk[sp] + 1;
                detMemConcList();
                sp = sp+1;
            }
            // popping old conclusion and putting a new one
        }while((s != 1) && (sn !=0));
        if(sn!=0){ // Ignoring this case for now
            // This means the "if" part returned true and now we have to invoke "then" part
            switch(sn){
                case 1: major = "SCIENCE AND RESEARCH";
                    break;
                case 2: major = "DENTIST";
                    break;
                case 3: major = "ENGINEERING";
                    break;
                case 4: major = "MEDICAL";
                    break;
                case 5: major = "NURSING";
                    break;
                case 6: major = "BUSINESS";
                    break;
                case 7: major = "EDUCATION";
                    break;
                case 8: major = "ENGINEERING";
                    break;
                case 9: major = "SCIENCE AND RESEARCH";
                    break;
                case 10: major = "PSYCOLOGY";
                    break;
                case 11: major = "BANKING";
                    break;
                case 12: major = "LAW";
                    break;
                case 13: major = "HISTORY";
                    break;
                case 14: major = "ENGINEERING";
                    break;
                case 15: major = "EDUCATION";
                    break;
                case 16: major = "SCIENCE AND RESEARCH";
                    break;
                case 17: major = "EDUCATION";
                    break;
                case 18: major = "HISTORY";
                    break;
                    
            }
        }
    }
    return major;
}
