/**
 ============================================================================
 \name       : zeller.c
 \author     : imoren2x (imoren2x@users.sourcefourge.net)
 \version    : 1.0.0
 \date         :
 Copyright   : Your copyright notice
 \   : Zeller congruence implementation, using ISO 8601.
 \param         : No arguments and input through console
             : Charstring "yyyy-mm-dd" (e.g., 1981-01-27)
 ============================================================================
 */

/*
  Changelog:

  Date       | Author        | Description
  ------------------------------------------
  2012-04-13   imoren2x         First version.
  2015-11-05   imoren2x         Revision

 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TESTMODE 0
#define tprintf(expr) if(TESTMODE) printf(#expr " = %d\n", expr)
#define tprintfs(expr) if(TESTMODE) printf("\n"#expr " = %s\n", expr)

//struct definition of arguments
struct args {
    int year;
    int month;
    int day;
};
typedef char* string;

//Main functions
struct args* parse_args(int argc, char *argv[]);
void         print_day_of_week(int year, int month, int day);
int          zeller(int year, int month, int day);

//Auxiliary functions
void         parse_from_stdin(struct args *pargs);
void         parse_from_argv(char *argv[], struct args *pargs);
string       int2day(int day_of_week);


int main(int argc, char *argv[]) {

    //Parse arguments from command-line
    struct args *a = parse_args(argc, argv);

    print_day_of_week(a->year, a->month, a->day);

    //system("pause");
    return 0;
}

struct args* parse_args(int argc, char *argv[]) {

    struct args *pargs = (struct args*) malloc(sizeof(struct args));

    switch(argc) {
      case 1:
        parse_from_stdin(pargs);
        break;
      case 2:
        parse_from_argv(argv, pargs);
        break;
      default:
        printf("\n Unexpected error.");
    }

    return pargs;
}

void print_day_of_week(int year, int month, int day) {
    //
    int day_of_week;
    char *str_day_of_week; //Day of week in string format//

    day_of_week = zeller(year, month, day);
    str_day_of_week = int2day(day_of_week);

    printf("\n Day of the week: %s \n", str_day_of_week);
}

int zeller(int year, int month, int day) {

    int temp1, temp2, temp3;
    int dividend, result;

    //Apply Zeller congruence//
    tprintf(year); tprintf(month); tprintf(day);

    temp1 = (14 - month) / 12;
    tprintf(temp1);

    temp2 = year - temp1;
    tprintf(temp2);

    temp3 = month + 12 * temp1 - 2;
    tprintf(temp3);

    dividend = (day + temp2 + temp2/4 - temp2/100 + temp2/400 + (31*temp3)/12);
    result = dividend % 7;
    tprintf(result);

    return result;
}

void parse_from_stdin(struct args *pargs) {
    //Insert date//
    fflush(stdin);
    printf("\n Write the date in ISO 8601 format (yyyy-mm-dd, e.g., 1981-01-27)\n");
    printf(">> ");
    scanf("%d-%d-%d", &(pargs->year), &(pargs->month), &(pargs->day));

    //Print debug information
    tprintf(pargs->year);
    tprintf(pargs->month);
    tprintf(pargs->day);
}

void parse_from_argv(char *argv[], struct args *pargs) {
    //
    printf("\n Date: %s\n", argv[1]);

    //Parse year as string
    char *sAux = argv[1];
    char *sYear = (char*) malloc(5*sizeof(char));
    strncpy(sYear, sAux, 4);
    sYear[4] = '\0';
    tprintfs(sYear);

    //Parse month as string
    char *sMonth = (char*) malloc(3*sizeof(char));
    strncpy(sMonth, &sAux[5], 2);
    sMonth[2] = '\0';
    tprintfs(sMonth);

    //Parse day as string
    char *sDay = (char*) malloc(3*sizeof(char));
    strncpy(sDay, &sAux[8], 2);
    sMonth[2] = '\0';
    tprintfs(sDay);

    //Convert from string to int
    pargs->year  = atoi(sYear);
    pargs->month = atoi(sMonth);
    pargs->day   = atoi(sDay);
}

string int2day(int day_of_week) {
    switch(day_of_week) {
        case 0: return "sunday"; break;
        case 1: return "monday"; break;
        case 2: return "tuesday"; break;
        case 3: return "wednesday"; break;
        case 4: return "thursday"; break;
        case 5: return "friday"; break;
        case 6: return "saturday"; break;

        default: printf("\n Non-valid input.");
    }
}
