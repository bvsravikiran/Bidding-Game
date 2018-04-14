#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, m;
  cout << endl << "Welcome to Resource Bidding Game!" << endl;
  cout << "Enter the total number of rounds: ";
  cin >> n;
  if (n < 0) {
    cout << "The total number of rounds cannot be negative." << endl;
    return 0;
  }
  cout << "Enter the money with each player at the beginning of the game: ";
  cin >> m;
  if (m < 0) {
    cout << "The money with each player at the beginning of the game cannot be negative." << endl;
    return 0;
  }
  return 0;
}
