#include <iostream>
using namespace std;

int main()
{
    int nums[] = {2,7,11,15};
    int numsLength = end(nums) - begin(nums);
    int target = 9;
    
    for(int i = 0; i < numsLength; i++)
    {
        for(int j = i + 1; j < numsLength; j++)
        {
            if(nums[i] + nums[j] == target)
            {
                cout << "[" << i << ", " << j << "]" << endl;
                return 1;
            }
        }
    }
    cout << "not found";
    return 0;
}

//must use << as concatenation operator with cout
//dataType arrayName[arraySize]