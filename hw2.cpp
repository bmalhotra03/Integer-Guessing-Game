// Brij Malhotra
// hw2.cpp
// Purpose: This program plays an integer guessing game with
//          the user and asks them to guess a random generated
//          number in a range that the user sets, once the number
//          has been guessed correctly, it asks the user whether
//          they want to play again!
// Input: min and max ( for the range ), guess, y or n to play again
// Output: Number is too high! try again, Number is too low! try again,
//         once guessed correct, displays option to play again or not
// Example: min: 10, max: 20, guess: 15, too low! try again, 17, too high!
//          try again, 16, you guessed correct! play again? y/n


#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
  int min, max, randnum, guess;
  char choice = 'y';

  cout << endl << endl << endl;

  // Welcoming message

  cout << "Welcome to the number game! You will have to guess ";
  cout << "the number correct within the range that you provide!" << endl;
  cout << "Don't worry, you have unlimited tries! Once you get it correct ";
  cout << "you will have the option to choose whether you want to play again!" << endl;
  cout << "Thanks for being patient, enjoy now!" << endl << endl << endl;

  // While loop to set condition whether the game will be played again or not

  while (choice== 'y')
    {
      cout << "Please enter the minimum limit of the range!" << endl;
      cin >> min;
      cout << endl;
      cout << "Please enter the maximum limit of the range!" << endl;
      cin >> max;
      cout << endl;
      cout << "Guess the random number!" << endl;
      cin >> guess;
      cout << endl << endl;

      // Random number generator

      randnum = rand() % (max - min +1) + min;

      // Decide whether guess is too high or too low

      do
        {
          if (randnum<guess) {
            cout << "That number is too high! Try again please!" << endl;
            cin >> guess;
            cout << endl << endl;
          }
          else {
            cout << "That number is too low! Try again please!" << endl;
            cin >> guess;
            cout << endl << endl;
          }
        }
      while (guess!=randnum);
      
          // Option to play again
          cout << "Congrats! You got it right!" << endl;
          cout << "Would you like to play again? y / n :)" << endl;
          cin >> choice;
          cout << endl << endl;
        }

      // A goodbye message for the user

      cout << "Thank you for playing this game! I hope you enjoyed :D" << endl;
      cout << "If you ever want to play again, you know where to find this!" << endl;
      cout << "Have a good day and goodbye!" << endl;
      cout << endl << endl;


      return 0;
    }
