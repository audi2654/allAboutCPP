//A program for calculating mutual funds returns based on
//1. Inflation rate adjusted 
//2. With different Expense Ratios over years
//3. Exit load if units withdrawn before 1 year

//https://www.holisticinvestment.in/how-to-calculate-mutual-fund-returns/

#include <iostream>
#include <math.h>

class mutualFund{

    public:
    mutualFund();
    float disp_AbsoluteReturns(float& , float&, float&);
    //void disp_SimpleAnnualizedReturns();
};

mutualFund::mutualFund(){
    std::cout << "This is a no arg constr\n";
}

float mutualFund::disp_AbsoluteReturns(float& currNAV, float& iniNAV, float& years){
    float AbsRet(0);

    AbsRet = (((currNAV - iniNAV) / iniNAV) * 100 * 1 / years);

    return AbsRet;
}

//void mutualFund::disp_SimpleAnnualizedReturn










int main(){
    int option;

    float currNAV(0), initialNAV(0), years{0}, numDays(0);

    mutualFund case1_Obj;
    mutualFund case2_Obj;

    do
    {
        std::cout << std::endl;
        std::cout << "0. Exit\n";
        std::cout << "1. Absolute Returns\n";
        std::cout << "2. Simple Annualized Returns\n";
        std::cout << "3. CAGR\n";

        std::cout << "\nEnter option : ";
        std::cin >> option;

        switch (option)
        {
            case 1:
            {
                //1. Absolute Returns

                std::cout << "Enter Current NAV : ";
                std::cin >> currNAV;
                std::cout << "Enter Initial NAV : ";
                std::cin >> initialNAV;
                std::cout << "Enter Total No. of Years : ";
                std::cin >> years;

                float AbsRet = case1_Obj.disp_AbsoluteReturns(currNAV, initialNAV, years);

                std::cout << std::endl << "Your Absolute Returns are : " << AbsRet << "%" << std::endl;

                break;
            }
        
            case 2:
            {
                //2. Simple Annualized Returns

                std::cout << "Enter Current NAV : ";
                std::cin >> currNAV;
                std::cout << "Enter Initial NAV : ";
                std::cin >> initialNAV;
                std::cout << "Enter Total No. of Days : ";
                std::cin >> numDays;

                float AbsRetRate = (currNAV - initialNAV) / initialNAV;
                float x = 1 + AbsRetRate;
                float y = float(365) / float(numDays); 

                float AnnRet = ((float)pow(x, y) - (float)1) * 100;

                std::cout << std::endl << "Your Annualized Returns are : " << AnnRet << "%" << std::endl;

                break;
            }
            case 3:
            {
                //3. CAGR

                currNAV, initialNAV, years = 0;

                std::cout << "Enter Current NAV : ";
                std::cin >> currNAV;
                std::cout << "Enter Initial NAV : ";
                std::cin >> initialNAV;
                std::cout << "Enter Total No. of Years : ";
                std::cin >> years;

                float x = (currNAV / initialNAV);
                float y = (1 / years);

                float cagr = (pow(x,y) - 1) * 100;

                std::cout << std::endl << "Your CAGR is : " << cagr << "%" << std::endl;

                break;
            }


            default:
                std::cout << "Bye Bye\n";
                break;
        }
    } while (option != 0);
    


    return 0;
}