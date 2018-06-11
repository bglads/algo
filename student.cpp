//Student class to save 5 exam scores and print a total
class Student {
    int scores[5];
    public:
        void input();
        int calculateTotalScore();
};
void Student::input(){
    for(int i =0; i<5;i++){
    cin >> scores[i];
    }
}
int Student::calculateTotalScore(){
    int total = 0;
    for (int i =0;i<5;i++){
        total += scores[i];
    }
    return total;
}
