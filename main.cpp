#include <cstdio>
#include <cstring>
#include "StudentClass.hpp"
#include "func.hpp"

int main() {
    // 객체 생성, 값 대입
    auto stdt = new Student;
    
    scs("Name: ", stdt->name);
    scs("Gender: ", stdt->gender);
    sci("Grade: ", &(stdt->grade));
    sci("Class: ", &(stdt->Class));
    sci("Number: ", &(stdt->num)); 
    
    // 값 출력 , 할당공간 삭제 및 프로그램 종료 (0 반환)
    printf("* Info ---------\n");
    printf("Name: %s\n", stdt->name);
    printf("Gender: %s\n", stdt->gender);
    printf("Grade: %d\n", stdt->grade);
    printf("Class: %d\n", stdt->Class);
    printf("Number: %d\n", stdt->num);
    
    delete stdt;
    return 0;
}
