/*this programme is to find no.of days are there in a month by using switch */
#include<stdio.h>
int main() {
             int num;
             printf("give a number 1-12 months");
             scanf("%d",&num);
             switch(num) {
                          case 1:
                                  printf("total no.of days = 31");
                                   break;
                          case 2:
                                  printf("total no.of days = 28 or leapyear 29");
                                   break;
                          case 3:
                                  printf("total no.of days = 31 ");
                                   break;
                          case 4:
                                  printf("total no.of days = 30");
                                   break;
                          case 5:
                                  printf("total no.of days = 31");
                                    break;
                          case 6:
                                  printf("total no.of days = 30");
                                   break;
                          case 7:
                                  printf("total no.of days = 31");
                                     break;
                          case 8:
                                  printf("total no.of days = 31");
                                    break;
                          case 9:
                                  printf("total no.of days = 30");
                                      break;
                          case 10:
                                  printf("total no.of days = 31");
                                       break;
                          case 11:
                                  printf("total no.of days = 30");
                                        break;
                          case 12:
                                  printf("total no.of days = 31");
                                        break;
                          default: 
                                  printf("out of range");
                         }
                return 0;
       }

