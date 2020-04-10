vector<int> gradingStudents(vector<int> grades) {
    vector<int> res;
    for (int i = 0; i < grades.size(); ++i) {
        if (grades[i] < 38){
            res.push_back(grades[i]);
        }
        else if (grades[i] % 5 >= 3){
            int num = grades[i];
            while (num % 5 != 0) {
                num += 1;
            }
            res.push_back(num);
        }
        else {
            res.push_back(grades[i]);
        }
    }
    return res;

}
