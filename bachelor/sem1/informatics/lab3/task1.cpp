#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double startX = 0.1;
    double endX = 1.0;
    int k = 10;
    double epsilon = 0.0001;
    int n = 10;
    double step = (endX - startX) / k;

    for (double x = startX; x <= endX + step / 2; x += step)
    {
        double exactValue = pow(3.0, x);
        double sumN = 1.0;
        double currentTerm = 1.0;
        double ln3 = log(3.0);

    }

    return 0;
}
