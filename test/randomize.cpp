#include <iostream>
#include <random>
using namespace std;

int randomize(int min, int max) {
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> dis(min, max);
	return dis(gen);
}