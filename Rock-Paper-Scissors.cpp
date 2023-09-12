#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main() {
    
	system("CLS");
    srand(time(nullptr));
    cout<<"                       Rock-Paper-Scissors" <<endl;
    string name;         
    string pcname="windows";                                                  
    int next,pcsec,ary[1],score,pcscore;   
    score=0;
    pcscore=0;
    cout<<"name:";                                                 
    cin>>name;                                                                 
    cout<<"                    The game is starting "<<name<<endl;
    cout<<"             FOR ROCK: 1, FOR PAPER: 2, FOR SCISSORS: 3"<<endl;
    int Mesec;
    while (1)
    {
    cout<<"Rock? Paper? Scissors?"<<endl;
    cin>>Mesec;
   for(int i=0; i<1; i++){
    ary[i]=rand()%3+1;
    pcsec=ary[i];
   }
   if(Mesec==1&&pcsec==1){
       cout<<"Rock"<<"                            Rock"<<endl;
       cout<<"          DRAW"<<endl;
       score++;   pcscore++;                               
    }if(Mesec==1&&pcsec==2){
       cout<<"Rock"<<"                            Paper"<<endl;
       cout<<"          "<<pcname<<" Win"<<endl;
       score--;pcscore=pcscore+2;
    }if(Mesec==1&&pcsec==3){
       cout<<"Rock"<<"                            Scissors"<<endl;        
       cout<<"          "<<name<<" Win"<<endl;  
       score=score+2;            pcscore--;                   
    }if(Mesec==2&&pcsec==2){                             
       cout<<"Paper"<<"                          Paper"<<endl;
       cout<<"          DRAW"<<endl;
       score++;pcscore++;
    }if(Mesec==2&&pcsec==3){
       cout<<"Paper"<<"                          Scissors"<<endl;
       cout<<"          "<<pcname<<" Win"<<endl;
       score--;pcscore=pcscore+2;
    }if(Mesec==3&&pcsec==3){
       cout<<"Scissors"<<"                          Scissors"<<endl;
       cout<<"          DRAW"<<endl;
       score++;pcscore++;
    }if(Mesec==3&&pcsec==1){
       cout<<"Paper"<<"                          Rock"<<endl;
       cout<<"          "<<pcname<<" Win"<<endl;
       score--;pcscore=pcscore+2;
    }if(Mesec==3&&pcsec==2){
       cout<<"Scissors"<<"                          Paper"<<endl;
       cout<<"          "<<name<<" Win"<<endl;
       score=score+2;pcscore--;
    }if(Mesec==2&&pcsec==1){
       cout<<"Paper"<<"                          Rock"<<endl;
       cout<<"          "<<name<<" Win"<<endl;
       score=score+2;pcscore--;
    }
cout<<"You scor: "<<score<<"                    "<<"Pc Score:"<<pcscore<<endl;
cin>>next;
if(Mesec==4 || Mesec==4){
    break;
}

}
}
