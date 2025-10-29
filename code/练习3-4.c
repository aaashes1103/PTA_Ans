#include <stdio.h>
#define MAXS 10

void StringCount( char s[] );
void ReadString( char s[] );

int main()
{
    char s[MAXS+1];

    ReadString(s);
    StringCount(s);

    return 0;
}

void ReadString( char s[] ){
    for(int i=0;i<MAXS;i++){
        s[i]=getchar();
    }
}

void StringCount( char s[] ){
    struct Count{
        int letter;
        int blank;
        int digit;
        int other;
    };
    struct Count count={0,0,0,0};
    int i=0;
    while (s[i] != '\0') {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {
            count.letter++;
        } else if (s[i] == ' ' || s[i] == '\n' || s[i] == '\r') {
            count.blank++;
        } else if (s[i] >= '0' && s[i] <= '9') {
            count.digit++;
        } else {
            count.other++;
        }
        i++;
    }
    printf("letter = %d, ",count.letter);
    printf("blank = %d, ",count.blank);
    printf("digit = %d, ",count.digit);
    printf("other = %d",count.other);
}