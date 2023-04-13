#include<iostream>

using namespace std;


#include <iostream>

template <typename T, int n, int m>
T min_largest_element_in_columns(T(&matrix)[n][m]) {
    T min_largest = matrix[0][0];
    for (int j = 0; j < m; j++) {
        T largest = matrix[0][j];
        for (int i = 1; i < n; i++) {
            if (matrix[i][j] > largest) {
                largest = matrix[i][j];
            }
        }
        if (largest < min_largest) {
            min_largest = largest;
        }
    }
    return min_largest;
}

int main() {
    int int_matrix[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    double double_matrix[3][3] = { {1.2, 3.4, 5.6}, {7.8, 9.0, 2.1}, {3.2, 4.5, 6.7} };
    char char_matrix[3][3] = { {'a', 'b', 'c'}, {'d', 'e', 'f'}, {'g', 'h', 'i'} };
    string string_matrix[3][3] = { {"one", "two", "three"}, {"four", "five", "six"}, {"seven", "eight", "nine"} };

    cout << "Minimum largest element in columns of int matrix: " << min_largest_element_in_columns(int_matrix) << endl;
    cout << "Minimum largest element in columns of double matrix: " << min_largest_element_in_columns(double_matrix) << endl;
    cout << "Minimum largest element in columns of char matrix: " << min_largest_element_in_columns(char_matrix) << endl;
    cout << "Minimum largest element in columns of string matrix: " << min_largest_element_in_columns(string_matrix) << endl;

    return 0;
}
