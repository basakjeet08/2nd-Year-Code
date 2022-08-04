#include <stdio.h>
struct stundent{
    int roll;
    struct marks m;
};
struct marks {
    int marks;
};
void cal(struct student*);
void call(struct marks*);
int main(){
    struct student stu[1];
    cal(stu);
    call(&(stu[0].marks));
    return 0;

}
void cal(struct student* stu ){
    stu->roll = 12;
}