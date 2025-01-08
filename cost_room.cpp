#include <iostream>
#include<iomanip>
using namespace std;

class ABC{//name classhotel//
    public:
        float water;
        float electric;
        float total;
        float waterUser;
        float eleUser;
                ABC(){
                water=30;
                electric=15;
            };
        
};

class Air_room:public ABC{//name class air//
    public:
        float Room;
        Air_room(){Room = 3500;};
        void cost_room(){
            cout<<"total of electric: ";
            cin>>eleUser;
            cout<<"total of water: ";
            cin>>waterUser;
            total=(water*waterUser)+(eleUser*electric);
            cout<<"\ncost room: "<<Room;
            cout<<"\ncost electric and water: "<<total;
            total=total+Room;
            cout<<"\nAll cost: "<<total;
            
        }
}Air;

class Fan_room:public ABC{//name class fan//
    public:
        float Room;
        Fan_room(){Room = 2500;};
        void cost_room(){
            cout<<"total of electric: ";
            cin>>eleUser;
            cout<<"total of water: ";
            cin>>waterUser;
            total=(water*waterUser)+(eleUser*electric);
            cout<<"\ncost room: "<<Room;
            cout<<"\ncost electric and water: "<<total;
            total=total+Room;
            cout<<"\nAll cost: "<<total;
            
        }
}Fan;

class Vip_room:public ABC{//name class vip//
    public:
        float Room;
        Vip_room(){Room = 2500;};
        void cost_room(){
            cout<<"total of electric: ";//show inputele
            cin>>eleUser;
            cout<<"total of water: ";
            cin>>waterUser;
            total=(water*waterUser)+(eleUser*electric);
            cout<<"\ncost room: "<<Room;
            cout<<"\ncost electric and water: "<<total;
            total=total+Room;
            cout<<"\nAll cost: "<<total;
            
        }
}Vip;

int main(){
    int select;
    cout<<"Which room are you live :\n1.Fanroom\n2.Airroom\n3.VIProom\nYour select: ";
    cin>>select;
    if(select==1){
        Fan.cost_room();
    }
    else if(select==2){
        Air.cost_room();
    }
    else if(select==3){
        Vip.cost_room();        
    }
    else{cout<<"please enter chioce in select";}
}            
            
            
            
