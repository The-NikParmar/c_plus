#include<iostream>
using namespace std;
// Declare a class cricketer.
class cricketer {
  public:
    string name;
    int age;
    int matches_played;
    int runs_scored;
};

// Declare a derived class batsman from cricketer.
class batsman : public cricketer {
  public:
    int total_runs;
    double average_runs;
    int best_performance;

    // Member functions input data, calculate average runs, Display data.
    void input_data() {
      cout << "Enter the name of the batsman: ";
      cin >> name;

      cout << "Enter the age of the batsman: ";
      cin >> age;

      cout << "Enter the number of matches played by the batsman: ";
      cin >> matches_played;

      cout << "Enter the runs scored by the batsman: ";
      cin >> runs_scored;
    }

    void calculate_average_runs() {
      average_runs = runs_scored / matches_played;
    }

    void display_data() {
      cout << "Name: " << name << endl;
      cout << "Age: " << age << endl;
      cout << "Matches played: " << matches_played << endl;
      cout << "Runs scored: " << runs_scored << endl;
      cout << "Average runs: " << average_runs << endl;
      cout << "Best performance: " << best_performance << endl;
    }
};
int main()
{
	batsman b1;
	b1.input_data();
	b1.display_data();
	b1.calculate_average_runs();
	return 0;
}
