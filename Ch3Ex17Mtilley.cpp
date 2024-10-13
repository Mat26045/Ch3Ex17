#include <iostream>
#include <cstdlib>
#include <ctime>

void math_tutor() {
      std::srand(std::time(0));

      int num1 = std::rand() % 900 + 100;
    int num2 = std::rand() % 900 + 100;

    std::cout << num1 << " + " << num2 << " = ?" << std::endl;

    std::cout << "Press Enter when you are ready to check your answer...";
    std::cin.ignore(); 

     int student_answer;
    std::cout << "What is your answer? ";
    std::cin >> student_answer;

     int correct_answer = num1 + num2;

     if (student_answer == correct_answer) {
        std::cout << num1 << " + " << num2 << " = " << correct_answer << ". You are correct!" << std::endl;
    }
    else {
        std::cout << num1 << " + " << num2 << " = " << correct_answer << ". Your answer is not correct." << std::endl;
    }
}

int main() {
    math_tutor();
    return 0;
}
