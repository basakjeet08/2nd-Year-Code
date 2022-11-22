#include <iostream>
using namespace std;
class parcel{
    int weight;
    protected :
        int shipping_cost ;
    public : 
        parcel(int weight){
            shipping_cost = 0 ;
            this -> weight = weight ;
        }
        void Call_Shipping(){
            shipping_cost = 10*weight ;
        }
};
class Box : public parcel {
    int height , width , depth ;
    public : 
        Box(int height , int width , int depth , int weight) : parcel(weight){
            this->height = height ;
            this -> width = width ; 
            this -> depth = depth;
        }
        void Call_Shipping(){
            parcel :: Call_Shipping();
            int volume = height * width * depth ;
            if(volume > 3)
                shipping_cost += 30 ;
        }
        void showData(){
            Call_Shipping();
            cout << "The Shipping cost : " << shipping_cost << endl ;
        }
};
int main(){
    int weight , height , width , depth ;
    cout << "Enter the weight , height , width , depth : " ;
    cin >> weight >> height >> width >> depth ;
    Box ob(height , width , depth , weight);
    ob.showData();
}