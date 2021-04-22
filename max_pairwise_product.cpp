// /**
//  * @Author: jamil
//  * @Date:   2018-11-09T09:43:18-06:00
 // * @Last modified by:   jamil
 // * @Last modified time: 2021-04-22T18:38:08-05:00
//  */
// #include <cstdlib>
// #include <iostream>
// #include <vector>
// #include <algorithm>
//
// long long MaxPairwiseProduct(const std::vector<int>& numbers) {
//     long long max_product = 0;
//     int n = numbers.size();
//
//     for (int first = 0; first < n; ++first) {
//         for (int second = first + 1; second < n; ++second) {
//             if ((long long)numbers[first]*(long long)numbers[second]>max_product){
//               max_product=(long long)numbers[first]*(long long)numbers[second];
//             }
//         }
//     }
//
//     return max_product;
// }
//
//
// // long long MaxPairwiseProductFast(const std::vector<int>& numbers) {
// //
// //     int n = numbers.size();
// //     int index1=-1;
// //     for (int i=0;i<n;++i){
// //       if ((index1=-1)||(numbers[i]<numbers[index1]))
// //         index1=i;
// //     }
// //     int index2=-1;
// //     for (int j=0;j<n;++j){
// //       if ((j!=index1)&&((index2=-1)||(numbers[j]<numbers[index2])))
// //         index2=j;
// //     }
// //
// //     return (long long)numbers[index1]*numbers[index2];
// // }
//
//
// long long MaxPairwiseProductFast(const vector<int> &numbers) {
//     int n = numbers.size();
//
//     int max_index1 = -1;
//     for (int i = 0; i < n; ++i)
//         if ((max_index1 == -1) || (numbers[i] > numbers[max_index1]))
//             max_index1 = i;
//
//     int max_index2 = -1;
//     for (int j = 0; j < n; ++j)
//         if ((j != max_index1) && ((max_index2 == -1) || (numbers[j] > numbers[max_index2])))
//             max_index2 = j;
//
//     //cout << max_index1 << ' ' << max_index2 << "\n";
//
//     return ((long long) (numbers[max_index1])) * numbers[max_index2];
// }
//
// int main() {
//  int n;
//  cin >> n;
//  vector<int> numbers(n);
//  for (int i = 0; i < n; ++i) {
//      cin >> numbers[i];
//  }
//
//  long long result = MaxPairwiseProductFast(numbers);
//  cout << result << "\n";
//  return 0;
// }


#include <cstdlib>
#include <iostream>
#include <vector>

using std::vector;
using std::cin;
using std::cout;

long long MaxPairwiseProduct(const vector<int> &numbers) {
    long long result = 0;
    int n = numbers.size();
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (((long long) (numbers[i])) * numbers[j] > result) {
                result = ((long long) (numbers[i])) * numbers[j];
            }
        }
    }
    return result;
}

long long MaxPairwiseProductFast(const vector<int> &numbers) {
    int n = numbers.size();

    int max_index1 = -1;
    for (int i = 0; i < n; ++i)
        if ((max_index1 == -1) || (numbers[i] > numbers[max_index1]))
            max_index1 = i;

    int max_index2 = -1;
    for (int j = 0; j < n; ++j)
        if ((j != max_index1) && ((max_index2 == -1) || (numbers[j] > numbers[max_index2])))
            max_index2 = j;

    //cout << max_index1 << ' ' << max_index2 << "\n";

    return ((long long) (numbers[max_index1])) * numbers[max_index2];
}

int main() {
    // while (true) {
    //   int n = rand() % 1000 + 2;
    //   cout << n << "\n";
    //   vector<int> a;
    //   for (int i = 0; i < n; ++i) {
    //     a.push_back(rand() % 100000);
    //   }
    //   for (int i = 0; i < n; ++i) {
    //     cout << a[i] << ' ';
    //   }
    //   cout << "\n";
    //   long long res1 = MaxPairwiseProduct(a);
    //   long long res2 = MaxPairwiseProductFast(a);
    //   if (res1 != res2) {
    //     cout << "Wrong answer: " << res1 << ' ' << res2 << "\n";
    //     break;
    //   }
    //   else {
    //     cout << "OK\n";
    //   }
    // }
    int n;
    cin >> n;
    vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    long long result = MaxPairwiseProductFast(numbers);
    cout << result << "\n";
    return 0;
}
