#include <iostream>
using namespace std;

int main()
{

    int timesec;

    cout << "Input Time (s)" << endl;

    cin >> timesec;

    int hr = 0;
    int min = 0;
    int sec = 0;

    int remainder = 0;

    hr = timesec / 3600;
    remainder = timesec % 3600;

    min = remainder / 60;

    sec = remainder % 60;

    cout << hr << " hr " << min << " min " << sec << " sec" << endl;

    return 0;
}