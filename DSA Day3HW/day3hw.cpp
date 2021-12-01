/*
November 27, 2021

Diane Granger 
dianeegranger@gmail.com

Data Structures and Algorithms Zero to Hero
LetsUpgrade
Instructor:  Subrat Kkumar Swain

Day 3 Assignment:
Greedy Florist Problem - https://www.hackerrank.com/challenges/greedy-florist/problem

*/

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int n, k;     // n: sz of array, k:  num of ppl in group
  int price = 0;      // initialize flower price to 0

  cin >> n >> k;      // user input of num of flowers, n;  and num of ppl in group

  vector<int> arr(n);     // store flower values in arr()

  // iterate through each flower cost in flower cost array
  for (int i=0; i<n; i++)
  {
    cin >> arr[i];  // put user input directly into array of flower values
  }
  // sort arr in descending order of flower prices
  sort(arr.begin(), arr.end(), greater<int> ());


  // buy highest value flower first
  for(int i=0; i<n; i++)
  {
    price += (i/k + 1) * arr[i];  // flower values 
  }

  cout << price;

  return 0;
}

/*
OUTPUT:
PS C:\Users\diane\OneDrive\Desktop\LetsUpgrade\Data Structures and Algorithms\dsa probs> g++ day3hw.cpp -o day3hw.exe
PS C:\Users\diane\OneDrive\Desktop\LetsUpgrade\Data Structures and Algorithms\dsa probs> ./day3hw
3 3
2 5 6
13
PS C:\Users\diane\OneDrive\Desktop\LetsUpgrade\Data Structures and Algorithms\dsa probs> g++ day3hw.cpp -o day3hw.exe
PS C:\Users\diane\OneDrive\Desktop\LetsUpgrade\Data Structures and Algorithms\dsa probs> ./day3hw
3 2
2 5 6
15
PS C:\Users\diane\OneDrive\Desktop\LetsUpgrade\Data Structures and Algorithms\dsa probs> g++ day3hw.cpp -o day3hw.exe
PS C:\Users\diane\OneDrive\Desktop\LetsUpgrade\Data Structures and Algorithms\dsa probs> ./day3hw
5 3
1 3 5 7 9
29
PS C:\Users\diane\OneDrive\Desktop\LetsUpgrade\Data Structures and Algorithms\dsa probs>
*/