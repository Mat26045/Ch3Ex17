#include <iostream>
#include <cstdlib>  
#include <ctime>    
using namespace std;

int main()
{
        const int MIN_VALUE = 100,
        MAX_VALUE = 1000;

       int num_1,
        num_2,
        answer;

    unsigned seed = time(0);

    srand(seed);

    cout << endl;
    cout << "-----------------------------------------\n\n";
    cout << "This program displays two random numbers\n";
    cout << "to be added.\n" << endl;

     num_1 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
    num_2 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;


    answer = num_1 + num_2;
    cout << num_1 << " + " << num_2 << " = ? \n" << endl;

       cout << "Press \"Enter\" when you are ready to see the answer";
    cin.get();
    cout << endl;

    cout << num_1 << " + " << num_2 << " = ";
    cout << answer << endl;
    cout << "\n-----------------------------------------\n";
    cout << endl;

    return 0;
}