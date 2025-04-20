#include <iostream>
#include <cstdlib>
using namespace std;

int ReadLength(string Message)
{
    int number;
    cout << Message << endl;
    cin >> number;
    return number;

}

int RandomNumber(int From, int To)
{
    
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void FillArrayWithRandomNumber(int arr[100], int arrLength)
{
    
    for (int i = 0; i < arrLength; i++)
       arr[i] = RandomNumber(1, 100);


}

int MaxNumberInArray(int arr[100], int arrLength)

{
    int Max = 0;
    for (int i = 0; i < arrLength; i++)
    {
        if (arr[i] > Max)
        {
            Max = arr[i];
        }
    }
    return Max;
}


void PrintArray(int arr[100], int arrLength)
{
   
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";

    cout << "\n"; 
}

int main()
{

    srand((unsigned)time(NULL));

    int Length = ReadLength("Please enter your Length : ");
    int Arr[100];

    FillArrayWithRandomNumber(Arr, Length);

    cout << "Array Elements : ";
    PrintArray(Arr, Length);

    cout << "\n";
    cout << "Max Number is : ";
    cout << MaxNumberInArray(Arr, Length);
   
}

