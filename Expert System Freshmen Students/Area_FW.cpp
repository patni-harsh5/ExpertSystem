//
//  Area_FW.cpp
//  Expert System Freshmen Students
//
//  Created by HARSH H PATNI on 9/30/18.
//  Copyright © 2018 HARSH H PATNI. All rights reserved.
//

#include <stdio.h>
#include "Area_FW.h"
#include<iostream>
using namespace std;
string varValues[]={"major","eqn","compeqn","natlaws","compele","machines","circuits","carintsr","code","moneymang","handle","acc","likemang","blood","bones","heart","tumors","surgery","cond","diagonsis","socialrules","criminal","politicalknow","legal","humanbehav","counselling","socrs","usa","asi","euro","afr","healthmang","awareness","deskjob","teachchild","manycourses","univ","evsstudies"};
string inpMajor;
Area_FW::Area_FW()
{
    //ctor
}

Area_FW::~Area_FW()
{
    //dtor
}

/* Search clause variable list for a varialbe(clsVarList) equal to the one in front of the conclusion queue(cndvar).  */
void Area_FW::searchFn(){
    flag = 0;
    snb = fa;
    while ((flag == 0) && (snb < 48)){
        cn=1;
        k = (snb-1)*6+cn;
        while ((clsVarList[k-1]!=cndVar[fp]) && (cn <= 6)){
            cn = cn+1;
            k = (snb-1)*6+cn;
        }
        if (clsVarList[k-1]==cndVar[fp]) flag = 1;
        if (flag == 0) snb = snb+1;
    }
    if (flag == 0) snb=0;
}
// Routine to instantiate a variable (v) if it isnb't already.
// The vriable list(varList) contains the variable(v)
void Area_FW::checkInit(){
    i=0;
    /* find variable in the variable list */
    while ((v != varList[i]) && (i < 38)) i++;
    /* check if already instantiated */
    if (instList[i] != 1){
        instList[i] = 1;
        switch (i+1){
                
            case 1: major=inpMajor;
                cout<<"------------------------------------------------------------------------------------"<<endl;
                cout<<"GIVE THE FOLLOWING ANSWERS CORRECTLY TO DETERMINE THE SPECIALIZATION : "<<major<<endl;
                cout<<"------------------------------------------------------------------------------------"<<endl;
                break;
            case 2:
                cout<<"Can you solve mathematical equations? Y/N : "<<endl;
                cin>>eqn;
                break;
            case 3:
                cout<<"Can you solve complex theorems and equations? Y/N : "<<endl;
                cin>>compeqn;
                break;
            case 4:
                cout<<"Do you understand the nature's laws of physics? Y/N : "<<endl;
                cin>>natlaws;
                break;
            case 5:
                cout<<"Do you understand chemical compounds and elements? Y/N : "<<endl;
                cin>>compele;
                break;
            case 6:
                cout<<"Do you like playing with machines? Y/N : "<<endl;
                cin>>machines;
                break;
            case 7:
                cout<<"Do you understand electronic circuit daigrams and connections? Y/N : "<<endl;
                cin>>circuits;
                break;
            case 8:
                cout<<"Do you like cars and ohter mechanical instruments? Y/N : "<<endl;
                cin>>carintsr;
                break;
            case 9:
                cout<<"Do you like to do computer programming? Y/N : "<<endl;
                cin>>code;
                break;
            case 10:
                cout<<"Can manage funds properly? Y/N : "<<endl;
                cin>>moneymang;
                break;
            case 11:
                cout<<"Do you handling money and statistics? Y/N : "<<endl;
                cin>>handle;
                break;
            case 12:
                cout<<"Are you interested in accounting? Y/N : "<<endl;
                cin>>acc;
                break;
            case 13:
                cout<<"Do you like managing stuff for others? Y/N : "<<endl;
                cin>>likemang;
                break;
            case 14:
                cout<<"Do you have blood phobia? Y/N : "<<endl;
                cin>>blood;
                break;
            case 15:
                cout<<"Do you knowledge about human bones and muscles? Y/N : "<<endl;
                cin>>bones;
                break;
            case 16:
                cout<<"Do you have knowledge about human cardio-vascular system? Y/N : "<<endl;
                cin>>heart;
                break;
            case 17:
                cout<<"Are you insterested in tumors and cancer treatment? Y/N :"<<endl;
                cin>>tumors;
                break;
            case 18:
                cout<<"Are you interested in human oral care? Y/N :"<<endl;
                cin>>surgery;
                break;
            case 19:
                cout<<"Are you aware of conditional oral situation? Y/N :"<<endl;
                cin>>cond;
                break;
            case 20:
                cout<<"Are you aware of diagonstic oral situation? Y/N :"<<endl;
                cin>>diagonsis;
                break;
            case 21:
                cout<<"Are you aware of Social Rules in the society? Y/N :"<<endl;
                cin>>socialrules;
                break;
            case 22:
                cout<<"Are you interested in crime investigation? Y/N :"<<endl;
                cin>>criminal;
                break;
            case 23:
                cout<<"Do you have political knowledge? Y/N :"<<endl;
                cin>>politicalknow;
                break;
            case 24:
                cout<<"Are you aware of legality in the society? Y/N :"<<endl;
                cin>>legal;
                break;
            case 25:
                cout<<"Do you understand human behaviour? Y/N :"<<endl;
                cin>>humanbehav;
                break;
            case 26:
                cout<<"Can you give counseling to other people? Y/N :"<<endl;
                cin>>counselling;
                break;
            case 27:
                cout<<"Do you understand Social Rules of the society? Y/N :"<<endl;
                cin>>socrs;
                break;
            case 28:
                cout<<"Would you like to study American History? Y/N :"<<endl;
                cin>>usa;
                break;
            case 29:
                cout<<"Would you like to study Asian History? Y/N :"<<endl;
                cin>>asi;
                break;
            case 30:
                cout<<"Would you like to study European History? Y/N :"<<endl;
                cin>>euro;
                break;
            case 31:
                cout<<"Would you like to study African History? Y/N :"<<endl;
                cin>>afr;
                break;
            case 32:
                cout<<"Are you interested in health management?? Y/N :"<<endl;
                cin>>healthmang;
                break;
            case 33:
                cout<<"Are you interested in health awareness? Y/N :"<<endl;
                cin>>awareness;
                break;
            case 34:
                cout<<"Would you like to do health adiminstration job? Y/N :"<<endl;
                cin>>deskjob;
                break;
            case 35:
                cout<<"Can you teach students? Y/N :"<<endl;
                cin>>teachchild;
                break;
            case 36:
                cout<<"Can you teach more than one courses? Y/N :"<<endl;
                cin>>manycourses;
                break;
            case 37:
                cout<<"Would you like to be a professor ? Y/N :"<<endl;
                cin>>univ;
                break;
            case 38:
                cout<<"Can you give environmental knowledge to other students? Y/N :"<<endl;
                cin>>evsstudies;
                break;
        }
    }
    /* end of input statements for the position knowledge base */
}
/* Routine to instantiate a varialbe (v) and then place it on the back of the queu (cndvar[bp]), if it is not already there. */
void Area_FW::initForw(){
    i=0;
    /* find varialbe in the varialbe list (varlt) */
    while ((v!=varList[i]) && (i < 38)) i=i+1;
    /* instantiate it */
    instList[i] = 1;
    i = 0;
    /* determine if (v) is or already has been on the queue (cndvar) */
    while ((v!=cndVar[i]) && (i < 38)) i=i+1;
    /* variable has not been on the queue. Store it in the back of the queue */
    if (v!=cndVar[i]){
        cndVar[bp] = v;
        bp=bp+1;
    }
}
string Area_FW::mainForw(string strInput){
    inpMajor = strInput;
    fp=0;
    bp=0;
    // Setting default values for the arrays
    for(int i=0;i<282;i++) clsVarList[i]="";
    for(int i=0;i<38;i++) varList[i]="";
    for(int i=0;i<38;i++) instList[i]=0;
    for(int i=0;i<38;i++) cndVar[i]="";
    // Initializing variable list
    for(int i=0;i<38;i++) varList[i]=varValues[i];
    //Display the variable list
    cout<<"Variable List:"<<endl;
    for(int i=0;i<38;i++) cout<<"Var "<<i+1<<": "<<varList[i]<<endl;
    // Initializing Clause Variable List
    cout<<"Clause-Variable List:"<<endl;
    for(int i=0;i<47;i++){
        cout<<"Clause "<<i+1<<" : "<<endl;
        for(int j=0;j<6;j++){
            int index=matrix[i][j];
            if(index==0)
                clsVarList[clsIndex]="";
            else
                clsVarList[clsIndex]=varValues[index-1];
            cout<<"Var : "<<clsIndex+1<<" : "<<clsVarList[clsIndex]<<endl;
            clsIndex++;
        }
        cout<<endl;
    }
    /* place condition variable c on condition var queue cndVar */
    /* move backpointer (bp) to back */
    cndVar[bp]="major";
    bp++;
    /* set the condition variable pointer consisting of the statement number (snb) and the clause number (cn) */
    snb = 1;
    cn = 1;
    /* find the next statement number containing the condition variable which is in front of the queue (cndVar), this statement number is located in the clause variable list (clvarlt) */
    /* start at the beginning */
    fa=1;
    for(fp=0;fp<bp;fp++){
        do{
            searchFn();
            cn=1;
            if (snb != 0){
                i = 6 * (snb-1) + cn; // locate the clause
                v = clsVarList[i-1]; // clause variable
                /* are there any more clauses for this statement */
                while(!v.empty()){
                    // There are more clauses so check instantiation of this clause
                    checkInit();
                    cn = cn+1;
                    i = 6 * (snb-1) + cn; // check next clause
                    v = clsVarList[i-1];
                }
                // no more clauses - check IF part of statement
                sa = 0;
                switch(snb){
                    case 1: if(major=="SCI RESEARCH" && eqn=="Y" && compeqn=="Y" && natlaws=="Y") sa=1;
                        break;
                    case 2: if(major=="SCI RESEARCH" && eqn=="Y" && compeqn=="Y" && natlaws=="N") sa=1;
                        break;
                    case 3: if(major=="SCI RESEARCH" && eqn=="Y" && compeqn=="Y" && compele=="Y") sa=1;
                        break;
                    case 4: if(major=="SCI RESEARCH" && eqn=="Y" && compeqn=="Y" && compele=="N") sa=1;
                        break;
                    case 5: if(major=="SCI RESEARCH" && eqn=="N") sa=1;
                        break;
                    case 6: if(major=="ENGINEERING" && machines=="Y" && circuits=="Y") sa=1;
                        break;
                    case 7: if(major=="ENGINEERING" && machines=="Y" && circuits=="N" && carintsr=="Y") sa=1;
                        break;
                    case 8: if(major=="ENGINEERING" && machines=="Y" && circuits=="N" && carintsr=="N") sa=1;
                        break;
                    case 9: if(major=="ENGINEERING" && machines=="N" && code=="Y") sa=1;
                        break;
                    case 10: if(major=="ENGINEERING" && machines=="N" && code=="N") sa=1;
                        break;
                    case 11: if(major=="BUSINESS" && moneymang=="Y") sa=1;
                        break;
                    case 12: if(major=="BUSINESS" && moneymang=="N" && handle=="Y" && acc=="Y") sa=1;
                        break;
                    case 13: if(major=="BUSINESS" && moneymang=="N" && handle=="Y" && acc=="N" && likemang=="Y") sa=1;
                        break;
                    case 14: if(major=="BUSINESS" && moneymang=="N" && handle=="Y" && acc=="N" && likemang=="N") sa=1;
                        break;
                    case 15: if(major=="BUSINESS" && moneymang=="N" && handle=="N") sa=1;
                        break;
                    case 16: if(major=="MEDICINE" && blood=="Y" && bones=="Y") sa=1;
                        break;
                    case 17: if(major=="MEDICINE" && blood=="Y" && bones=="N" && heart=="Y") sa=1;
                        break;
                    case 18: if(major=="MEDICINE" && blood=="Y" && bones=="N" && heart=="N" && tumors=="Y") sa=1;
                        break;
                    case 19: if(major=="MEDICINE" && blood=="Y" && bones=="N" && heart=="N" && tumors=="N") sa=1;
                        break;
                    case 20: if(major=="MEDICINE" && blood=="N") sa=1;
                        break;
                    case 21: if(major=="DENTIST" && surgery=="Y" && cond=="Y") sa=1;
                        break;
                    case 22: if(major=="DENTIST" && surgery=="Y" && cond=="N" && diagonsis=="Y") sa=1;
                        break;
                    case 23: if(major=="DENTIST" && surgery=="Y" && cond=="N" && diagonsis=="N") sa=1;
                        break;
                    case 24: if(major=="DENTIST" && surgery=="N") sa=1;
                        break;
                    case 25: if(major=="LAW" && socialrules=="Y" && criminal=="Y") sa=1;
                        break;
                    case 26: if(major=="LAW" && socialrules=="Y" && criminal=="N" && politicalknow=="Y") sa=1;
                        break;
                    case 27: if(major=="LAW" && socialrules=="Y" && criminal=="N" && politicalknow=="N" && legal=="Y") sa=1;
                        break;
                    case 28: if(major=="LAW" && socialrules=="Y" && criminal=="N" && politicalknow=="N" && legal=="N") sa=1;
                        break;
                    case 29: if(major=="LAW" && socialrules=="N") sa=1;
                        break;
                    case 30: if(major=="PSYCOLOGY" && humanbehav=="Y" && counselling=="Y") sa=1;
                        break;
                    case 31: if(major=="PSYCOLOGY" && humanbehav=="Y" && counselling=="N" && socrs=="Y") sa=1;
                        break;
                    case 32: if(major=="PSYCOLOGY" && humanbehav=="Y" && counselling=="N" && socrs=="N") sa=1;
                        break;
                    case 33: if(major=="PSYCOLOGY" && humanbehav=="N") sa=1;
                        break;
                    case 34: if(major=="HISTORY" && usa=="Y") sa=1;
                        break;
                    case 35: if(major=="HISTORY" && usa=="N" && asi=="Y") sa=1;
                        break;
                    case 36: if(major=="HISTORY" && usa=="N" && asi=="N" && euro=="Y") sa=1;
                        break;
                    case 37: if(major=="HISTORY" && usa=="N" && asi=="N" && euro=="N" && afr=="Y") sa=1;
                        break;
                    case 38: if(major=="HISTORY" && usa=="N" && asi=="N" && euro=="N" && afr=="N") sa=1;
                        break;
                    case 39: if(major=="NURSING" && healthmang=="Y" && awareness=="Y") sa=1;
                        break;
                    case 40: if(major=="NURSING" && healthmang=="Y" && awareness=="N") sa=1;
                        break;
                    case 41: if(major=="NURSING" && healthmang=="N" && deskjob=="Y") sa=1;
                        break;
                    case 42: if(major=="NURSING" && healthmang=="N" && deskjob=="N") sa=1;
                        break;
                    case 43: if(major=="EDUCATION" && teachchild=="Y") sa=1;
                        break;
                    case 44: if(major=="EDUCATION" && teachchild=="N" && manycourses=="Y" && univ=="Y") sa=1;
                        break;
                    case 45: if(major=="EDUCATION" && teachchild=="N" && manycourses=="Y" && univ=="N" && evsstudies=="Y") sa=1;
                        break;
                    case 46: if(major=="EDUCATION" && teachchild=="N" && manycourses=="Y" && univ=="N" && evsstudies=="N") sa=1;
                        break;
                    case 47: if(major=="EDUCATION" && teachchild=="N" && manycourses=="N") sa=1;
                        break;
                }
                if(sa!=1){
                    fa = snb + 1;
                }
            }
        }while(sa!=1 && snb!=0);
        // Invoke "then" part
        switch(snb){
            case 1:
                spec = "PHYSICS";
                cout<<"-------------------------------------------"<<endl;
                cout<<"Specialization : "<<spec<<endl;
                break;
            case 2:
                spec = "APPLIED MATHEMATICS";
                cout<<"-------------------------------------------"<<endl;
                cout<<"Specialization : "<<spec<<endl;
                break;
            case 3:
                spec = "CHEMISTRY";
                cout<<"-------------------------------------------"<<endl;
                cout<<"Specialization : "<<spec<<endl;
                break;
            case 4:
                spec = "BIOLOGY";
                cout<<"-------------------------------------------"<<endl;
                cout<<"Specialization : "<<spec<<endl;
                break;
            case 5:
                spec = "SPACE EXPLORATION";
                cout<<"-------------------------------------------"<<endl;
                cout<<"Specialization : "<<spec<<endl;
                break;
            case 6:
                spec = "ELECTRICAL ENGINEER";
                cout<<"-------------------------------------------"<<endl;
                cout<<"Specialization : "<<spec<<endl;
                break;
            case 7:
                spec = "MECHANICAL ENGINEERING";
                cout<<"Specialization : "<<spec<<endl;
                break;
            case 8:
                spec = "CIVIL ENGINEERING";
                cout<<"-------------------------------------------"<<endl;
                cout<<"Specialization : "<<spec<<endl;
                break;
            case 9:
                spec = "COMPUTER SCIENCE ENGINEERING";
                cout<<"-------------------------------------------"<<endl;
                cout<<"Specialization : "<<spec<<endl;
                break;
            case 10:
                spec = "PETROLEUM ENGINEERING";
                cout<<"-------------------------------------------"<<endl;
                cout<<"Specialization : "<<spec<<endl;
                break;
            case 11:
                spec = "INVESTING";
                cout<<"-------------------------------------------"<<endl;
                cout<<"Specialization : "<<spec<<endl;
                break;
            case 12:
                spec = "BANKING";
                cout<<"-------------------------------------------"<<endl;
                cout<<"Specialization : "<<spec<<endl;
                break;
            case 13:
                spec = "MBA";
                cout<<"-------------------------------------------"<<endl;
                cout<<"Specialization : "<<spec<<endl;
                break;
            case 14:
                spec = "SECEROTORIAL PRACTICE";
                cout<<"-------------------------------------------"<<endl;
                cout<<"Specialization : "<<spec<<endl;
                break;
            case 15:
                spec = "ACCOUNTS";
                cout<<"-------------------------------------------"<<endl;
                cout<<"Specialization : "<<spec<<endl;
                break;
            case 16:
                spec = "ORTHOPEDISIST";
                cout<<"-------------------------------------------"<<endl;
                cout<<"Specialization : "<<spec<<endl;
                break;
            case 17:
                spec = "CARDIOLOGIST";
                cout<<"-------------------------------------------"<<endl;
                cout<<"Specialization : "<<spec<<endl;
                break;
            case 18:
                spec = "ONCOLOGIST";
                cout<<"-------------------------------------------"<<endl;
                cout<<"Specialization : "<<spec<<endl;
                break;
            case 19:
                spec = "GENERAL DOCTOR";
                cout<<"-------------------------------------------"<<endl;
                cout<<"Specialization : "<<spec<<endl;
                break;
            case 20:
                spec = "ENT SPECIALIST";
                cout<<"-------------------------------------------"<<endl;
                cout<<"Specialization : "<<spec<<endl;
                break;
            case 21:
                spec = "ENDOORTHIC DENTIST";
                cout<<"-------------------------------------------"<<endl;
                cout<<"Specialization : "<<spec<<endl;
                break;
            case 22:
                spec = "ORTHOPEDIC DENTIST";
                cout<<"-------------------------------------------"<<endl;
                cout<<"Specialization : "<<spec<<endl;
                break;
            case 23:
                spec = "PERIODOC DENTIST";
                cout<<"-------------------------------------------"<<endl;
                cout<<"Specialization : "<<spec<<endl;
                break;
            case 24:
                spec = "GENERAL DENTIST";
                cout<<"-------------------------------------------"<<endl;
                cout<<"Specialization : "<<spec<<endl;
                break;
            case 25:
                spec = "CRIMINAL LAWYER";
                cout<<"-------------------------------------------"<<endl;
                cout<<"Specialization : "<<spec<<endl;
                break;
            case 26:
                spec = "POLITICAL LAWYER";
                cout<<"-------------------------------------------"<<endl;
                cout<<"Specialization : "<<spec<<endl;
                break;
            case 27:
                spec = "LEGAL LAWYER";
                cout<<"-------------------------------------------"<<endl;
                cout<<"Specialization : "<<spec<<endl;
                break;
            case 28:
                spec = "FORENSIC LAWYER";
                cout<<"-------------------------------------------"<<endl;
                cout<<"Specialization : "<<spec<<endl;
                break;
            case 29:
                spec = "TAX LAWYER";
                cout<<"-------------------------------------------"<<endl;
                cout<<"Specialization : "<<spec<<endl;
                break;
            case 30:
                spec = "COUNSELLAR";
                cout<<"-------------------------------------------"<<endl;
                cout<<"Specialization : "<<spec<<endl;
                break;
            case 31:
                spec = "SOCIAL COUNSELLAR";
                cout<<"-------------------------------------------"<<endl;
                cout<<"Specialization : "<<spec<<endl;
                break;
            case 32:
                spec = "SPORTS COUNSELLAR";
                cout<<"-------------------------------------------"<<endl;
                cout<<"Specialization : "<<spec<<endl;
                break;
            case 33:
                spec = "SCHOOL COUNSELLAR";
                cout<<"-------------------------------------------"<<endl;
                cout<<"Specialization : "<<spec<<endl;
                break;
            case 34:
                spec = "AMERICAN HISTORY";
                cout<<"-------------------------------------------"<<endl;
                cout<<"Specialization : "<<spec<<endl;
                break;
            case 35:
                spec = "ASIAN HISTORY";
                cout<<"-------------------------------------------"<<endl;
                cout<<"Specialization : "<<spec<<endl;
                break;
            case 36:
                spec = "EUROPIAN HISTORY";
                cout<<"-------------------------------------------"<<endl;
                cout<<"Specialization : "<<spec<<endl;
                break;
            case 37:
                spec = "AFRICAN HISTORY";
                cout<<"-------------------------------------------"<<endl;
                cout<<"Specialization : "<<spec<<endl;
                break;
            case 38:
                spec = "RUSSIAN HISTORY";
                cout<<"-------------------------------------------"<<endl;
                cout<<"Specialization : "<<spec<<endl;
                break;
            case 39:
                spec = "PUBLIC HEALTH";
                cout<<"-------------------------------------------"<<endl;
                cout<<"Specialization : "<<spec<<endl;
                break;
            case 40:
                spec = "PHYSICIAN ASSISTANT";
                cout<<"-------------------------------------------"<<endl;
                cout<<"Specialization : "<<spec<<endl;
                break;
            case 41:
                spec = "HEALTH ADMINISTRATION";
                cout<<"-------------------------------------------"<<endl;
                cout<<"Specialization : "<<spec<<endl;
                break;
            case 42:
                spec = "HEALTH SERVICE MAANGEMENT";
                cout<<"-------------------------------------------"<<endl;
                cout<<"Specialization : "<<spec<<endl;
                break;
            case 43:
                spec = "SCHOOL TEACHER";
                cout<<"-------------------------------------------"<<endl;
                cout<<"Specialization : "<<spec<<endl;
                break;
            case 44:
                spec = "PROFESSOR";
                cout<<"-------------------------------------------"<<endl;
                cout<<"Specialization : "<<spec<<endl;
                break;
            case 45:
                spec = "ENVIRONMENTALIST";
                cout<<"-------------------------------------------"<<endl;
                cout<<"Specialization : "<<spec<<endl;
                break;
            case 46:
                spec = "PRIVATE TUTOR";
                cout<<"-------------------------------------------"<<endl;
                cout<<"Specialization : "<<spec<<endl;
                break;
            case 47:
                spec = "DISCIPLINE EDUCATION";
                cout<<"-------------------------------------------"<<endl;
                cout<<"Specialization : "<<spec<<endl;
                break;
                
            default:
                cout<<"-------------------------------------------"<<endl;
                cout<<"Wrong prediction"<<endl;
        }
        /* no more clauses in the clause variable list (clvarlt) containing the variable in front of the queue (cndvar(fp)) then remove front
         variable (cndvar(fp)) and replace it by the next variable (cndvar(fp+1)). If no more variables are at the front of the queue, stop. */
        /* next queue variable */
        fa=1;
    }
    return spec;
}


