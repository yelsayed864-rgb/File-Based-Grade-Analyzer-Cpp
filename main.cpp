#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("grades.txt");
    int grade, min = 100, max = 0, count = 0, sum = 0;

    while (file >> grade) {
        if (grade < min) min = grade;
        if (grade > max) max = grade;
        sum += grade;
        count++;
    }

    cout << "Average: " << (double)sum / count << endl;
    cout << "Min: " << min << "\nMax: " << max << endl;

    file.close();
    return 0;
}
