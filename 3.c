#include <stdio.h>

char * type(int num){
    switch (num)
    {
    case 0 ... 39:
        return "E";
        break;
    case 40 ... 49:
        return "D";
        break;
    case 50 ... 54:
        return "C-";
        break;
    case 55 ... 59:
        return "C";
        break;
    case 60 ... 64:
        return "C+";
        break;
    case 65 ... 69:
        return "B-";
        break;
    case 70 ... 74:
        return "B";
        break;
    case 75 ... 79:
        return "B+";
        break;
    case 80 ... 84:
        return "A-";
        break;
    case 85 ... 100:
        return "A";
        break;
    
    default:
        return "invalid";
        break;
    }
}
int main(){
    int num;
    scanf("%d", &num);
    char *res = type(num);
    printf("%s", res);
}