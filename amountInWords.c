
#include<stdio.h>
/**
Input format : 100 <= n <= 999
Sample input: 456
Sample output : four hundred and fifty four
**/
int main()
{
    while(1)
    {
        char str[3];
        int num, i = 0;
        scanf("%s",str);
        sscanf(str+i,"%d",&num);
        if(num == -1)
        {
            break;
        }
        switch(str[i])
        {
            case '1':
                printf("one hundred");
                break;
            case '2':
                printf("two hundred");
                break;
            case '3':
                printf("three hundred");
                break;
            case '4':
                printf("four hundred");
                break;
            case '5':
                printf("five hundred");
                break;
            case '6':
                printf("six hundred");
                break;
            case '7':
                printf("seven hundred");
                break;
            case '8':
                printf("eight hundred");
                break;
            case '9':
                printf("nine hundred");
                break;
            default:
                break;
        }
        i++;
        if(num % 100 == 0)
        {
            printf(" only\n");
        }
        else
        {
            printf(" and");
            switch(str[i])
            {
                case '1':
                    i++;
                    switch(str[i])
                    {
                        case '0':
                            printf(" ten\n");
                            break;
                        case '1':
                            printf(" eleven\n");
                            break;
                        case '2':
                            printf(" twelve\n");
                            break;
                        case '3':
                            printf(" thirteen\n");
                            break;
                        case '4':
                            printf(" fourteen\n");
                            break;
                        case '5':
                            printf(" fifteen\n");
                            break;
                        case '6':
                            printf(" sixteen\n");
                            break;
                        case '7':
                            printf(" seventeen\n");
                            break;
                        case '8':
                            printf(" eighteen\n");
                            break;
                        case '9':
                            printf(" nineteen\n");
                            break;
                        default:
                            break;
                    }
                case '2':
                    printf(" twenty");
                    break;
                case '3':
                    printf(" thirty");
                    break;
                case '4':
                    printf(" forty");
                    break;
                case '5':
                    printf(" fifty");
                    break;
                case '6':
                    printf(" sixty");
                    break;
                case '7':
                    printf(" seventy");
                    break;
                case '8':
                    printf(" eighty");
                    break;
                case '9':
                    printf(" ninety");
                    break;
                default:
                    break;
            }
            i++;
            switch(str[i])
            {
                case '0':
                    break;
                case '1':
                    printf(" one\n");
                    break;
                case '2':
                    printf(" two\n");
                    break;
                case '3':
                    printf(" three\n");
                    break;
                case '4':
                    printf(" four\n");
                    break;
                case '5':
                    printf(" five\n");
                    break;
                case '6':
                    printf(" six\n");
                    break;
                case '7':
                    printf(" seven\n");
                    break;
                case '8':
                    printf(" eight\n");
                    break;
                case '9':
                    printf(" nine\n");
                    break;
                default:
                    break;
            }
        }
    }
    return 0;
}