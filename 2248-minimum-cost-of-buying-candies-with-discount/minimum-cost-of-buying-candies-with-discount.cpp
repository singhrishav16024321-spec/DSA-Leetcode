class Solution {
public:
    int minimumCost(vector<int>& cost) {

        int n = cost.size();

        cout << "n = " << n << endl;

        // Bubble Sort with bounds checking
        for (int i = 0; i < n; i++) {

            cout << "Outer i = " << i << endl;

            for (int j = 0; j < n - i - 1; j++) {

                cout << "  j = " << j << endl;

                if (cost.at(j) > cost.at(j + 1)) {

                    int temp = cost.at(j);

                    cost.at(j) = cost.at(j + 1);

                    cost.at(j + 1) = temp;
                }
            }
        }

        int count = 0;
        int pd = 0;

        for (int i = n - 1; i >= 0; i--) {

            cout << "Reading index i = " << i << endl;

            if (count == 2) {
                count = 0;
            }
            else {
                pd += cost.at(i);
                count++;
            }
        }

        return pd;
    }
};