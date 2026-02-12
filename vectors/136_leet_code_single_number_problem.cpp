// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     vector<int> vec = {1, 2, 3, 4, 5, 4, 3, 32, 1, 2, 1, 3, 2342, 342, 4, 4131, 2, 1, 23, 123};

//     for (int i = 0; i < vec.size(); i++)
//     {
//         int count = 0;
//         for (int j = 0; j < vec.size(); j++)
//         {
//             if (vec[i] == vec[j])
//             {
//                 count++;
//             }
//         }
//         if (count == 1)
//         {
//             cout << vec[i] << " ";
//         }
//     }
//     cout << endl;
//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     vector<int> vec = {1, 2, 3, 2, 1};
//     int answer = 0;
//     for (int i : vec)
//     {
//         answer ^= i;
//     }
//     cout << answer << endl;
//     return 0;
// }
