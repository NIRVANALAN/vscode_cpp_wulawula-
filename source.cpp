#include <iostream>
#include <vector>
#include <string>
using namespace std;
#define STU_NUM 20

struct student
{
    int id;
    string name;
};

student STUDENT[STU_NUM] = {{930, "lan"}, {931, "wang"}, {932, "li"}, {933, "liu"}, {934, "zhang"}, {935, "gao"}, {936, "xu"}, {937, "ma"}};
void sequence_search(int id, student (&STUDENT)[STU_NUM])
{
    for (auto element : STUDENT)
    {
        if (element.id == id)
        {
            cout << "get the student whose id is: " << id << endl;
            cout << "his/her name is " << element.name << endl;
        }
    }
}
void binary_search(int id,student(&STUDENT)[STU_NUM]){

}
// int arr[13] = {4, 5, 6, 2, 1, 5, 6, 8, 1, 1, 0, 9, 8};
void sort_test(int arr[])
{
    auto arr_length = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + arr_length, less<int>()); // ascending order
    cout << arr[1] << endl;
}
int main(int argc, char const *argv[])
{
    // sequence_search(935, STUDENT);
    binary_search(936,STUDENT);
    // system("pause");
    return 0;
}
