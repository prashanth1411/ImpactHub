#include <iostream>
#include <vector>
using namespace std;
class Solution {
  public:
      string largestNumber(vector<int>& nums) {
          vector<string> strNums;
          
          // Convert integers to strings
          for (int num : nums) {
              strNums.push_back(to_string(num));
          }
  
          // Custom comparator for sorting
          sort(strNums.begin(), strNums.end(), [](string &a, string &b) {
              return a + b > b + a;
          });
  
          // If the largest number is "0", return "0"
          if (strNums[0] == "0") return "0";
  
          // Concatenate sorted strings
          string result = "";
          for (string &s : strNums) {
              result += s;
          }
  
          return result;
      }
  };
  