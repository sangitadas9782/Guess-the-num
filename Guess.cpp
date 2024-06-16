#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{

    int num, guess, tries = 0;
    srand(time(NULL));
    num = (rand() % 100) + 1;
    do
    {
        cout << "enter a number between 1 and 100:";
        cin >> guess;
        tries++;
        if (guess > num)
        {
            cout << "TOO HIGH" << endl;
        }
        else if (guess < num)
        {
            cout << "TOO LOW" << endl;
        }
        else
        {
            cout << "CORRECT!, no of tries is:" << tries << endl;
        }
    } while (guess != num);

    return 0;
}