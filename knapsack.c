#include <stdio.h>

int maxElement(int num1, int num2); // declaring functions maxElement and maxValue
int maxValue(int N, int W, int weights[], int values[]);

int main()
{
    int N, W;
    scanf("%d %d", &N, &W); // taking N and W input from user
    int weights[N]; // creating an integer array named weights of size N
    int values[N]; // creating an integer array named values of size N
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &weights[i]); // taking the weight of the objects input from user are storing it into array weights
    }
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &values[i]); // taking the values of the objects input from user are storing it into array values
    }
    printf("%d", maxValue(N, W, weights, values)); // calling the function maxValue and the value returned by the function is printed
    return 0;
}

int maxValue(int N, int W, int weights[], int values[])
{
    int temp[N + 1][W + 1]; // creating a 2D array named temp to hold the maximum values when we pick an item
    for (int i = 0; i <= N; i++) // going through the rows
    {
        for (int w = 0; w <= W; w++) // going through columns
        {
            if (i == 0 || w == 0) // when value of i is 0 or w is 0 that is for the 0 th column
            {
                temp[i][w] = 0; // 0 is copied in i th row and w th column
            }
            else if (weights[i - 1] <= w) // when current capacity is greater than weight it can
            {
                // we check if it is profitable to take the weight
                temp[i][w] = maxElement(values[i - 1] + temp[i - 1][w - weights[i - 1]], temp[i - 1][w]);
            }
            else // else we copy the value from the last row
            {
                temp[i][w] = temp[i - 1][w]; // value at i-1 th row and w th column in i th row and w th column
            }
        }
    }
    return temp[N][W]; // value at N th row and W th column is returned
}

int maxElement(int num1, int num2) // function to find and return the maximum value of two elements
{
    if (num1 > num2) // if value in variable num1 is greater than value in variable num2
    {
        return num1; // then value in variable num1 is returned
    }
    else
    {
        return num2; // else value in variable num2 is returned
    }
}
