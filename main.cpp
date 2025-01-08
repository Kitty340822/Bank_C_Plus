#include <iostream>
#include <iomanip>
using namespace std;

class Bank{
    private:
        float wMoney;
        
    public:
        float balance;
        float balanceCheck;
        float money;
        string accName,accNum;
        Bank(float money);
        Bank(float money,string accountName,string accountNum,string accountNumber){
            wMoney=money;
            accNum=accountNumber;
            accName=accountName;
            
            cout<<"------Successful------"<<endl;
            cout<<"Name :"<<accName<<endl;
            cout<<"ID :"<<accNum<<endl;
            cout<<"Money change :"<<wMoney<<endl;
            cout<<"------------------------------------"<<endl;
        }
        
        float checkBalanceWithdraw(){return balance;}
        float deposit(){return balance=balance+wMoney;}
        float withdraw(){return balance=balance-wMoney;}
        float checkBalance(){return balance;}
~Bank(){
    cout<<"------Thankyou------"<<endl;
    cout<<"-------------------------"<<endl;
}
        
        
};
Bank::Bank(float money){wMoney=money;}
int main()
{
    float money,check;
    string menu;
    int i=0;

    while(i=1){
        cout<<"Deposit please press D."<<endl;
        cout<<"Withdraw please press W."<<endl;
        cout<<"checkBalance please press C."<<endl;
        cout<<"fake receipt please press F."<<endl;
        cout<<"Exit program please press E."<<endl;
        cout<<"-------------------------------------------"<<endl;
        cout<<"Please select the menu :";
        cin>>menu;
        
        if(menu=="D"){
            cout<<"Amount to Deposit :";
            cin>>money;
            Bank bank_1(money);
            cout<<"--------Result-------"<<endl;
            cout<<"New balance :"<<bank_1.deposit()<<endl;
            cout<<"-----------------------------------"<<endl;
            Bank bank_5(bank_1);
        }
        else if(menu=="W"){
            cout<<"Amount to withdraw :";
            cin>>money;
            Bank bank_2(money);
            check=bank_2.checkBalanceWithdraw();
            if(money>check){
                cout<<"destitute"<<endl;
            }
            else{
                cout<<"------Result------"<<endl;
                cout<<"Balance :"<<bank_2.withdraw()<<endl;
                cout<<"---------------------------------"<<endl;
            }
            Bank bank_6=bank_2;
        }
        else if(menu=="E"){
            exit(0);
        }
        else if(menu=="C"){
            Bank bank_3(money);
            cout<<"Balance :"<<bank_3.checkBalance()<<endl;
            cout<<"-------------------"<<endl;
        }
        else if(menu=="F"){
            string accountName,accountNumber;
            float money;
            cout<<"-----slip-----"<<endl;
            cout<<"Name :";
            cin>>accountName;
            cout<<"ID :";
            cin>>accountNumber;
            cout<<"Amount :";
            cin>>money;
                
            //Bank bank_4(money,accName,accountNumber);
        }
        else {
            cout<<"invaild , pls try again!!!"<<endl;
        }
        
    }
        return 0;
        
}












