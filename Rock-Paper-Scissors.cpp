#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main() {
    
	system("CLS");
    srand(time(nullptr));
    cout<<"                       TAS KAGIT MAKAS" <<endl;
    string name;         
    string pcname="windows";                                                  
    int next,pcsec,ary[1],score,pcscore;   
    score=0;
    pcscore=0;
    cout<<"name:";                                                 
    cin>>name;                                                                 
    cout<<"                    OYUN BASLIYOR "<<name<<endl;
    cout<<"             TAS ICIN:1 KAGIT ICIN:2 MAKAS ICIN:3"<<endl;
    int Mesec;
    while (1)
    {
    cout<<"Tasmi? Kagitmi? Makasmi?"<<endl;
    cin>>Mesec;
   for(int i=0; i<1; i++){
    ary[i]=rand()%3+1;
    pcsec=ary[i];
   }
   if(Mesec==1&&pcsec==1){
       cout<<"Tas"<<"                            Tas"<<endl;
       cout<<"          BERABERE"<<endl;
       score++;   pcscore++;                               
    }if(Mesec==1&&pcsec==2){
       cout<<"Tas"<<"                            Kagit"<<endl;
       cout<<"          "<<pcname<<" Kazandi"<<endl;
       score--;pcscore=pcscore+2;
    }if(Mesec==1&&pcsec==3){
       cout<<"Tas"<<"                            Makas"<<endl;        
       cout<<"          "<<name<<" Kazandi"<<endl;  
       score=score+2;            pcscore--;                   
    }if(Mesec==2&&pcsec==2){                             
       cout<<"Kagit"<<"                          Kagit"<<endl;
       cout<<"          BERABERE"<<endl;
       score++;pcscore++;
    }if(Mesec==2&&pcsec==3){
       cout<<"Kagit"<<"                          Makas"<<endl;
       cout<<"          "<<pcname<<" Kazandi"<<endl;
       score--;pcscore=pcscore+2;
    }if(Mesec==3&&pcsec==3){
       cout<<"Makas"<<"                          Makas"<<endl;
       cout<<"          BERABERE"<<endl;
       score++;pcscore++;
    }if(Mesec==3&&pcsec==1){
       cout<<"Makas"<<"                          Tas"<<endl;
       cout<<"          "<<pcname<<" Kazandi"<<endl;
       score--;pcscore=pcscore+2;
    }if(Mesec==3&&pcsec==2){
       cout<<"Makas"<<"                          Kagit"<<endl;
       cout<<"          "<<name<<" Kazandi"<<endl;
       score=score+2;pcscore--;
    }if(Mesec==2&&pcsec==1){
       cout<<"Kagit"<<"                          Tas"<<endl;
       cout<<"          "<<name<<" Kazandi"<<endl;
       score=score+2;pcscore--;
    }
cout<<"You scor: "<<score<<"                    "<<"Pc Score:"<<pcscore<<endl;
cin>>next;
if(Mesec==4 || Mesec==4){
    break;
}

}
}
