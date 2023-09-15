#include <bits/stdc++.h>
using namespace std;

int xCoordinate,yCoordinate,zCoordinate;
char D ,D1;

void commandFront(){
   
    if(D1=='N') yCoordinate++;
    else if(D1=='S') yCoordinate--;
    else if(D1=='W') xCoordinate--;
    else if(D1=='E') xCoordinate++;
    else zCoordinate++;
        
       
    
}

void commandBack(){
     if(D1=='N') yCoordinate--;
    else if(D1=='S') yCoordinate++;
    else if(D1=='W') xCoordinate++;
    else if(D1=='E') xCoordinate--;
    else zCoordinate--;
}

void commandLeft(){
    if(D1=='N') D1='W';
    else if(D1=='S') D1 = 'E';
    else if(D1=='W') D1 ='S';
    else if(D1=='E') D1='N';
    else{
        if(D=='N') D1='W';
        else if(D=='S') D1 = 'E';
        else if(D=='W') D1 ='S';
        else if(D=='E') D1='N';
    }
}

void commandRight(){
    if(D1=='N') D1='E';
    else if(D1=='S') D1 = 'W';
    else if(D1=='W') D1 ='N';
    else if(D1=='E') D1='S';
    else{
        if(D=='N') D1='E';
        else if(D=='S') D1 = 'W';
        else if(D=='W') D1 ='N';
        else if(D=='E') D1='S';
    }
}

void commandUp(){
     if(D1!='U' && D1!='D'){
            D = D1;
        }
        D1 = 'U';
}

void commandDown(){
    if(D1!='U' && D1!='D'){
            D = D1;
        }
        D1 = 'D';
}

int main()
{
    
    cout<<"Enter the Initial Cordinates"<<endl;
    cin>>xCoordinate>>yCoordinate>>zCoordinate;
    cout<<"Enter the initial Direction in capitals like [N,S,E,W] : ";
    cin>>D1;
    
    D = 'N';
    if(D1!='U' && D1!='D') D = D1;
    
    vector<char>commands;
    cout<<"Enter the command like [f,b,l,r,u,d] , Enter x to stop : ";
    char a;
    while(a!='x'){
        cin>>a;
        commands.push_back(a);
    }

    
    for(int i=0;i<commands.size();i++){
        if(commands[i]=='f') commandFront();
        if(commands[i]=='b') commandBack();
        if(commands[i]=='l') commandLeft();
        if(commands[i]=='r') commandRight();
        if(commands[i]=='u') commandUp();
        if(commands[i]=='d') commandDown();
    }
        
        
    cout<<"New Cordinates are : ["<<xCoordinate<<" ,"<<yCoordinate<<" ,"<<zCoordinate<<"]"<<endl;

    cout<<"New Direction is : "<<D1<<endl;
       
    
    return 0;
}