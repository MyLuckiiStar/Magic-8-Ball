#include <iostream>
#include <cstdlib>

int main() {
  std::cout << "MAGIC 8-BALL:\n\n ";
  srand(time(NULL));
  int answer = std::rand() % 10;
  //std::cout << answer;

  if (answer == 0) {
    std::cout << "It is certain.\n";
  }
  else if (answer == 1) {
    std::cout << "It is quite possible.\n";
  }
  else if (answer == 2) {
    std::cout << "I believe so.\n";
  }
  else if (answer == 3) {
    std::cout << "The world may never know...\n";
  }
  else if (answer == 4) {
    std::cout << "I'm leaning towards yes.\n";
  }
  else if (answer == 5) {
    std::cout << "You know the answer in your heart.\n";
  }
  else if (answer == 6) {
    std::cout << "Listen to your gut.\n";
  }
  else if (answer == 7) {
    std::cout << "I don't think so.\n";
  }
  else if (answer == 8) {
    std::cout << "Definitely not.";
  }
  else if (answer == 9) {
    std::cout << "I'm leaning towards no on this one...\n";
  }
  else {
    std::cout << "Very doubtful.\n";
  }
}