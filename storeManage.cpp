#include<iostream>
using namespace std;
int main(){
    cout<<"Welcome to our shop!"<<endl;
    cout<<"Items available in the store are:"<<endl;
    cout<<"1. ball point pen\n2. fountain pen\n3. faber castle 6B pencil\n4. classmate notebook 200 pages"<<endl;
    int stock[] = {5, 12, 10, 30};
    cout<<"Quantity of items available in the stock:"<<endl;
    for(int i = 0;i<sizeof(stock)/sizeof(int);i++){
        cout<<stock[i]<<endl; 
    }

    int choice, quant;
    cout<<"Select an item to purchase or press 0 to exit"<<endl;
    cin>>choice;
    while(choice!=0){
        
        switch(choice){
            case 1:
            cout<<"how many ball point pens you wish to buy?"<<endl;
            cin>>quant;
            if(quant<=stock[choice]){
                stock[choice] -= quant;
                cout<<"purchase successful"<<endl;
            }
            else
            cout<<"sorry, entered quantity not available"<<endl;
            break;
            
            case 2:
            cout<<"how many fountain pens you wish to buy?"<<endl;
            cin>>quant;
            if(quant<=stock[choice]){
                stock[choice] -= quant;
                cout<<"purchase successful"<<endl;
            }
            else
            cout<<"sorry, entered quantity not available"<<endl;
            break;

            case 3:
            cout<<"how many pencils you wish to buy?"<<endl;
            cin>>quant;
            if(quant<=stock[choice]){
                stock[choice] -= quant;
                cout<<"purchase successful"<<endl;
            }
            else
            cout<<"sorry, entered quantity not available"<<endl;
            break;

            case 4:
            cout<<"how many notebooks you wish to buy?"<<endl;
            cin>>quant;
            if(quant<=stock[choice]){
                stock[choice] -= quant;
                cout<<"purchase successful"<<endl;
            }
            else
            cout<<"sorry, entered quantity not available"<<endl;
            break;

            default:
            cout<<"invalid input, please enter a valid option"<<endl;
        }
        cout<<"make a choice or press 0 to exit"<<endl;
        cin>>choice;
    }
}