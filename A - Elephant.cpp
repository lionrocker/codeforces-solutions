    #include <iostream>
    #include <cmath>
    using namespace std;
     
    int main() {
      int n;
      cin >> n;
      int steps;
      steps = n / 5;
      if (n % 5 > 0) steps++;
      cout << steps << endl;
      
    }
