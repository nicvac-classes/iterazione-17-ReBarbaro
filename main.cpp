#include <iostream>
using namespace std;
int main() {
    int nneg, i;
    double max, min, media, np, n, sommapositivi;

    i = 0;
    sommapositivi = 0;
    np = 0;
    nneg = 0;
    do{
        cout<<"inserisci il numero"<<endl;
        cin>>n;
        if(i==0){
            max=n;
            }else{
                if(n>max){
                    max=n;
                    }

                 }
                 if(i==0){
                    min=n;
                    }else{
                        if(n<min){
                            min=n;
                }
            }
            
            
                if(n>=0){
                    sommapositivi=n+sommapositivi;
                    np=np+1;
                    }else{
                        nneg=nneg+1;
                        }
                        i=i+1;
                        }while(n!=0);
                        cout<<"in numero massimo è"<<max<<endl;
                        cout<<"il minimo è"<<min<<endl;
                        cout<<"i valori negativi sono"<<nneg<<endl;
                        cout<<"la media dei valori positivi è"<<sommapositivi/np<<endl;
                        }



    