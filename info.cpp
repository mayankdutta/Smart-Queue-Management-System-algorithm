/* THINK ALOUD !! */
#include <algorithm>
#include <bits/stdc++.h>
#include <chrono>
#include <climits>
#include <cmath>
#include <random>

#include <functional>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <vector>

#include "Date.cpp"
#include "Time.cpp"

using namespace std;
using namespace std::chrono;

int getRandomNumber(int from, int to) {
  // Seed the random number generator with the current time
  std::srand(std::time(nullptr));

  // Generate a random number between from and to, inclusive
  int randomNumber = std::rand() % (to - from + 1) + from;

  return randomNumber;
}

class Patient {
public:
  int age;
  Time time_of_arrival;
  Time exptected_time;
  static int appointment;
  int score;
};

int Patient::appointment = 0;

int main() {
  vector<Patient> patients(50);
  for (auto &patient : patients) {
    patient.age = getRandomNumber(20, 75);
    patient.exptected_time = Time(
        getRandomNumber(10, 2), getRandomNumber(0, 60), getRandomNumber(0, 60));

    patient.time_of_arrival =
        Time(getRandomNumber(patient.exptected_time.getHours(), 2),
             getRandomNumber(0, 59), getRandomNumber(0, 59));

    patient.score = -1;
  }
}
