#include <iostream>
#include <cmath>
#include <unistd.h>
#include <time.h>
#include <stdio.h>

using namespace std;

int x, y;
float a;
char pantalla[200][100];
float inc;

void Clear()
{
    cout << "\1B[2J\x1B[H";
}


int main()
{

for(int py = 0;py<100;py++){
  for(int px = 0;px<200;px++){

    pantalla[px][py] = ' ';
    if(py == 50) pantalla[px][py]=' ';

      if(px == 125) pantalla[px][py] = ' ';
      if(py == 50 && px == 100) pantalla[px][py] = ' ';
  }
}

float f = 0;

for(int i = -100;i<100;i++){
  a = (((float)(i))/ 20)*2;

f = sqrt(1-pow(abs(a/2)-1, 2));
//f = sin(a);
  cout<<f<<'\n';
  if(f < 5 && f > -5){
  pantalla[i+125][50 - (int)(f*10)] = '8';
  pantalla[i+124][50 - (int)(f*10)] = '8';
  pantalla[i+126][50 - (int)(f*10)] = '8';
  }

f = acos(1-abs(a/2))-3.14;
// f = pow(a/3, 2);

  if(f < 5 && f > -5){
  pantalla[i+125][50 - (int)(f*10)] = '8';
  pantalla[i+124][50 - (int)(f*10)] = '8';
  pantalla[i+126][50 - (int)(f*10)] = '8';
  }

  Clear();
  unsigned int microsecond = 1000000;
usleep(0.05 * microsecond);
  for(int py = 15;py<85;py++){
      for(int px = 50;px<200;px++){
        cout<<pantalla[px][py];
      }
      cout<<'\n';
    }
}
}
