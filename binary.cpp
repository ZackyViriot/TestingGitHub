#include <iostream> 
using namespace std;


class Customer {
    public:
        Customer(int rewardsRegular,int rewardsTravel,flaot bal);
        Customer();
        friend Customer operator + (const Customer& rewardsTravelac,const Customer& rewardsRegularac)

    private:
        string name;
        int accountNumber;
        float rewardsTravel;
        float rewardsRegular;
        float bal;
     


}
int main(){
    Customer r1,r2;
    

}
float operator +(const Customer& rewardsTravelac, const Customer& rewardsRegularac){
    
    bal = rewardsRegularac.bal + rewardsTravelac.bal 
}