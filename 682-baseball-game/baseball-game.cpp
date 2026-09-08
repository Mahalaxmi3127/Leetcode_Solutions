class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> record;
        for (int i = 0; i < operations.size(); i++) {
            string op = operations[i];
            if (op == "C") {
                record.pop_back();
            }
            else if (op == "D") {
                record.push_back(record.back() * 2);
            }
            else if (op == "+") {
                int n = record.size();
                record.push_back(record[n - 1] + record[n - 2]);
            }
            else {
                record.push_back(stoi(op));
            }
        }
        int sum = 0;
        for (int i = 0; i < record.size(); i++) {
            int score = record[i];
            sum += score;
        }
        return sum;
    }
};