// TestString2.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>
#include <string.h>
#include <malloc.h>

int main()
{
    char myString[] = "123456789";    
        
    printf("문자열 : %s\n",  myString);                            // 123456789
    printf("문자열 길이 : %u\n", (int)strlen(myString));           // 9
    printf("sizeof(myString) = %zu\n", sizeof(myString));          // 10
    printf("\n");


    char my123[] = "12";

    printf("문자열 : %s\n", my123);                             // 12
    printf("문자열 길이 : %u\n", (int)strlen(my123));           // 2
    printf("sizeof(myString) = %zu\n", sizeof(my123));          // 3
    printf("\n");
    
    // 아래문장은 허용되지 않는다.
    // my123 = "456";
    // strcpy_s(my123, "456");
    // printf("my123 = %s\n", my123);

    // 문자열을 새로운 변수에 대입하기 위한 옳바른 방법
    int nLen = sizeof(myString);
    char* newString = (char *)malloc(nLen);
    if (newString != NULL)
    {
        strcpy_s(newString, nLen, myString);
        printf("newString is %s\n", newString);
        printf("문자열 길이 : %u\n", (int)strlen(newString));           // 
        printf("sizeof(newString) = %zu\n", sizeof(newString));         //
        printf("\n");
    }

    if ( newString ) 
    {
        free(newString);
        newString = NULL;
    }




    char* psz = my123;
    printf("%s\n", psz);
    printf("문자열 길이 : %u\n", (int)strlen(psz));           // 2
    printf("sizeof(psz) = %zu\n", sizeof(psz));          // 3
    printf("\n");

    psz = myString;
    printf("%s\n", psz);
    printf("문자열 길이 : %u\n", (int)strlen(psz));           // 
    printf("sizeof(psz) = %zu\n", sizeof(psz));          // 
    printf("\n");

    printf("문자열은 배열이다\n");
    for (int i = 0; i < strlen(myString); i++)
    {
        printf("%c", myString[i]);
    }
    printf("\n\n");

    for (int i = 0; i < strlen(myString); i++)
    {
        printf("myString[%d] = %c\n", i, myString[i]);
    }
    printf("\n\n");

    printf("sizeof(int) = %zd\n", sizeof(int));
    printf("sizeof(long) = %zd\n", sizeof(long));
    printf("sizeof(long long) = %zd\n", sizeof(long long));
    printf("\n");

    int* p = NULL;
    int i = 10;
    p = &i;
    printf("i=%d, *p=%d\n", i, *p);
    printf("p=%x, &i=%x\n", p, &i);
    printf("sizeof(p) = %zd\n", sizeof(p));
    printf("\n");

    short* ps;
    short j = 5;
    ps = &j;
    printf("j=%d, *ps=%d\n", j, *ps);
    printf("ps=%x, &j=%x\n", ps, &j);
    printf("sizeof(ps) = %zd\n", sizeof(ps));




    
    return 0;
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
