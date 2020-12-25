#include<iostream>
using namespace std;
class shop{
    private:
        int Item_Id[100];
        int item_price[100];
        int counter;
    public:
        void initcounter(){counter=0;}
        void setdata(void){
            cout<<"Enter Id of your product no: "<<counter+1<<endl;
            cin>>Item_Id[counter];
            cout<<"Enter price of your product: "<<endl;
            cin>>item_price[counter];
            counter++;
        }
        void getdata(){
            for(int i=0; i<counter; i++){

            cout<<"price of your product Id: "<<Item_Id[i]<<" is: "<<item_price[i]<<endl;
            }
        }

};

int main(){
    shop dukan;
    dukan.initcounter();
    dukan.setdata();
    dukan.setdata();
    dukan.setdata();
    dukan.getdata();
    
    return 0;
}