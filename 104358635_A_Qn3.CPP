#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
     // Define the range of dice values
    int lower =1;
    int upper =7;
    int point;
    
    srand(time(NULL)); //generate a unique seed
    
    // Initialize variables to store dice rolls and sums
    int rand1;
    int rand2;
    int rand3;
    int sum =0;
    int sum1=0;
    
    // Simulate the first set of dice rolls and calculate sum
    rand1=(rand() % (upper-lower)+ lower);
    rand2=(rand() % (upper-lower)+ lower);
    rand3=(rand() % (upper-lower)+ lower);
    sum= rand1+rand2+rand3;
    cout<<"Player rolled "<<rand1<<" + "<<rand2<<" + "<<rand3<<" = "<<sum<<endl;

     // Determine outcome based on the sum of the first set of rolls
    if(sum >=13)
        {
            cout<<"Player wins";
        }  
    else 
        {
            if (sum >6 && sum<13)
            {

            // Establish a point for the player
             cout<<"Point is "<<sum<<endl;
             point=sum;
             do
             {
                // Simulate additional dice rolls for the player
                sum1 = 0;
                rand1=(rand() % (upper-lower)+ lower);
                rand2=(rand() % (upper-lower)+ lower);
                rand3=(rand() % (upper-lower)+ lower);
                sum1= rand1+rand2+rand3;
                cout<<"Player rolled "<<rand1<<" + "<<rand2<<" + "<<rand3<<" = "<<sum1<<endl;
                
                // Determine outcomes within the point-establishing loop
                if (sum1==point)
                {
                    cout<<"Player wins";
                    break;
                }
                else if (sum1 >=15)
                {
                    cout<<"Player loses";
                    break;
                }
    
             }while(sum1 != -1);// Loop until a specific condition is met
             
             
            }
            else 
            {
                cout<<"Player loses";
            }
        }
        // End of the game
    return 0;
}