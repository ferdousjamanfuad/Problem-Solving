class Solution
{
public:
    int removeDuplicates(vector<int> &arr)
    {
        int index = 0;
        for (int i = 1; i < arr.size(); i++)
        {
            if (arr[i - 1] != arr[i])
            {
                index++;
                arr[index] = arr[i];// only unique are stored in arr
            }
        }
        return index + 1;//need to resieze,still duplicte can be in the last indexes
    }
};