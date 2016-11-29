#include <iostream>
#include <cstdlib>
#include <pthread.h>

using namespace std;

int beaconThread(){

}

int main(){

    pthread_t pBeacon = NULL;
    int iBeaconThread = 0;

    int i;

    iBeaconThread = pthread_create(&pBeacon, NULL, beaconThread, (void *)i);



    return 0;
}