#include<iostream>
struct Grade
{
    std::string course,grade;
    float credits;
};
Grade grades[100];
struct GTable
{
    std::string grade;
    float gp;
};
GTable table[] = {{"A",4.0},{"A-",3.7},{"B+",3.3},{"B",3.0},{"B-,2.7"},{"C+",2.3}
,{"C",2.0},{"C-",1.7},{"D+",1.3},{"D",1.0},{"F",0.0}};

float gp(std::string);

int main() {
    int n;
    std::cin >> n;
    for(int i = 0;i < n;i++) {
        std::cin >> grades[i].course;
        std::cin >> grades[i].grade;
        std::cin >> grades[i].credits;
    }
    float ttl_grade = 0;
    float ttl_credit = 0;
    for(int i = 0;i < n;i++) {
        ttl_grade += gp(grades[i].grade) * grades[i].credits;
        ttl_credit += grades[i].credits;
    }
    float gpa;
    gpa = ttl_grade / ttl_credit;
    std::cout << "GPA = " << gpa << std::endl;
    return 0;
}
float gp(std::string grade) {
    int size = sizeof(table) / sizeof(table[0]);
    for(int i = 0;i < size;i++) {
        if(grade == table[i].grade) {
            return table[i].gp;
        }
    }
    return 0.0;
}
