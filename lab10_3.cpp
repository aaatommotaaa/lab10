#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>

using namespace std;

int main(){
    int count=0;
    double mean,devia,sum=0,sumpw=0;
    string textline;
    ifstream source("score.txt");
    while (getline(source,textline)){
        double x = atof(textline.c_str());
        sum = sum + x;
        sumpw = sumpw + pow(x,2);
        count++;
    }
    
    mean = sum/count;
    devia = sqrt((sumpw/count)-pow(mean,2));

    cout << "Number of data = " << count << '\n';
    cout << setprecision(3);
    cout << "Mean = " << mean << '\n';
    cout << "Standard deviation = " << devia;
}