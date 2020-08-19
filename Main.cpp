#include <iostream>
#include <string>
#include <cmath>
using namespace std;
double positionTrack(double xPos, double yPos, double zPos, double goalPosX, double goalPosY, double goalPosZ)
{
    double distanceX = goalPosX - xPos;
    double distanceY = goalPosY - yPos;
    double distanceZ = goalPosZ - zPos;
    double Xinput = (distanceX*distanceX);
    double Yinput = (distanceY*distanceY);
    double Zinput = (distanceZ*distanceZ);
    double Finalinput = (Xinput + Yinput + Zinput);
    double final_distance = pow(Finalinput, 0.5);
    return (final_distance);
}    
int main()
{
  cout << positionTrack(3, 7, 12, 1, 4, 6);
}
