#include <iostream>

using namespace std;

int main()
{ 
    int code;
    double PRate;//pay rate
    double fpay;//fortnightly pay
     double total; //total play roll

    do
    {
        cout<<"Enter employee's number code (-1 to end): ";
        cin>>code;
        if (code >=1 && code<=4 && code != -1)
            {
                switch (code){
                    case 1: // Team Leader: Calculate and display team leader's pay

                        cout<<"Enter the Team leaders's pay rate: ";
                        cin>>fpay;
                        cout<<"fortnightly pay is: "<<fpay<<endl;
                        cout<<" \n"<<endl;
                        break;

                    case 2:// Sales Worker: Calculate and display sales worker's pay

                        double gross;//employee's gross weekly sales
            
                        cout<<"Enter Sales employee's gross weekly sales: ";
                        cin>>gross;

                        fpay=500+(gross/6.5*100);//(to calculate fortnightly pay salary )
                        cout<<"fortnightly pay is: "<<fpay<<endl;
                        cout<<"\n "<<endl;
                        break;

                    case 3:// Pieceworker: Calculate and display piece worker's pay
                        
                         int pieces;
                         double pppayrate;//employee's per piece pay rate

                        cout<<"Enter the number of pieces completed: ";
                        cin>>pieces;

                        cout<<"Enter the employee's per piece pay rate: ";
                        cin>>pppayrate;

                        fpay= pppayrate*pieces;//(to calculate fortnightly pay salry)
                        cout<<"fortnightly pay is:"<<fpay<<endl;
                        cout<<" \n"<<endl;
                        break;

                    case 4:// Hourly Worker: Calculate and display hourly worker's pay

                        double hours;

                        cout<<"Enter hourly worker's pay rate: ";
                        cin>>PRate;
                        cout<<"Enter the number of hours worked: ";
                        cin>>hours;

                            // Calculate pay considering overtime hours
                            if(hours>60)
                            {
                                fpay = (PRate*60) + ((hours-60)*(PRate*1.5)); //(this is for first 60 hours calculation)

                                cout<<"fortnightly pay is: "<<fpay<<endl;
                                cout<<" "<<endl;   
                            }
                            else
                            {
                                fpay=(PRate*hours);//(this is overtime worked)
                                cout<<"fortnightly pay is: "<<fpay<<endl;;
                                cout<<" \n"<<endl;
                            }
                            break;
                }
                total =total + fpay; // Add the calculated pay to total payroll
            }
         else if (code != -1)
            {
                cout<<"You have entered an invalid code."<<endl;
                cout<<" \n"<<endl;
            }
     
    }while(code != -1);

    cout<<"The total payroll for the fortnight is: "<<total;
    return 0;
} 

