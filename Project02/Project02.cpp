#include <stdio.h>

int main()
{
    char n;
    short num;
    int score;
    long money;
    long long big_number;
    //sizeof 연산자
    //type또는 변수의 크기를 바이트 단위로 알려주는 연산자
    printf("n의 크기 %hhd\n", sizeof(n)); //2^8개의 서로 다른 데이터를 저장할 수 있다.
    printf("num의 크기 %hd\n", sizeof(short)); //2^16개의 서로 다른 데이터를 저장할 수 있다.
    printf("score의 크기 %d\n", sizeof(int)); //2^32의 서로 다른 데이터를 저장할 수 있다.
    printf("money의 크기 %ld\n", sizeof(long));//2^32의 서로 다른 데이터를 저장할 수 있다.
    printf("big_number의 크기 %lld\n", sizeof(long long));//2^64의 서로 다른 데이터를 저장할 수 있다.

    printf("double의 크기 %ld\n", sizeof(double));

    n = 127;
    printf("n의 값 : %d\n", n);

    n = 128;
    printf("n의 값 : %d\n", n);
    

    //형식문자(Formatted String) 
    //%d : 값을 정수형으로 표현한다
    //%u : 값을 양의 정수형으로 표현한다
    //%f : 값을 실수형으로 표현한다.
    //%x : 값을 16진수로 표현한다.
    //%o : 값을 8진수로 표현한다.
    //%e : 값을 지수형으로 표현한다.
    //%c : 값을 문자로 표현한다.
    n = 'A';
    printf("n을 문자로 표현 : %c\n", n);
    printf("n을 문자로 표현 : %c\n", n);

    //10

    printf("정수의 출력 : %5d\n", 10);
    printf("정수의 출력 : %-5d\n", 10);
    printf("실수의 출력 : %6.2f\n", 180.78);
    printf("정수의 출력 : %.2f\n", 112312380128390.123918237);
    n = 10;
        big_number = 1234565789;
        score = 12345;

        num = 123;
        money = 987654321;
    printf("%hd\n", num);
    printf("%hhd\n", n);
    printf("%d\n", score);
    printf("%lld\n", big_number);
    printf("%ld\n", money);
    
    unsigned char age;
    age = 200;
    printf("사람의 최대 수명은 : %d\n", age);

   //*
    //%d와 %u의 세분화


    double d;
    d = 100.0;
    printf("double의 값 : %f\n", d);
    printf("double의 값 : %e\n", d);



    return 0;
}


//Data Type
//정수 : 양수, 0, 음수
// char(1), short(2), int(4), long(W : 4, M : 8), long long(8)
//실수 : 소수점을 포함한 숫자
// float(4), doulbe(8), long double
