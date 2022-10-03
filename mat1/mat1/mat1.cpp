#include <iostream>
using namespace std;

void matrix();
void trans();
void sum();
void sub();
void mult();


int main() {

    matrix();
 
   
    return 0;
}

// * Matrix choose *
void matrix() {
    cout << " for matrix transpose press (1) " << endl
        << " for summation two matrices press (2) " << endl
        << " for subtractin two matrices press (3) " << endl
        << " for multiblacation two matrices press (4) " << endl;
    int x;
    cin >> x;
    while (x != 1 && x != 2 && x != 3 && x != 4) {
        cout << " try again!" <<endl
            <<" for matrix transpose press (1) " << endl
            << " for summation two matrices press (2) " << endl
            << " for subtractin two matrices press (3) " << endl
            << " for multiblacation two matrices press (4) " << endl;
        cin >> x;
    }

    if (x == 1) {
        trans();
    }
    else if (x == 2) {
        sum();
    }
    else if (x == 3) {
        sub();
    }
    else if (x == 4) {
        mult();
    }
}

// 1. fun of transpose

void trans() {
    int a[10][10], transpose[10][10], row, column;
    cout << "Enter rows and columns of matrix: ";
    cin >> row >> column;

    cout << "\nEnter elements of matrix: " << endl;

    // Storing matrix elements
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cout << "Enter element a" << i + 1 << j + 1 << ": ";
            cin >> a[i][j];
        }
    }

    // Printing the a matrix
    cout << "\nEntered Matrix: " << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cout << " " << a[i][j];
            if (j == column - 1)
                cout << endl << endl;
        }
    }

    // Computing transpose of the matrix
    for (int i = 0; i < row; i++)
        for (int j = 0; j < column; j++) {
            transpose[j][i] = a[i][j];
        }

    // Printing the transpose
    cout << "\nTranspose of Matrix: " << endl;
    for (int i = 0; i < column; i++)
        for (int j = 0; j < row; j++) {
            cout << " " << transpose[i][j];
            if (j == row - 1)
                cout << endl << endl;
        }

}

// 2. fun of adding
void sum() {
    int r, c, a[100][100], b[100][100], sum[100][100], i, j;

    cout << "Enter number of rows : ";
    cin >> r;

    cout << "Enter number of columns : ";
    cin >> c;

    cout << endl << "Enter elements of 1st matrix: " << endl;

    // Storing elements of first matrix entered by user.
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
        {
            cout << "Enter element a" << i + 1 << j + 1 << " : ";
            cin >> a[i][j];
        }

    // Storing elements of second matrix entered by user.
    cout << endl << "Enter elements of 2nd matrix: " << endl;
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
        {
            cout << "Enter element b" << i + 1 << j + 1 << " : ";
            cin >> b[i][j];
        }

    // Printing the a first matrix
    cout << "\nEntered Matrix: " << endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << " " << a[i][j];
            if (j == c - 1)
                cout << endl << endl;
        }
    }

    // Printing the a second matrix
    cout << "\nEntered Matrix: " << endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << " " << b[i][j];
            if (j == c - 1)
                cout << endl << endl;
        }
    }

    // Adding Two matrices
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            sum[i][j] = a[i][j] + b[i][j];

    // Displaying the resultant sum matrix.
    cout << endl << "Sum of two matrix is: " << endl;
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
        {
            cout << sum[i][j] << "  ";
            if (j == c - 1)
                cout << endl;
        }
}

// 3. fun of subtraction
void sub() {
    int r, c, a[100][100], b[100][100], sub[100][100], i, j;

    cout << "Enter number of rows : ";
    cin >> r;

    cout << "Enter number of columns : ";
    cin >> c;

    cout << endl << "Enter elements of 1st matrix: " << endl;

    // Storing elements of first matrix entered by user.
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
        {
            cout << "Enter element a" << i + 1 << j + 1 << " : ";
            cin >> a[i][j];
        }

    // Storing elements of second matrix entered by user.
    cout << endl << "Enter elements of 2nd matrix: " << endl;
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
        {
            cout << "Enter element b" << i + 1 << j + 1 << " : ";
            cin >> b[i][j];
        }

    // Printing the a first matrix
    cout << "\nEntered Matrix: " << endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << " " << a[i][j];
            if (j == c - 1)
                cout << endl << endl;
        }
    }

    // Printing the a second matrix
    cout << "\nEntered Matrix: " << endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << " " << b[i][j];
            if (j == c - 1)
                cout << endl << endl;
        }
    }

    // Adding Two matrices
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            sub[i][j] = a[i][j] - b[i][j];

    // Displaying the resultant sum matrix.
    cout << endl << "Sub of two matrix is: " << endl;
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
        {
            cout << sub[i][j] << "  ";
            if (j == c - 1)
                cout << endl;
        }
}


// 4. fun of multiplcation

void mult() {
    int a[100][100], b[100][100], mult[100][100], r1, c1, r2, c2, k;

    cout << "Enter rows and columns for first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns for second matrix: ";
    cin >> r2 >> c2;

    // If column of first matrix is not equal to row of second matrix,
    // ask the user to enter the size of matrix again.
    while (c1 != r2)
    {
        cout << "Error! column of first matrix not equal to row of second.";

        cout << "Enter rows and columns for first matrix: ";
        cin >> r1 >> c1;

        cout << "Enter rows and columns for second matrix: ";
        cin >> r2 >> c2;
    }

    // Storing elements of first matrix.
    cout << endl << "Enter elements of matrix 1:" << endl;
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
        {
            cout << "Enter element a" << i + 1 << j + 1 << " : ";
            cin >> a[i][j];
        }

    // Storing elements of second matrix.
    cout << endl << "Enter elements of matrix 2:" << endl;
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
        {
            cout << "Enter element b" << i + 1 << j + 1 << " : ";
            cin >> b[i][j];
        }

    // Initializing elements of matrix mult to 0.
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c2; j++)
        {
            mult[i][j] = 0;
        }

    // Multiplying matrix a and b and storing in array mult.
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c2; j++)
            for (k = 0; k < c1; k++)
            {
                mult[i][j] += a[i][k] * b[k][j];
            }

    // Printing the a first matrix
    cout << "\nEntered Matrix: " << endl;
    for (int i = 0; i < r1; i++ ) {
        for (int j = 0; j < c1  ; j++ ) {
            cout << " " << a[i][j];
            if (j == c1- 1)
                cout << endl << endl;
        }
    }

    // Printing the a second matrix
    cout << "\nEntered Matrix: " << endl;
    for (int i = 0; i < r2;i++) {
        for (int j = 0; j < c2;j++) {
            cout << " " << b[i][j];
            if (j == c2- 1)
                cout << endl << endl;
        }
    }

    // Displaying the multiplication of two matrix.
    cout << endl << "Multi Matrix: " << endl;
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c2; j++)
        {
            cout << "  " << mult[i][j];
            if (j == c2 - 1)
                cout << endl;
        }
    
}
