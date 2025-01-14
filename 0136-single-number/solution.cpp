class Solution {
public:
    int singleNumber(vector<int>& vec) {
     int i, j, count = 0;
    int size = vec.size();
    cout << size << endl;
    for (i = 0; i < size; i++)
    {
        bool hasdub = false;
        for (j = 0; j < size; j++)
        {
            if (i != j && vec[i] == vec[j])
            {
                hasdub = true;
            }
        }
        if (!hasdub)
        {
            // cout << "Ans: " << vec[i] << endl;
            return vec[i];
        }
    }
    return 0;
    }
};
