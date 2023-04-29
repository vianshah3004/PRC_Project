//main page
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
int trainer(int month,int trainsplaner)
{
    int tem,tim,trainer_price;
    printf("\n - Do you want trainer 1 for yes and 0 for no : ");
        scanf("%d",&tem);
        if(tem==1)
        {
        trainer_price=month+trainsplaner;
             return  trainer_price ;
        }
        else{
            trainer_price=month;
            return trainer_price;
        }

}

void pay()
{
    int PAY,CARD_NUM,CVV,PIN;
    int UPI[50];
    edit_1:
    printf("\n\n - How would you like to pay ? (Press 1 - Cash; 2 - Smart Card; 3 - On-line Payment) : ");
    scanf("%d",&PAY);
    system("cls");
    printf("\n - Lets proceed towards payment !!!\n");
    char PASS[10]="pass";
    char UNI_CODE[10];
    switch(PAY)
    {
        case 1:
            printf("\n - You will have to pay cash on Hotel Reception Desks (On visit)\n\n");
            break;
        case 2:
            printf("\n - Enter Card Number : ");
            scanf("%d",&CARD_NUM);
            printf("\n - Enter CVV : ");
            scanf("%d",&CVV);
            printf("\n - Enter PIN : ");
            scanf("%d",&PIN);
            printf("\n - Your payment is successful !!!\n\n");
            break;
        case 3:
            printf("\n - Enter UPI Id : ");
            scanf("%s",&UPI);
            printf("\n - Enter PIN : ");
            scanf("%d",&PIN);
            printf("\n - Your payment is successful !!!\n\n");
            break;
        default:
            printf("\n\n - Invalid Input !!!\n\n");
            goto edit_1;
    }
}
void main()
{
    system("color 70");
    int choice;
    int tom,month=1500,months=8000,year=15000,trainsplaner;
    printf(" - Welcome to Ace\n\n");
    printf("\t1. Press 1 for Room Booking\n");
    printf("\t2. Press 2 for Ace restaurant\n");
    printf("\t3. Press 3 for Banquet Hall\n");
    printf("\t4. Press 4 for Gym membership\n\n");
     starting:
    printf(" - Please Enter your choice: ");
    scanf("%d",&choice);
    if(choice<1||choice>4)
    {
        printf("\n \t Wrong Input Please Enter the Number again\n\n");
        goto starting;
    }
    switch(choice)
    {
    case 1:
        printf("\t\t\t\t\n - Welcome to Ace Hotel -\n\n");
    system("color 70");
    int I,R_TYPE,NUM_ROOM,INFO,NUM_ROOM_QTY,ROOM_EDIT,NUM_ROOM_DAY,TOTAL_COST,MEAL,NUM_MEAL,TOT_ROOM,TOT_MEAL,TOT_PRE,TOT_POST,TOTAL_AMT,DISCOUNT,GST;
    char NAME[10],SURNAME[10],NUM[10],AADHAAR[12],dough[20],toppings[100];
    int len;
    printf("\n");
    printf("\t\t-----------------\n");
    printf("\t\t| - ACE Hotel - |\n");
    printf("\t\t-----------------\n");
    printf("\n");
    printf(" - What kind of room would you like to have ???\n\n - Press : \n     1-Deluxe Room; \n     2-Premium Room; \n     3-Regular Room;\n");
    printf(" \n 1 Deluxe Room\n - Facilities\n    1.325 sq.ft\n    2.Free Pickup Drop Service\n    3.Free Hotel Lounge access\n    4.Free Hamper\n\n 2 Premium Room\n - Facilities\n    1.270 sq.ft\n    2.Free Pickup Drop Service\n    3.Free Hamper\n\n 3 Regular Room\n - Facilities\n    1.200 sq.ft\n    2.Free Hamper\n\n");
    start:
    printf(" - Choose the type of Room : ");
    scanf("%d",&R_TYPE);
    system("cls");
    switch(R_TYPE)
    {



        case 1:
            system("cls");
            printf("\n");
            printf(" - You have chosen Deluxe Room.\n\n");
            printf(" - Lets start with the registration of your room\n");
            edit:
            printf("\n - Enter Your Name : ");
            scanf("%s%s",&NAME,&SURNAME);
            phone:
            printf("\n - Enter Phone Number : ");
            scanf("%s",&NUM);
            len=strlen(NUM);
            if(len!=10)
            {
                printf("\n - Enter 10 digit phone number\n");
                goto phone;
            }
            aadhaar:
            printf("\n - Enter Aadhaar Number : ");
            scanf("%s",&AADHAAR);
            len=strlen(AADHAAR);
            if(len!=12)
            {
                printf("\n - Enter a valid 12 digit Aadhaar Number\n");
                goto aadhaar;
            }
            error:
            printf("\n - Would you like to edit your information ? (Press 1 if yes else 0) : ");
            scanf("%d",&INFO);
            if(INFO==1)
            {
                goto edit;
            }
            else if(INFO==0)
            {
                printf("\n - You have successfully registered your data !!!\n\n");
            }
            else
            {
                printf("\n - Invalid input !!!\n");
                goto error;
            }
            system("cls");
            edit_3:
            printf("\n - Would you like to have more rooms ??? ( Press 1 if yes else 0 ) : ");
            scanf("%d",&NUM_ROOM);
            if(NUM_ROOM==1)
                {
                    room_edit:
                    printf("\n - Enter the number of rooms you want to book : ");
                    scanf("%d",&NUM_ROOM_QTY);
                    if(NUM_ROOM_QTY==0)
                    {
                        printf("\n - Number of rooms cannot be 0.\n");
                        goto room_edit;
                    }
                }
                else if(NUM_ROOM==0)
                {
                    NUM_ROOM_QTY=1;
                }
                else
                {
                    printf("\n - Invalid Input !!! \n");
                    goto edit_3;
                }
                room_day:
                printf("\n - Enter the number of days you want rooms : ");
                scanf("%d",&NUM_ROOM_DAY);
                if(NUM_ROOM_DAY==0)
                {
                    printf("\n - Number of days cannot be 0.\n");
                    goto room_day;
                }
                ROOM_EDIT:
                printf("\n - Would you like to edit ? ( Press 1 if Yes else 0 ) : ");
                scanf("%d",&ROOM_EDIT);
                if(ROOM_EDIT==1)
                {
                    goto room_edit;
                }
                else if(ROOM_EDIT==0){}
                else
                {
                    goto ROOM_EDIT;
                }
                TOTAL_COST =  3000 * NUM_ROOM_QTY * NUM_ROOM_DAY;
                printf("\n - Your Total bill is Rs.%d.\n",TOTAL_COST);
                printf("\n");
                system("pause");
        break;



        case 2:
             system("cls");
            printf("\n");
            printf(" - You have chosen Premium Room.\n\n");
            printf(" - Lets start with the registration of your room\n");
            edit1:
            printf("\n - Enter Your Name : ");
            scanf("%s%s",&NAME,&SURNAME);
           phone1:
            printf("\n - Enter Phone Number : ");
            scanf("%s",&NUM);
             len=strlen(NUM);
            if(len!=10)
            {
                printf("\n - Enter 10 digit phone number\n");
                goto phone1;
            }
            aadhaar1:
            printf("\n - Enter Aadhaar Number : ");
            scanf("%s",&AADHAAR);
           len=strlen(AADHAAR);
            if(len!=12)
            {
                printf("\n - Enter a valid 12 digit Aadhaar Number\n");
                goto aadhaar1;
            }
            error1:
            printf("\n - Would you like to edit your information ? (Press 1 if yes else 0) : ");
            scanf("%d",&INFO);
            if(INFO==1)
            {
                goto edit1;
            }
            else if(INFO==0)
            {
                printf("\n - You have successfully registered your data !!!\n\n");
            }
            else
            {
                printf("\n - Invalid input !!!\n");
                goto error1;
            }
            system("cls");
            edit1_3:
            printf("\n - Would you like to have more rooms ??? ( Press 1 if yes else 0 ) : ");
            scanf("%d",&NUM_ROOM);
            if(NUM_ROOM==1)
                {
                    room1_edit:
                    printf("\n - Enter the number of rooms you want to book : ");
                    scanf("%d",&NUM_ROOM_QTY);
                    if(NUM_ROOM_QTY==0)
                    {
                        printf("\n - Number of rooms cannot be 0.\n");
                        goto room1_edit;
                    }
                }
                else if(NUM_ROOM==0)
                {
                    NUM_ROOM_QTY=1;
                }
                else
                {
                    printf("\n - Invalid Input !!! \n");
                    goto edit1_3;
                }
                room1_day:
                printf("\n - Enter the number of days you want rooms : ");
                scanf("%d",&NUM_ROOM_DAY);
                if(NUM_ROOM_DAY==0)
                {
                    printf("\n - Number of days cannot be 0.\n");
                    goto room1_day;
                }
                ROOM1_EDIT:
                printf("\n - Would you like to edit ? ( Press 1 if Yes else 0 ) : ");
                scanf("%d",&ROOM_EDIT);
                if(ROOM_EDIT==1)
                {
                    goto room1_edit;
                }
                else if(ROOM_EDIT==0){}
                else
                {
                    goto ROOM1_EDIT;
                }
                TOTAL_COST = NUM_ROOM_QTY * NUM_ROOM_DAY * 2000;
                printf("\n - Your Total bill is Rs.%d.\n",TOTAL_COST);
                printf("\n");
                system("pause");
        break;
        case 3:
             system("cls");
            printf("\n");
            printf(" - You have chosen Regular Room.\n\n");
            printf(" - Lets start with the registration of your room\n");
            edit2:
            printf("\n - Enter Your Name : ");
            scanf("%s%s",&NAME[10],&SURNAME[10]);
           phone2:
            printf("\n - Enter Phone Number : ");
            scanf("%s",&NUM);
             len=strlen(NUM);
            if(len!=10)
            {
                printf("\n - Enter 10 digit phone number\n");
                goto phone2;
            }
            aadhaar2:
            printf("\n - Enter Aadhaar Number : ");
            scanf("%s",&AADHAAR);
           len=strlen(AADHAAR);
            if(len!=12)
            {
                printf("\n - Enter a valid 12 digit Aadhaar Number\n");
                goto aadhaar2;
            }
            error2:
            printf("\n - Would you like to edit your information ? (Press 1 if yes else 0) : ");
            scanf("%d",&INFO);
            if(INFO==1)
            {
                goto edit2;
            }
            else if(INFO==0)
            {
                printf("\n - You have successfully registered your data !!!\n\n");
            }
            else
            {
                printf("\n - Invalid input !!!\n");
                goto error2;
            }
            system("cls");
            edit2_3:
            printf("\n - Would you like to have more rooms ??? ( Press 1 if yes else 0 ) : ");
            scanf("%d",&NUM_ROOM);
            if(NUM_ROOM==1)
                {
                    room2_edit:
                    printf("\n - Enter the number of rooms you want to book : ");
                    scanf("%d",&NUM_ROOM_QTY);
                    if(NUM_ROOM_QTY==0)
                    {
                        printf("\n - Number of rooms cannot be 0.\n");
                        goto room2_edit;
                    }
                }
                else if(NUM_ROOM==0)
                {
                    NUM_ROOM_QTY=1;
                }
                else
                {
                    printf("\n - Invalid Input !!! \n");
                    goto edit2_3;
                }
                room2_day:
                printf("\n - Enter the number of days you want rooms : ");
                scanf("%d",&NUM_ROOM_DAY);
                if(NUM_ROOM_DAY==0)
                {
                    printf("\n - Number of days cannot be 0.\n");
                    goto room2_day;
                }
                ROOM2_EDIT:
                printf("\n - Would you like to edit ? ( Press 1 if Yes else 0 ) : ");
                scanf("%d",&ROOM_EDIT);
                if(ROOM_EDIT==1)
                {
                    goto room2_edit;
                }
                else if(ROOM_EDIT==0){}
                else
                {
                    goto ROOM2_EDIT;
                }
                TOTAL_COST = NUM_ROOM_QTY * NUM_ROOM_DAY * 1000;
                printf("\n - Your Total bill is Rs.%d.\n",TOTAL_COST);
                printf("\n");
                system("pause");
        break;



        default:
            printf("\n - Invalid input !!! \n\n");
            goto start;
    }
    system("cls");
            printf("\n - Meal Booking !!!\n");
            printf("\n   1 Breakfast : Rs.100\n   2 Lunch : Rs.300\n   3 Dinner : Rs.500\n");
            printf("\n - Enter :\n     123:All;\n     12:Breakfast and Lunch;\n     13:Breakfast and Dinner;\n     23:Lunch and Dinner;\n     1:Breakfast;\n     2:Lunch;\n     3:Dinner;\n     0:None;\n");
            meal_edit:
            printf("\n - Select the type of meal package : ");
            scanf("%d",&MEAL);
            if(MEAL==123)
            {
                printf("\n - You have selected All in One Meal Package.\n");
            }
            else if(MEAL==12)
            {
                printf("\n - You have selected Breakfast and Lunch.\n");
            }
            else if(MEAL==13)
            {
                printf("\n - You have selected Breakfast and Dinner.\n");
            }
            else if(MEAL==23)
            {
                printf("\n - You have selected Lunch and Dinner.\n");
            }
            else if(MEAL==1)
            {
                printf("\n - You have selected Breakfast.\n");
            }
            else if(MEAL==2)
            {
                printf("\n - You have selected Lunch.\n");
            }
            else if(MEAL==3)
            {
                printf("\n - You have selected Dinner.\n");
            }
            else if(MEAL==0)
            {
                printf("\n - No meal selected\n");
            }
            else
            {
                printf("\n - Invalid Input\n");
                goto meal_edit;
            }
            printf("\n - Enter Number of Meals you want according to members : ");
            scanf("%d",&NUM_MEAL);
            int MEAL_EDIT;
            meal1_edit:
            printf("\n - Would you like to change your Meal type ? ( Press 1 if Yes else 0) : ");
            scanf("%d",&MEAL_EDIT);
            if (MEAL_EDIT==1)
            {
                goto meal_edit;
            }
            else if (MEAL_EDIT==0)
            {
                if(MEAL==0)
                {
                    goto NO_MEAL_EDIT;
                }
            }
            else
            {
                printf("\n - Invalid Input !!!\n");
                goto meal1_edit;
            }
            NO_MEAL_EDIT:
            if(MEAL==123)
            {
                printf("\n - Your total cost for meal is Rs.%d\n",NUM_ROOM_DAY*NUM_MEAL*849);
            }
            else if(MEAL==12)
            {
                printf("\n - Your total cost for meal is Rs.%d\n",NUM_ROOM_DAY*NUM_MEAL*399);
            }
            else if(MEAL==13)
            {
                printf("\n - Your total cost for meal is Rs.%d\n",NUM_ROOM_DAY*NUM_MEAL*599);
            }
            else if(MEAL==23)
            {
                printf("\n - Your total cost for meal is Rs.%d\n",NUM_ROOM_DAY*NUM_MEAL*799);
            }
            else if(MEAL==1)
            {
                printf("\n - Your total cost for meal is Rs.%d\n",NUM_ROOM_DAY*NUM_MEAL*100);
            }
            else if(MEAL==2)
            {
                printf("\n - Your total cost for meal is Rs.%d\n",NUM_ROOM_DAY*NUM_MEAL*300);
            }
            else if(MEAL==3)
            {
                printf("\n - Your total cost for meal is Rs.%d\n",NUM_ROOM_DAY*NUM_MEAL*500);
            }
            else if(MEAL==0)
            {
                printf("\n - No meal selected\n");
            }
            printf("\n");
            system("pause");
            system("cls");
            printf("\n");
            printf("\t\t\t\t    ACE Hotel\n");
            printf("\t\t\t\t----------------\n");
            printf("\t\t\t\t|    Invoice   |\n");
            printf("\t\t\t\t----------------\n");
            time_t t = time(NULL);
            struct tm tm = *localtime(&t);
            printf(" - Date : %d-%02d-%02d\n", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday);
            printf(" - Time : %02d:%02d:%02d\n", tm.tm_hour, tm.tm_min, tm.tm_sec);
            printf(" - Name : %s %s\n",NAME,SURNAME);
            printf(" -------------------------------------------------------------------------------\n ");
            printf("| Item \t\tQty\t\t\t Days \t\t\t Total |\n");
            printf(" -------------------------------------------------------------------------------\n ");
            if (R_TYPE==1)
            {
                printf(" DELUXE ROOM\t\t");
                if (NUM_ROOM==1)
                {
                    printf(" %d\t\t\t",NUM_ROOM_QTY);
                }
                else
                {
                    printf(" 1\t\t\t");
                }
                printf("  %d\t\t\t",NUM_ROOM_DAY);
                if (NUM_ROOM==1)
                {
                    printf(" %d",NUM_ROOM_QTY * NUM_ROOM_DAY * 3000);
                    TOT_ROOM=NUM_ROOM_QTY * NUM_ROOM_DAY * 3000;
                }
                else
                {
                    printf(" 3000");
                    TOT_ROOM=3000;
                }
            }
            else if(R_TYPE==2)
            {
                printf(" PREMIUM ROOM\t\t");
                if (NUM_ROOM==1)
                {
                    printf(" %d\t\t\t",NUM_ROOM_QTY);
                }
                else
                {
                    printf(" 1\t\t\t");
                }
                printf("  %d\t\t\t",NUM_ROOM_DAY);
                if (NUM_ROOM==1)
                {
                    printf(" %d",NUM_ROOM_QTY * NUM_ROOM_DAY * 2000);
                    TOT_ROOM=NUM_ROOM_QTY * NUM_ROOM_DAY * 2000;
                }
                else
                {
                    printf(" 2000");
                    TOT_ROOM=2000;
                }
            }
            else if(R_TYPE==3)
            {
                printf(" REGULAR ROOM\t\t");
                if (NUM_ROOM==1)
                {
                    printf(" %d\t\t\t",NUM_ROOM_QTY);
                }
                else
                {
                    printf(" 1\t\t\t");
                }
                printf("  %d\t\t\t",NUM_ROOM_DAY);
                if (NUM_ROOM==1)
                {
                    printf(" %d",NUM_ROOM_QTY * NUM_ROOM_DAY * 1000);
                    TOT_ROOM=NUM_ROOM_QTY * NUM_ROOM_DAY * 1000;
                }
                else
                {
                    printf(" 1000");
                    TOT_ROOM=1000;
                }
            }
            printf("\n");
            printf("  MEAL\t\t\t");
            printf(" %d\t\t\t",NUM_MEAL);
            printf("  %d\t\t\t",NUM_ROOM_DAY);
            if (NUM_MEAL==1)
            {
                if(MEAL==123)
                {
                    printf(" 849");
                    TOT_MEAL=849;
                }
                else if(MEAL==12)
                {
                    printf(" 399");
                    TOT_MEAL=399;
                }
                else if(MEAL==13)
                {
                    printf(" 599");
                    TOT_MEAL=599;
                }
                else if(MEAL==23)
                {
                    printf(" 799");
                    TOT_MEAL=799;
                }
                else if(MEAL==1)
                {
                    printf(" 100");
                    TOT_MEAL=100;
                }
                else if(MEAL==2)
                {
                    printf(" 300");
                    TOT_MEAL=300;
                }
                else if(MEAL==3)
                {
                    printf(" 500");
                    TOT_MEAL=500;
                }
                else if(MEAL==0)
                {
                    printf(" 0");
                    TOT_MEAL=0;
                }

            }
            else
            {
                if(MEAL==123)
                {
                    printf(" %d",NUM_MEAL*NUM_ROOM_DAY*849);
                    TOT_MEAL=NUM_MEAL*NUM_ROOM_DAY*849;
                }
                else if(MEAL==12)
                {
                    printf(" %d",NUM_MEAL*NUM_ROOM_DAY*399);
                    TOT_MEAL=NUM_MEAL*NUM_ROOM_DAY*399;
                }
                else if(MEAL==13)
                {
                    printf(" %d",NUM_MEAL*NUM_ROOM_DAY*599);
                    TOT_MEAL=NUM_MEAL*NUM_ROOM_DAY*599;
                }
                else if(MEAL==23)
                {
                    printf(" %d",NUM_MEAL*NUM_ROOM_DAY*799);
                    TOT_MEAL=NUM_MEAL*NUM_ROOM_DAY*799;
                }
                else if(MEAL==1)
                {
                    printf(" %d",NUM_MEAL*NUM_ROOM_DAY*100);
                    TOT_MEAL=NUM_MEAL*NUM_ROOM_DAY*100;
                }
                else if(MEAL==2)
                {
                    printf(" %d",NUM_MEAL*NUM_ROOM_DAY*300);
                    TOT_MEAL=NUM_MEAL*NUM_ROOM_DAY*300;
                }
                else if(MEAL==3)
                {
                    printf(" %d",NUM_MEAL*NUM_ROOM_DAY*500);
                    TOT_MEAL=NUM_MEAL*NUM_ROOM_DAY*500;
                }
                else if(MEAL==0)
                {
                    printf(" 0");
                    TOT_MEAL=0;
                }
            }
            TOT_PRE=TOT_MEAL+TOT_ROOM;
            printf("\n");
            printf("  DISCOUNT @10%%\t\t");
            DISCOUNT=0.10*TOT_PRE;
            TOT_POST=TOT_PRE-DISCOUNT;
            printf(" -\t\t\t ");
            printf(" -\t\t\t ");
            printf("-%d\n",DISCOUNT);
            printf("  GST @18%%\t\t");
            GST=0.18*TOT_POST;
            printf(" -\t\t\t ");
            printf(" -\t\t\t ");
            printf("%d",GST);
            printf("\n");
            printf(" -------------------------------------------------------------------------------\n ");
            printf(" Net-Total\t\t");
            TOTAL_AMT=TOT_POST+GST;
            printf(" -\t\t\t  -\t\t\t %d\n",TOTAL_AMT);
            printf(" -------------------------------------------------------------------------------\n ");
            pay();
            srand(time(NULL));
            int ROOM_NUM = rand() % 1000 + 100;
            if(NUM_ROOM_QTY==1)
            {
                printf("\n\n - Your Room Number : %d\n", ROOM_NUM);
            }
            else
            {
                printf("\n\n - Your Room Number : ");
                for(I=1;I<=NUM_ROOM_QTY;I++)
                {
                    printf("%d ",ROOM_NUM+I);
                }
            }
            printf("\n");
            printf("\n");
            printf("\t----------------\n");
            printf("\t| - Thanks !!! |\n");
            printf("\t----------------\n");
            printf("\n");
            printf("\n");
            system("pause");
            break;
    case 2:
        system("cls");
        printf("\n - Restaurant is on 3rd floor\n\n");
        printf("\t\t\t\t - Welcome to Ace Restaurant - \n");
 int Num,_a_,_b_=1,Dish_price,Price=0,Gst,Total_price,Delivery,Numb,Nurf,Nats;
    printf("\n\nchoose the given number to order your food \n\n");
    printf("-------------------DOSA----------------------\n");
    printf(" 1.Sada Dosa                   Rs50 \n");
     printf(" 2.Butter Sada Dosa            Rs90 \n");
     printf(" 3.Masala Dosa                 Rs150 \n");
      printf(" 4.Mysore Masala Dosa          Rs250 \n");
       printf(" 5.Chocolate Dosa              Rs150 \n");
        printf(" 6.Schezwan Dosa               Rs350 \n");
         printf("------------------SOUPS---------------------\n ");
          printf("7.Sweetcorn  Soup             Rs150 \n");
          printf(" 8.Hot and Sour Soup           Rs150 \n");
           printf(" 9.Tomato Soup                 Rs170 \n");
          printf(" 10.Manchow Soup               Rs190 \n");
          printf(" 11.Broccoli Soup              Rs250 \n");
           printf("-----------PIZZA 10 inch-------------------\n ");
          printf("12.Margherita Pizza           Rs150 \n");
           printf(" 13.Exotic Pizza               Rs250 \n");
           printf(" 14.Chef's special Pizza       Rs275 \n");
           printf(" 15.Paneer Punch               Rs350 \n");
            printf("----------------PASTA-----------------------\n ");
          printf("16.Alfredo Sauce pasta        Rs150 \n");
           printf(" 17.Marinara sauce pasta       Rs250 \n");
           printf(" 18.Rosatella SAUCE pasta      Rs275 \n");
           printf(" 19.Chef's special pasta       Rs325 \n");
            printf("------------INDIAN MAIN COURSE------------\n ");
             printf("20.Plain Roti                 Rs50 \n");
              printf(" 21.Butter Roti                Rs90 \n");
               printf(" 22.Mix Veg                    Rs150 \n");
                printf(" 23.Veg Handi                  Rs250 \n");
                 printf(" 24.Palak Paneer               Rs190 \n");
                  printf(" 25.Jeera Rice                 Rs250\n");
                  printf("-----------------DESSERTS-------------------\n ");
                   printf("26.Vanilla Ice-cream          Rs100\n");
                    printf(" 27.Brownie                    Rs250\n");
                     printf("-----------------MOCTAILS-----------------\n");
                      printf(" 28.Blue Sea                   Rs150\n");
                      printf(" 29.Virgin Mojito              Rs200\n");
                      printf(" 30.Dry Cranberry Spitzer      Rs250\n");
                      printf(" 31.Mango Mule                 Rs250\n");
                      printf(" 32.Citrus Fizz                Rs250\n");
                      printf(" 33.Shirley Temple             Rs250\n");
                      printf(" 34.fruit punch                Rs250\n");
                  Start:
                   printf("\n - Enter the dish number to be ordered:");
                   scanf("%d",&Num);
                   if(Num>34||Num<0)
                   {
                       printf("\n - Enter a valid dish number please\n");
                       goto Start;
                   }
                   printf("\n - Enter the number of quantity you require:");
                   scanf("%d",&_a_);
                   switch(Num)
                   {
                       case 1:
                           Dish_price=50*_a_;
                           Price=Price+Dish_price;
                            break;
                        case 2:
                           Dish_price=90*_a_;
                           Price=Price+Dish_price;
                            break;
                        case 3:
                           Dish_price=150*_a_;
                           Price=Price+Dish_price;
                            break;
                        case 4:
                           Dish_price=250*_a_;
                           Price=Price+Dish_price;
                            break;
                        case 5:
                           Dish_price=150*_a_;
                           Price=Price+Dish_price;
                            break;
                        case 6:
                           Dish_price=350*_a_;
                           Price=Price+Dish_price;
                            break;
                        case 7:
                          Dish_price=150*_a_;
                           Price=Price+Dish_price;
                            break;
                        case 8:
                           Dish_price=150*_a_;
                           Price=Price+Dish_price;
                            break;
                        case 9:
                           Dish_price=170*_a_;
                           Price=Price+Dish_price;
                            break;
                        case 10:
                           Dish_price=190*_a_;
                           Price=Price+Dish_price;
                            break;
                        case 11:
                           Dish_price=250*_a_;
                           Price=Price+Dish_price;
                            break;
                        case 12:
                           Dish_price=150*_a_;
                           Price=Price+Dish_price;
                            break;
                        case 13:
                           Dish_price=250*_a_;
                           Price=Price+Dish_price;
                            break;
                        case 14:
                          Dish_price=275*_a_;
                           Price=Price+Dish_price;
                            break;
                        case 15:
                           Dish_price=350*_a_;
                           Price=Price+Dish_price;
                            break;
                        case 16:
                           Dish_price=150*_a_;
                           Price=Price+Dish_price;
                            break;
                        case 17:
                           Dish_price=250*_a_;
                           Price=Price+Dish_price;
                            break;
                        case 18:
                           Dish_price=275*_a_;
                           Price=Price+Dish_price;
                            break;
                        case 19:
                           Dish_price=325*_a_;
                           Price=Price+Dish_price;
                            break;
                        case 20:
                           Dish_price=50*_a_;
                           Price=Price+Dish_price;
                            break;
                        case 21:
                           Dish_price=90*_a_;
                           Price=Price+Dish_price;
                            break;
                        case 22:
                           Dish_price=150*_a_;
                           Price=Price+Dish_price;
                            break;
                            case 23:
                           Dish_price=250*_a_;
                           Price=Price+Dish_price;
                            break;
                        case 24:
                           Dish_price=190*_a_;
                           Price=Price+Dish_price;
                            break;
                        case 25:
                           Dish_price=250*_a_;
                           Price=Price+Dish_price;
                            break;
                        case 26:
                           Dish_price=100*_a_;
                           Price=Price+Dish_price;
                            break;
                        case 27:
                           Dish_price=250*_a_;
                           Price=Price+Dish_price;
                            break;
                        case 28:
                           Dish_price=150*_a_;
                           Price=Price+Dish_price;
                            break;
                        case 29:
                           Dish_price=200*_a_;
                           Price=Price+Dish_price;
                            break;
                        case 30:
                          Dish_price=250*_a_;
                           Price=Price+Dish_price;
                            break;
                        case 31:
                          Dish_price=250*_a_;
                           Price=Price+Dish_price;
                            break;
                        case 32:
                           Dish_price=250*_a_;
                           Price=Price+Dish_price;
                            break;
                        case 33:
                           Dish_price=250*_a_;
                           Price=Price+Dish_price;
                            break;
                        case 34:
                           Dish_price=250*_a_;
                           Price=Price+Dish_price;
                            break;
                        default:
                            {
                                printf("wrong input");
                                goto Start;
                            }
                    }
                            Gfc:
                            printf("\n - Do you want to order something else 1 for yes and 0 for no:");
                            scanf("%d",&_b_);
                            if(_b_==1)
                            {
                                goto Start;
                            }
                            else if(_b_!=1&&_b_!=0)
                            {
                                 printf("\n - Wrong input please enter again\n");
                                 goto Gfc;
                            }
                            else
                            {
                                goto End;
                            }
                              system("cls");
                          End:
                           Gst=0.05*Price;
                           Total_price=Gst+Price;
                           Figh:
                           printf("\n - Enter 1 for jain food else 0: ");
                           scanf("%d",&Nurf);
                           if(Nurf==1)
                           {
                                    printf("\n - You have selected jain food\n");
                                    Opp:
                                    printf("\n - Any changes required press 1 else 0: ");
                                    scanf("%d",&Nats);
                                    if(Nats==1)
                                    {
                                            printf("\n - Enter your whole menu again please\n");
                                            goto Start;
                                    }
                                    else if(Nats!= 1&&Nats!=0)
                                    {
                                        printf("\n - Wrong input please enter again\n");
                                        goto Opp;
                                    }
                                    else
                                    {
                                       printf("\n - Your total bill is: %d",Total_price);

                                    }
                            }
                        else if(Nurf!=1&&Nurf!=0)
                            {
                                printf("\n - Wrong input please enter again\n");
                                goto Figh;
                            }
                        else
                           {

                                printf("\n - Any changes required in your order press 1 else 0: ");
                                    scanf("%d",&Nats);
                                    if(Nats==1)
                                    {
                                            printf("\n - Enter your whole menu again please\n");
                                            goto Start;
                                    }
                                    else if(Nats!=1&&Nats!=0)
                                    {
                                        printf("\n - Wrong input please enter again\n");
                                        goto Opp;
                                    }
                                    else
                                    {
                                       printf("\n - Your total bill is: %d",Total_price);

                                    }

                           }
                           pay();
                           break;
                        case 3:
                             system("cls");
                                int purpose;
                                int staying;
                                int amt1=30000;  // if -> case 1 of 1 -> 300 people
                                    int amt2=50000;  // if -> case 1 of 1 -> 600 people
                                    int amt3=10000;  // if -> case 1 of 2 -> 100 people
                                    int amt4=20000;  // if -> case 1 of 2 -> 200 people
                                    int decamt1 = 20000;  // if -> case 1 of 2 -> amount of decoration
                                    int decamt2 = 5000;  // if -> case 1 of 2 -> amount of decoration
                                        int plate,pltquantity,caterer1;
                                    printf("                                          ----------------------------------------\n");
                                                               printf("                                          | Hello there! Welcome to the Ace-hall |\n");
                                                               printf("                                          ----------------------------------------\n\n");
                                                                printf("\n - If you are already staying in our hotel some of the facilities would be free for you...");
                                                               printf(" and if not then some nominal charge will be applicable! \n\n");
                                                               printf("\n - The additional rates will be added as per your requirements! \n\n");
                                                               top:
                                                               printf("\n - Are you already having a stay in our hotel? \n\n - Enter 1 for staying or enter 0 if not : ");
                                                               scanf("%d",&staying);
                                                               if(staying==1)
                                                               {
                                                               printf("\n - Great!!! You are already enjoying our stay! \n");
                                                               printf("\n - Kindly select the purpose to book the hall ( Enter 1-Banquet Hall and 2-Party Hall ) : ");
                                                               scanf("%d", &purpose);
                                                               main_start1:


                                                               switch(purpose)
                                                               {
                                                                    case 1:
                                                                    printf("\n - How much capacity of hall is required to you? \n");
                                                                    s_1:
                                                                    printf("\n - Enter 1-300 people capacity; 2-600 people capacity : ");
                                                                    int capacity1;
                                                                    scanf("%d", &capacity1);

                                                                    switch(capacity1)
                                                                    {
                                                                    case 1:
                                                                    printf("\n - You selected 300 people capacity hall! \n");
                                                                    capact1:
                                                                    printf("\n - Do you want to add additional high decoration for whole day @20,000rs? \n");
                                                                    int decorate1,caterer1;
                                                                    printf("\n - Enter 1 if you want additional decoration! or enter 0 to skip : ");
                                                                    scanf("%d",&decorate1);
                                                                    if(decorate1==1)
                                                                    {
                                                                        int res1 = amt1 + decamt1;
                                                                        catererChoice1:
                                                                        printf("\n - Do you want to add our caterer package for whole day? \n");
                                                                        printf("\n - Enter 1 if you want our caterer or enter 0 to skip : ");
                                                                        scanf("%d",&caterer1);
                                                                        if(caterer1==1)
                                                                        {
                                                                            printf("\n - We are providing you with 3 category of dish price! \n");
                                                                            printf("1. Rs 170 / plate \n");
                                                                            printf("2. Rs 260 / plate \n");
                                                                            printf("3. Rs 350 / plate \n");
                                                                            printf("\n - The number of food varieties will depend on the price range of the plates! \n");
                                                                            plateCategory1:

                                                                            printf("Press 1 to choose plate 1 \n");
                                                                            printf("Press 2 to choose plate 2 \n");
                                                                            printf("Press 3 to choose plate 3 \n");
                                                                            printf("\n - Which category of plate you want to choose? : ");
                                                                            scanf("%d",&plate);
                                                                            if(plate==1)
                                                                            {
                                                                                printf("\n - You have selected plate 1! \n");
                                                                                printf("\n - How much quantity of plates you require for your function ? :");
                                                                                scanf("%d",&pltquantity);

                                                                                int totplate = 170 * pltquantity;
                                                                                int totamt = totplate + res1;
                                                                                int final_amt = totamt - (totamt/10);
                                                                                printf("-----------------------------------------------------------------\n");
                                                                                printf(" - Your total bill amount (with decoration and caterer) is: Rs %d \n",final_amt);
                                                                                printf("-----------------------------------------------------------------\n");
                                                                                pay();


                                                                            }

                                                                            else if(plate==2)
                                                                            {
                                                                                printf("\n - You have selected plate 2! \n");
                                                                                printf("\n - How much quantity of plates you require for your function ? :");
                                                                                scanf("%d",&pltquantity);

                                                                                int totplate = 260 * pltquantity;
                                                                                int totamt = totplate + res1;
                                                                                int final_amt = totamt - (totamt/10);
                                                                                printf("-----------------------------------------------------------------\n");
                                                                                printf(" - Your total bill amount (with decoration and caterer) is: Rs %d \n",final_amt);
                                                                                printf("-----------------------------------------------------------------\n");
                                                                                pay();
                                                                            }
                                                                            else if(plate==3)
                                                                            {
                                                                                printf("\n - You have selected plate 3! \n");
                                                                                printf("\n - How much quantity of plates you require for your function ? :");
                                                                                scanf("%d",&pltquantity);
                                                                                int totplate = 350 * pltquantity;
                                                                                int totamt = totplate + res1;
                                                                                int final_amt = totamt - (totamt/10);
                                                                                printf("-----------------------------------------------------------------\n");
                                                                                printf(" - Your total bill amount (with decoration and caterer) is: Rs %d \n",final_amt);
                                                                                printf("-----------------------------------------------------------------\n");
                                                                                pay();
                                                                            }

                                                                            else
                                                                            {
                                                                                printf("\n - Invalid input! \n");
                                                                                goto plateCategory1;
                                                                            }
                                                                        }

                                                                        else if(caterer1==0)
                                                                        {
                                                                            int final_amt = res1 - (res1/10);
                                                                            printf("---------------------------------------------------\n");
                                                                            printf("\n - Your total amount (with decoration*) is: Rs %d \n",final_amt);
                                                                            printf("---------------------------------------------------\n");
                                                                        }

                                                                        else
                                                                        {
                                                                            printf("\n - invalid input! \n");
                                                                            goto catererChoice1;
                                                                        }


                                                                    }

                                                                    else if(decorate1==0)
                                                                    {
                                                                        catererChoice2:
                                                                        printf("\n - Do you want to add our caterer package for whole day? \n");
                                                                        printf("\n - Enter 1 if you want our caterer or enter 0 to skip : ");
                                                                        scanf("%d",&caterer1);
                                                                        if(caterer1==1)
                                                                        {
                                                                            printf("\n - We are providing you with 3 category of dish price! \n");
                                                                        printf("1. Rs 170 / plate \n");
                                                                        printf("2. Rs 260 / plate \n");
                                                                        printf("3. Rs 350 / plate \n");
                                                                        printf("\n - The number of food varieties will depend on the price range of the plates! \n");
                                                                        plateCategory2:

                                                                        printf("Press 1 to choose plate 1 \n");
                                                                        printf("Press 2 to choose plate 2 \n");
                                                                        printf("Press 3 to choose plate 3 \n");
                                                                        printf("\n - Which category of plate you want to choose? : ");
                                                                    scanf("%d",&plate);
                                                                    if(plate==1)
                                                                    {
                                                                        printf("\n - You have selected plate 1! \n");
                                                                        printf("\n - How much quantity of plates you require for your function ? :");
                                                                        scanf("%d",&pltquantity);

                                                                        int totplate = 170 * pltquantity;
                                                                        int totamt = totplate + amt1;
                                                                    printf("-----------------------------------------------------------------\n");
                                                                    printf(" - Your total bill amount (with decoration and caterer) is: Rs %d \n",totamt);
                                                                    printf("-----------------------------------------------------------------\n");
                                                                    pay();
                                                                }

                                                                else if(plate==2)
                                                            {
                                                                printf("\n - You have selected plate 2! \n");
                                                                printf("\n - How much quantity of plates you require for your function ? :");
                                                                scanf("%d",&pltquantity);

                                                                int totplate = 260 * pltquantity;
                                                            int totamt = totplate + amt1;
                                                            printf("-----------------------------------------------------------------\n");
                                                            printf(" - Your total bill amount (with decoration and caterer) is: Rs %d \n",totamt);
                                                            printf("-----------------------------------------------------------------\n");
                                                            pay();
                                                        }

                                                        else if(plate==3)
                                                        {
                                                            printf("\n - You have selected plate 3! \n");
                                                        printf("\n - How much quantity of plates you require for your function ? :");
                                                        scanf("%d",&pltquantity);

                                                        int totplate = 350 * pltquantity;
                                                        int totamt = totplate + amt1;
                                                        printf("-----------------------------------------------------------------\n");
                                                    printf(" - Your total bill amount (with decoration and caterer) is: Rs %d \n",totamt);
                                                    printf("-----------------------------------------------------------------\n");
                                                    pay();
                                                }

                                                else
                                                {
                                                    printf("\n - Invalid input! \n");
                                                    goto plateCategory2;
                                                }
                                        }

                                        else if(caterer1==0)
                                        {
                                            int final_amt = amt1 - (amt1/10);
                                            printf("------------------------------------------------------------------\n");
                                        printf("\n - Your total amount (without decoration and caterer*) is: Rs %d \n",final_amt);
                                        printf("------------------------------------------------------------------\n");
                                    }

                                    else
                                    {
                                        printf("\n - Invalid input! \n");
                                        goto catererChoice2;
                                    }
                            }

                            else
                            {
                                printf("\n - Invalid Input \n");
                                goto capact1;
                        }
                        break;


                        case 2:
                        printf("\n - You selected 600 people capacity hall! \n");
                    capact2:
                    printf("\n - Do you want to add additional high decoration for whole day @20,000rs? \n");
                    int decorate2;
                    printf("\n - Enter 1 if you want additional decoration! or enter 0 to skip : ");
                    scanf("%d",&decorate2);
                    if(decorate2==1)
                    {
                        int res1 = amt2 + decamt1;
                        catererChoice3:
                        printf("\n - Do you want to add our caterer package for whole day? \n");
                        printf("\n - Enter 1 if you want our caterer or enter 0 to skip : ");
                        scanf("%d",&caterer1);
                        if(caterer1==1)
                        {
                            printf("\n - We are providing you with 3 category of dish price! \n");
                            printf("1. Rs 170 / plate \n");
                            printf("2. Rs 260 / plate \n");
                            printf("3. Rs 350 / plate \n");
                printf("\n - The number of food varieties will depend on the price range of the plates! \n");
                plateCategory3:

                printf("Press 1 to choose plate 1 \n");
                printf("Press 2 to choose plate 2 \n");
                printf("Press 3 to choose plate 3 \n");
                printf("\n - Which category of plate you want to choose? : ");
                scanf("%d",&plate);
                if(plate==1)
                {
                    printf("\n - You have selected plate 1! \n");
                    printf("\n - How much quantity of plates you require for your function ? :");
                    scanf("%d",&pltquantity);

                    int totplate = 170 * pltquantity;
                    int totamt = totplate + amt2;
                    int final_amt = totamt - (totamt/10);
                    printf("-----------------------------------------------------------------\n");
                    printf(" - Your total bill amount (with decoration and caterer) is: Rs %d \n",final_amt);
                    printf("-----------------------------------------------------------------\n");
                    pay();
                }

                else if(plate==2)
                {
                    printf("\n - You have selected plate 2! \n");
                    printf("\n - How much quantity of plates you require for your function ? :");
                    scanf("%d",&pltquantity);

                    int totplate = 260 * pltquantity;
                    int totamt = totplate + amt2;
                    int final_amt = totamt - (totamt/10);
                    printf("-----------------------------------------------------------------\n");
                    printf(" - Your total bill amount (with decoration and caterer) is: Rs %d \n",final_amt);
                    printf("-----------------------------------------------------------------\n");
                    pay();
                }

                else if(plate==3)
                {
                    printf("\n - You have selected plate 3! \n");
                    printf("\n - How much quantity of plates you require for your function ? :");
                    scanf("%d",&pltquantity);

                    int totplate = 350 * pltquantity;
                    int totamt = totplate + amt2;
                    int final_amt = totamt - (totamt/10);
                    printf("-----------------------------------------------------------------\n");
                    printf(" - Your total bill amount (with decoration and caterer) is: Rs %d \n",final_amt);
                    printf("-----------------------------------------------------------------\n");
                    pay();
                }

                else
                {
                    printf("\n - Invalid input! \n");
                    goto plateCategory3;
                }
            }

            else if(caterer1==0)
            {
                int final_amt = res1 - (res1/10);
                printf("-----------------------------------------------------------------------\n");
                printf("\n - Your total amount (with decoration and without caterer*) is: Rs %d \n",res1);
                printf("-----------------------------------------------------------------------\n");
            }

            else
            {
                printf("\n - Invalid input! \n");
                goto catererChoice3;
            }
            break;
        }
        else if(decorate2==0)
        {
            catererChoice4:
            printf("\n - Amount without decoration till now is: %drs \n",amt2);
            printf("\n - Do you want to add our caterer package for whole day? \n");
            printf("\n - Enter 1 if you want our caterer or enter 0 to skip : ");
            scanf("%d",&caterer1);
            if(caterer1==1)
            {
                printf("\n - We are providing you with 3 category of dish price! \n");
                printf("1. Rs 170 / plate \n");
                printf("2. Rs 260 / plate \n");
                printf("3. Rs 350 / plate \n");
                printf("\n - The number of food varieties will depend on the price range of the plates! \n");
                plateCategory4:

                printf("Press 1 to choose plate 1 \n");
                printf("Press 2 to choose plate 2 \n");
                printf("Press 3 to choose plate 3 \n");
                printf("\n - Which category of plate you want to choose? : ");
                scanf("%d",&plate);
                if(plate==1)
                {
                    printf("\n - You have selected plate 1! \n");
                    printf("\n - How much quantity of plates you require for your function ? :");
                    scanf("%d",&pltquantity);

                    int totplate = 170 * pltquantity;
                    int totamt = totplate + amt2;
                    int final_amt = totamt - (totamt/10);
                    printf("-----------------------------------------------------------------\n");
                    printf(" - Your total bill amount (with decoration and caterer) is: Rs %d \n",final_amt);
                    printf("-----------------------------------------------------------------\n");
                    pay();
                }

                else if(plate==2)
                {
                    printf("\n - You have selected plate 2! \n");
                    printf("\n - How much quantity of plates you require for your function ? : ");
                    scanf("%d",&pltquantity);

                    int totplate = 260 * pltquantity;
                    int totamt = totplate + amt2;
                    int final_amt = totamt - (totamt/10);
                    printf("-----------------------------------------------------------------\n");
                    printf(" - Your total bill amount (with decoration and caterer) is: Rs %d \n",final_amt);
                    printf("-----------------------------------------------------------------\n");
                    pay();
                }

                else if(plate==3)
                {
                    printf("\n - You have selected plate 3! \n");
                    printf("\n - How much quantity of plates you require for your function ? : ");
                    scanf("%d",&pltquantity);

                    int totplate = 350 * pltquantity;
                    int totamt = totplate + amt2;
                    int final_amt = totamt - (totamt/10);
                    printf("-----------------------------------------------------------------\n");
                    printf(" - Your total bill amount (with decoration and caterer) is: Rs %d \n",final_amt);
                    printf("-----------------------------------------------------------------\n");
                    pay();
                }

                else
                {
                    printf("\n - Invalid input! \n");
                    goto plateCategory4;
                }
            }
            else if(caterer1==0)
            {
                int final_amt = amt2 - (amt2/10);
                printf("-----------------------------------------------------------------------\n");
                printf("\n - Your total amount (with decoration and without caterer*) is: Rs %d \n",final_amt);
                printf("-----------------------------------------------------------------------\n");
            }

            else
            {
                printf("\n - Invalid input! \n");
                goto catererChoice4;
            }
        }

        else
        {
            printf("\n - Invalid Input \n");
            goto capact2;
        }


        default:
        printf("\n - Invalid input! \n");
        goto s_1;
        }
        break;



        case 2:
        printf("\n - How much capacity of hall is required to you? \n");
        s_2:
        printf("\n - Enter 1 for 100 peoples of capacity of hall @10000rs per day and 2 for 200 peoples of capacity of hall @20000rs per day: ");

        int capacity2;
        scanf("%d", &capacity2);

        switch(capacity2)
        {
        case 1:
        printf("\n - You selected 100 people capacity hall! \n");
        capact3:
        printf("\n - Do you want to add additional high decoration for whole day @10000rs? \n");
        int decorate3,caterer1;
        printf("\n - Enter 1 if you want additional decoration! or enter 0 to skip : ");
        scanf("%d",&decorate3);
        if(decorate3==1)
        {
            int res1 = amt3 + decamt2;
            catererChoice5:
            printf("\n - Do you want to add our caterer package for whole day? \n");
            printf("\n - Enter 1 if you want our caterer! or enter 0 to skip : ");
            scanf("%d",&caterer1);
            if(caterer1==1)
            {
                printf("\n - We are providing you with 3 category of dish price! \n");
                printf("1. Rs 170 / plate \n");
                printf("2. Rs 260 / plate \n");
                printf("3. Rs 350 / plate \n");
                printf("\n - The number of food varieties will depend on the price range of the plates! \n");
                plateCategory5:

                printf("Press 1 to choose plate 1 \n");
                printf("Press 2 to choose plate 2 \n");
                printf("Press 3 to choose plate 3 \n");
                printf("\n - Which category of plate you want to choose? : ");
                scanf("%d",&plate);
                if(plate==1)
                {
                    printf("\n - You have selected plate 1! \n");
                    printf("\n - How much quantity of plates you require for your function ? : ");
                    scanf("%d",&pltquantity);

                    int totplate = 170 * pltquantity;
                    int totamt = totplate + res1;
                    int final_amt = totamt - (totamt/10);
                    printf("-----------------------------------------------------------------\n");
                    printf(" - Your total bill amount (with decoration and caterer) is: Rs %d \n",final_amt);
                    printf("-----------------------------------------------------------------\n");
                    pay();
                }

                else if(plate==2)
                {
                    printf("\n - You have selected plate 2! \n");
                    printf("\n - How much quantity of plates you require for your function ? : ");
                    scanf("%d",&pltquantity);

                    int totplate = 260 * pltquantity;
                    int totamt = totplate + res1;
                    int final_amt = totamt - (totamt/10);
                    printf("-----------------------------------------------------------------\n");
                    printf(" - Your total bill amount (with decoration and caterer) is: Rs %d \n",final_amt);
                    printf("-----------------------------------------------------------------\n");
                    pay();
                }

                else if(plate==3)
                {
                    printf("\n - You have selected plate 3! \n");
                    printf("\n - How much quantity of plates you require for your function ? : ");
                    scanf("%d",&pltquantity);

                    int totplate = 350 * pltquantity;
                    int totamt = totplate + res1;
                    int final_amt = totamt - (totamt/10);
                    printf("-----------------------------------------------------------------\n");
                    printf(" - Your total bill amount (with decoration and caterer) is: Rs %d \n",final_amt);
                    printf("-----------------------------------------------------------------\n");
                    pay();
                }

                else
                {
                    printf("\n - Invalid input! \n");
                    goto plateCategory5;
                }
            }

            else if(caterer1==0)
            {
                int final_amt = res1 - (res1/10);
                printf("---------------------------------------------------\n");
                printf("\n - Your total amount (with decoration*) is: Rs %d \n",final_amt);
                printf("---------------------------------------------------\n");
            }

            else
            {
                printf("\n - Invalid input! \n");
                goto catererChoice5;
            }
        }



        else if(decorate3==0)
        {
            catererChoice6:
            printf("\n - Amount without decoration till now is: %drs \n",amt2);
            printf("\n - Do you want to add our caterer package for whole day? \n");
            printf("\n - Enter 1 if you want our caterer! or enter 0 to skip : ");
            scanf("%d",&caterer1);
            if(caterer1==1)
            {
                printf("\n - We are providing you with 3 category of dish price! \n");
                printf("1. Rs 170 / plate \n");
                printf("2. Rs 260 / plate \n");
                printf("3. Rs 350 / plate \n");
                printf("\n - The number of food varieties will depend on the price range of the plates! \n");
                plateCategory6:

                printf("\n - Press 1 to choose plate 1 \n");
                printf("\n - Press 2 to choose plate 2 \n");
                printf("\n - Press 3 to choose plate 3 \n");
                printf("\n - Which category of plate you want to choose? : ");
                scanf("%d",&plate);
                if(plate==1)
                {
                    printf("\n - You have selected plate 1! \n");
                    printf("\n - How much quantity of plates you require for your function ? : ");
                    scanf("%d",&pltquantity);

                    int totplate = 170 * pltquantity;
                    int totamt = totplate + amt3;
                    int final_amt = totamt - (totamt/10);
                    printf("-----------------------------------------------------------------\n");
                    printf(" - Your total bill amount (with decoration and caterer) is: Rs %d \n",final_amt);
                    printf("-----------------------------------------------------------------\n");
                    pay();
                }

                else if(plate==2)
                {
                    printf("\n - You have selected plate 2! \n");
                    printf("\n - How much quantity of plates you require for your function ? : ");
                    scanf("%d",&pltquantity);

                    int totplate = 260 * pltquantity;
                    int totamt = totplate + amt3;
                    int final_amt = totamt - (totamt/10);
                    printf("-----------------------------------------------------------------\n");
                    printf(" - Your total bill amount (with decoration and caterer) is: Rs %d \n",final_amt);
                    printf("-----------------------------------------------------------------\n");
                    pay();
                }

                else if(plate==3)
                {
                    printf("\n - You have selected plate 3! \n");
                    printf("\n - How much quantity of plates you require for your function ? : ");
                    scanf("%d",&pltquantity);

                    int totplate = 350 * pltquantity;
                    int totamt = totplate + amt3;
                    int final_amt = totamt - (totamt/10);
                    printf("-----------------------------------------------------------------\n");
                    printf(" - Your total bill amount (with decoration and caterer) is: Rs %d \n",final_amt);
                    printf("-----------------------------------------------------------------\n");
                    pay();
                }

                else
                {
                    printf("\n - Invalid input! \n");
                    goto plateCategory6;
                }
            }
            else if(caterer1==0)
            {
                int final_amt = amt3 - (amt3/10);
                printf("-----------------------------------------------------------------------\n");
                printf("\n - Your total amount (with decoration and without caterer*) is: Rs %d \n",amt3);
                printf("-----------------------------------------------------------------------\n");
            }

            else
            {
                printf("\n - Invalid input! \n");
                goto catererChoice6;
            }
        }


        else
        {
            printf("\n - Invalid Input \n");
            goto capact3;
        }
        break;
        case 2:
        printf("\n - You selected 200 people capacity hall! \n");
        capact4:
        printf("\n - Do you want to add additional high decoration for whole day @10000rs? \n");
        int decorate4;
        printf("\n - Enter 1 if you want additional decoration! or enter 0 to skip : ");
        scanf("%d",&decorate4);
        if(decorate4==1)
        {
            int res1 = amt4 + decamt2;
            catererChoice7:
            printf("\n - Do you want to add our caterer package for whole day? \n");
            printf("\n - Enter 1 if you want our caterer or enter 0 to skip : ");
            scanf("%d",&caterer1);
            if(caterer1==1)
            {
                printf("\n - We are providing you with 3 category of dish price! \n");
                printf("1. Rs 170 / plate \n");
                printf("2. Rs 260 / plate \n");
                printf("3. Rs 350 / plate \n");
                printf("\n - The number of food varieties will depend on the price range of the plates! \n");
                plateCategory7:

                printf("Press 1 to choose plate 1 \n");
                printf("Press 2 to choose plate 2 \n");
                printf("Press 3 to choose plate 3 \n");
                printf("\n - Which category of plate you want to choose? : ");
                scanf("%d",&plate);
                if(plate==1)
                {
                    printf("\n - You have selected plate 1! \n");
                    printf("\n - How much quantity of plates you require for your function ? : ");
                    scanf("%d",&pltquantity);

                    int totplate = 170 * pltquantity;
                    int totamt = totplate + res1;
                    int final_amt = totamt - (totamt/10);
                    printf("-----------------------------------------------------------------\n");
                    printf(" - Your total bill amount (with decoration and caterer) is: Rs %d \n",final_amt);
                    printf("-----------------------------------------------------------------\n");
                    pay();
                }

                else if(plate==2)
                {
                    printf("\n - You have selected plate 2! \n");
                    printf("\n - How much quantity of plates you require for your function ? : ");
                    scanf("%d",&pltquantity);

                    int totplate = 260 * pltquantity;
                    int totamt = totplate + res1;
                    int final_amt = totamt - (totamt/10);
                    printf("-----------------------------------------------------------------\n");
                    printf(" - Your total bill amount (with decoration and caterer) is: Rs %d \n",final_amt);
                    printf("-----------------------------------------------------------------\n");
                    pay();
                }

                else if(plate==3)
                {
                    printf("\n - You have selected plate 3! \n");
                    printf("\n - How much quantity of plates you require for your function ? : ");
                    scanf("%d",&pltquantity);

                    int totplate = 350 * pltquantity;
                    int totamt = totplate + res1;
                    int final_amt = totamt - (totamt/10);
                    printf("-----------------------------------------------------------------\n");
                    printf(" - Your total bill amount (with decoration and caterer) is: Rs %d \n",final_amt);
                    printf("-----------------------------------------------------------------\n");
                    pay();
                }

                else
                {
                    printf("\n - Invalid input! \n");
                    goto plateCategory7;
                }
            }

            else if(caterer1==0)
            {
                int final_amt = res1 -(res1/10);
                printf("---------------------------------------------------\n");
                printf("\n - Your total amount (with decoration*) is: Rs %d \n",final_amt);
                printf("---------------------------------------------------\n");
            }

            else
            {
                printf("\n - Invalid input! \n");
                goto catererChoice7;
            }
        }


        else if(decorate4==0)
        {
            catererChoice8:
            printf("\n - Amount without decoration till now is: %drs \n",amt2);
            printf("\n - Do you want to add our caterer package for whole day? \n");
            printf("\n - Enter 1 if you want our caterer or enter 0 to skip : ");
            scanf("%d",&caterer1);
            if(caterer1==1)
            {
                printf("\n - We are providing you with 3 category of dish price! \n");
                printf("1. Rs 170 / plate \n");
                printf("2. Rs 260 / plate \n");
                printf("3. Rs 350 / plate \n");
                printf("\n - The number of food varieties will depend on the price range of the plates! \n");
                plateCategory8:

                printf("Press 1 to choose plate 1 \n");
                printf("Press 2 to choose plate 2 \n");
                printf("Press 3 to choose plate 3 \n");
                printf("\n - Which category of plate you want to choose? : ");
                scanf("%d",&plate);
                if(plate==1)
                {
                    printf("\n - You have selected plate 1! \n");
                    printf("\n - How much quantity of plates you require for your function ? : ");
                    scanf("%d",&pltquantity);

                    int totplate = 170 * pltquantity;
                    int totamt = totplate + amt4;
                    int final_amt = totamt - (totamt/10);
                    printf("-----------------------------------------------------------------\n");
                    printf(" - Your total bill amount (with decoration and caterer) is: Rs %d \n",final_amt);
                    printf("-----------------------------------------------------------------\n");
                    pay();
                }

                else if(plate==2)
                {
                    printf("\n - You have selected plate 2! \n");
                   printf("\n - How much quantity of plates you require for your function ? : ");
                    scanf("%d",&pltquantity);

                    int totplate = 260 * pltquantity;
                    int totamt = totplate + amt4;
                    int final_amt = totamt - (totamt/10);
                    printf("-----------------------------------------------------------------\n");
                    printf(" - Your total bill amount (with decoration and caterer) is: Rs %d \n",final_amt);
                    printf("-----------------------------------------------------------------\n");
                    pay();
                }

                else if(plate==3)
                {
                    printf("\n - You have selected plate 3! \n");
                    printf("\n - How much quantity of plates you require for your function ? : ");
                    scanf("%d",&pltquantity);

                    int totplate = 350 * pltquantity;
                    int totamt = totplate + amt4;
                    int final_amt = totamt - (totamt/10);
                    printf("-----------------------------------------------------------------\n");
                    printf(" - Your total bill amount (with decoration and caterer) is: Rs %d \n",final_amt);
                    printf("-----------------------------------------------------------------\n");
                    pay();
                }

                else
                {
                    printf("\n - Invalid input! \n");
                    goto plateCategory8;
                }
            }
            else if(caterer1==0)
            {
                int final_amt = amt4 - (amt4/10);
                printf("-----------------------------------------------------------------------\n");
                printf("\n - Your total amount (with decoration and without caterer*) is: Rs %d \n",final_amt);
                printf("-----------------------------------------------------------------------\n");
            }

            else
            {
                printf("\n - Invalid input! \n");
                goto catererChoice8;
            }
        }


        else
        {
            printf("\n - Invalid Input \n");
            goto capact4;
        }
        break;


        default:
        printf("\n - Invalid input! \n");
        goto s_2;
        }
      break;

        default:
        printf("\n - Invalid Input \n");
        goto main_start1;
   }
   }
   else if (staying==0)
   {
   printf("\n - You are not staying in our hotel!...kindly enter the following details to login..!\n");

   char username1[20];
   char password1[20];
   printf("\n - Welcome to Sign Up page\n");

   printf("\n - Create Username: ");
   scanf("%s", &username1);

   printf("\n - Create Password: ");
   scanf("%s", &password1);
   system("cls");
   // Login code - start
    char username[20];
    char password[20];

    printf("\n - Welcome to the Login Page\n");
    log:
    printf("\n - Enter your username: ");
    scanf("%s", username);

    printf("\n - Enter your password: ");
    scanf("%s", password);

    // Compare the entered username and password with the expected values
    if (strcmp(username, username1) == 0 && strcmp(password, password1) == 0)
    {
        printf("\n - Login successful! Welcome, %s!\n\n\n", username);
    }
    else
    {
        printf("\n - Invalid username or password. Please try again.\n");
        goto log;
    }
   printf("\n - Kindly select the purpose to book the hall \n");
   main_start2:
     printf("\n - Enter 1 for Banquet purpose and 2 for Party purpose -\n");
   scanf("%d", &purpose);

   switch(purpose)
   {
        case 1:
        printf("\n - How much capacity of hall is required to you? \n");
        s1:
        printf("\n - Enter 1-300 people capacity; 2-600 people capacity :  \n");
        int capacity1;
        scanf("%d", &capacity1);
        switch(capacity1)
        {
        case 1:
        printf("\n - You selected 300 people capacity hall! \n");
        capact5:
        printf("\n - Do you want to add additional high decoration for whole day @20,000rs? \n");
        int decorate1,caterer1;
        printf("\n - Enter 1 if you want additional decoration! or enter 0 to skip : ");
        scanf("%d",&decorate1);
        if(decorate1==1)
        {
            int res1 = amt1 + decamt1;
            printf("\n - Amount with decoration till now is: %drs \n",res1);
            catererChoice9:
            printf("\n - Do you want to add our caterer package for whole day? \n");
            printf("\n - Enter 1 if you want our caterer or enter 0 to skip : ");
            scanf("%d",&caterer1);
            if(caterer1==1)
            {
                printf("\n - We are providing you with 3 category of dish price! \n");
                printf("1. Rs 170 / plate \n");
                printf("2. Rs 260 / plate \n");
                printf("3. Rs 350 / plate \n");
                printf("\n - The number of food varieties will depend on the price range of the plates! \n");
                plateCategory9:

                printf("Press 1 to choose plate 1 \n");
                printf("Press 2 to choose plate 2 \n");
                printf("Press 3 to choose plate 3 \n");
                printf("\n - Which category of plate you want to choose? : ");
                scanf("%d",&plate);
                if(plate==1)
                {
                    printf("\n - You have selected plate 1! \n");
                    printf("\n - How much quantity of plates you require for your function ? : ");
                    scanf("%d",&pltquantity);

                    int totplate = 170 * pltquantity;
                    int totamt = totplate + res1;
                    printf("-----------------------------------------------------------------\n");
                    printf(" - Your total bill amount (with decoration and caterer) is: Rs %d \n",totamt);
                    printf("-----------------------------------------------------------------\n");
                    pay();
                }

                else if(plate==2)
                {
                    printf("\n - You have selected plate 2! \n");
                    printf("\n - How much quantity of plates you require for your function ? : ");
                    scanf("%d",&pltquantity);

                    int totplate = 260 * pltquantity;
                    int totamt = totplate + res1;
                    printf("-----------------------------------------------------------------\n");
                    printf(" - Your total bill amount (with decoration and caterer) is: Rs %d \n",totamt);
                    printf("-----------------------------------------------------------------\n");
                    pay();
                }

                else if(plate==3)
                {
                    printf("\n - You have selected plate 3! \n");
                    printf("\n - How much quantity of plates you require for your function ? : ");
                    scanf("%d",&pltquantity);

                    int totplate = 350 * pltquantity;
                    int totamt = totplate + res1;
                    printf("-----------------------------------------------------------------\n");
                    printf(" - Your total bill amount (with decoration and caterer) is: Rs %d \n",totamt);
                    printf("-----------------------------------------------------------------\n");
                    pay();
                }

                else
                {
                    printf("\n - Invalid input! \n");
                    goto plateCategory9;
                }
            }

            else if(caterer1==0)
            {
                printf("---------------------------------------------------\n");
                printf("\n - Your total amount (with decoration*) is: Rs %d \n",res1);
                printf("---------------------------------------------------\n");
            }

            else
            {
                printf("\n - Invalid input! \n");
                goto catererChoice9;
            }
        }


        else if(decorate1==0)
        {
            printf("\n - Amount without decoration till now is: %drs \n",amt1);
            catererChoice10:
            printf("\n - Do you want to add our caterer package for whole day? \n");
            printf("\n - Enter 1 if you want our caterer or enter 0 to skip : ");
            scanf("%d",&caterer1);
            if(caterer1==1)
            {
                printf("\n - We are providing you with 3 category of dish price! \n");
                printf("1. Rs 170 / plate \n");
                printf("2. Rs 260 / plate \n");
                printf("3. Rs 350 / plate \n");
                printf("\n - The number of food varieties will depend on the price range of the plates! \n");
                plateCategory10:

                printf("Press 1 to choose plate 1 \n");
                printf("Press 2 to choose plate 2 \n");
                printf("Press 3 to choose plate 3 \n");
                printf("\n - Which category of plate you want to choose? : ");
                scanf("%d",&plate);
                if(plate==1)
                {
                    printf("\n - You have selected plate 1! \n");
                    printf("\n - How much quantity of plates you require for your function ? : ");
                    scanf("%d",&pltquantity);

                    int totplate = 170 * pltquantity;
                    int totamt = totplate + amt1;
                    printf("-----------------------------------------------------------------\n");
                    printf(" - Your total bill amount (with decoration and caterer) is: Rs %d \n",totamt);
                    printf("-----------------------------------------------------------------\n");
                    pay();
                }

                else if(plate==2)
                {
                    printf("\n - You have selected plate 2! \n");
                    printf("\n - How much quantity of plates you require for your function ? : ");
                    scanf("%d",&pltquantity);

                    int totplate = 260 * pltquantity;
                    int totamt = totplate + amt1;
                    printf("-----------------------------------------------------------------\n");
                    printf(" - Your total bill amount (with decoration and caterer) is: Rs %d \n",totamt);
                    printf("-----------------------------------------------------------------\n");
                    pay();
                }

                else if(plate==3)
                {
                    printf("\n - You have selected plate 3! \n");
                   printf("\n - How much quantity of plates you require for your function ? : ");
                    scanf("%d",&pltquantity);

                    int totplate = 350 * pltquantity;
                    int totamt = totplate + amt1;
                    printf("-----------------------------------------------------------------\n");
                    printf(" - Your total bill amount (with decoration and caterer) is: Rs %d \n",totamt);
                    printf("-----------------------------------------------------------------\n");
                    pay();
                }

                else
                {
                    printf("\n - Invalid input! \n");
                    goto plateCategory10;
                }
            }

            else if(caterer1==0)
            {
                printf("------------------------------------------------------------------\n");
                printf(" - Your total amount (without decoration and caterer*) is: Rs %d \n",amt1);
                printf("------------------------------------------------------------------\n");
            }

            else
            {
                printf("\n - Invalid input! \n");
                goto catererChoice10;
            }
        }

        else
        {
            printf("\n - Invalid Input \n");
            goto capact5;
        }
        break;


        case 2:
        printf("\n - You selected 600 peoples of capacity of hall! \n");
        capact6:
        printf("\n - Do you want to add additional high decoration for whole day @20,000rs? \n");
        int decorate2;
        printf("\n - Enter 1 if you want additional decoration! or enter 0 to skip : ");
        scanf("%d",&decorate2);
        if(decorate2==1)
        {
            int res1 = amt2 + decamt1;
            catererChoice11:
            printf("\n - Do you want to add our caterer package for whole day? \n");
            printf("\n - Enter 1 if you want our caterer or enter 0 to skip : ");
            scanf("%d",&caterer1);
            if(caterer1==1)
            {
                printf("\n - We are providing you with 3 category of dish price! \n");
                printf("1. Rs 170 / plate \n");
                printf("2. Rs 260 / plate \n");
                printf("3. Rs 350 / plate \n");
                printf("\n - The number of food varieties will depend on the price range of the plates! \n");
                plateCategory11:

                printf("Press 1 to choose plate 1 \n");
                printf("Press 2 to choose plate 2 \n");
                printf("Press 3 to choose plate 3 \n");
                printf("\n - Which category of plate you want to choose? : ");
                scanf("%d",&plate);
                if(plate==1)
                {
                    printf("\n - You have selected plate 1! \n");
                    printf("\n - How much quantity of plates you require for your function ? : ");
                    scanf("%d",&pltquantity);

                    int totplate = 170 * pltquantity;
                    int totamt = totplate + amt2;
                    printf("-----------------------------------------------------------------\n");
                    printf(" - Your total bill amount (with decoration and caterer) is: Rs %d \n",totamt);
                    printf("-----------------------------------------------------------------\n");
                    pay();
                }

                else if(plate==2)
                {
                    printf("\n - You have selected plate 2! \n");
                    printf("\n - How much quantity of plates you require for your function ? : ");
                    scanf("%d",&pltquantity);

                    int totplate = 260 * pltquantity;
                    int totamt = totplate + amt2;
                    printf("-----------------------------------------------------------------\n");
                    printf(" - Your total bill amount (with decoration and caterer) is: Rs %d \n",totamt);
                    printf("-----------------------------------------------------------------\n");
                    pay();
                }

                else if(plate==3)
                {
                    printf("\n - You have selected plate 3! \n");
                    printf("\n - How much quantity of plates you require for your function ? : ");
                    scanf("%d",&pltquantity);

                    int totplate = 350 * pltquantity;
                    int totamt = totplate + amt2;
                    printf("-----------------------------------------------------------------\n");
                    printf(" - Your total bill amount (with decoration and caterer) is: Rs %d \n",totamt);
                    printf("-----------------------------------------------------------------\n");
                    pay();
                }

                else
                {
                    printf("\n - Invalid input! \n");
                    goto plateCategory11;
                }
            }

            else if(caterer1==0)
            {
                printf("-----------------------------------------------------------------------\n");
                printf("\n - Your total amount (with decoration and without caterer*) is: Rs %d \n",amt2);
                printf("-----------------------------------------------------------------------\n");
            }

            else
            {
                printf("\n - Invalid input! \n");
                goto catererChoice11;
            }
        }

        else if(decorate2==0)
        {
            printf("\n - Amount without decoration till now is: %drs \n",amt2);
            catererChoice12:
            printf("\n - Do you want to add our caterer package for whole day? \n");
            printf("\n - Enter 1 if you want our caterer or enter 0 to skip : ");
            scanf("%d",&caterer1);
            if(caterer1==1)
            {
                printf("\n - We are providing you with 3 category of dish price! \n");
                printf("1. Rs 170 / plate \n");
                printf("2. Rs 260 / plate \n");
                printf("3. Rs 350 / plate \n");
                printf("\n - The number of food varieties will depend on the price range of the plates! \n");
                plateCategory12:

                printf("Press 1 to choose plate 1 \n");
                printf("Press 2 to choose plate 2 \n");
                printf("Press 3 to choose plate 3 \n");
                printf("\n - Which category of plate you want to choose? : ");
                scanf("%d",&plate);
                if(plate==1)
                {
                    printf("\n - You have selected plate 1! \n");
                    printf("\n - How much quantity of plates you require for your function ? : ");
                    scanf("%d",&pltquantity);

                    int totplate = 170 * pltquantity;
                    int totamt = totplate + amt2;
                    printf("-----------------------------------------------------------------\n");
                    printf(" - Your total bill amount (with decoration and caterer) is: Rs %d \n",totamt);
                    printf("-----------------------------------------------------------------\n");
                    pay();
                }

                else if(plate==2)
                {
                    printf("\n - You have selected plate 2! \n");
                    printf("\n - How much quantity of plates you require for your function ? : ");
                    scanf("%d",&pltquantity);

                    int totplate = 260 * pltquantity;
                    int totamt = totplate + amt2;
                    printf("-----------------------------------------------------------------\n");
                    printf(" - Your total bill amount (with decoration and caterer) is: Rs %d \n",totamt);
                    printf("-----------------------------------------------------------------\n");
                    pay();
                }

                else if(plate==3)
                {
                    printf("\n - You have selected plate 3! \n");
                    printf("\n - How much quantity of plates you require for your function ? : ");
                    scanf("%d",&pltquantity);

                    int totplate = 350 * pltquantity;
                    int totamt = totplate + amt2;
                    printf("-----------------------------------------------------------------\n");
                    printf(" - Your total bill amount (with decoration and caterer) is: Rs %d \n",totamt);
                    printf("-----------------------------------------------------------------\n");
                    pay();
                }

                else
                {
                    printf("\n - Invalid input! \n");
                    goto plateCategory12;
                }
            }
            else if(caterer1==0)
            {
                printf("-----------------------------------------------------------------------\n");
                printf("\n - Your total amount (with decoration and without caterer*) is: Rs %d \n",amt2);
                printf("-----------------------------------------------------------------------\n");
            }

            else
            {
                printf("\n - Invalid input! \n");
                goto catererChoice12;
            }
        }

        else
        {
            printf("\n - Invalid Input \n");
            goto capact6;
        }
        break;

        default:
        printf("\n - Invalid input! \n");
        goto s1;
        }
        break;
        case 2:
        printf("\n - How much capacity of hall is required to you? \n");
        s2:
        printf("\n - Enter 1 for 100 peoples of capacity of hall @10000rs per day and 2 for 200 peoples of capacity of hall @20000rs per day: ");
        int capacity2;
        scanf("%d", &capacity2);

        switch(capacity2)
        {
        case 1:
        printf("\n - You selected 100 people hall! \n");
        capact7:
        printf("\n - Do you want to add additional high decoration for whole day @10000rs? \n");
        int decorate3;
        printf("\n - Enter 1 if you want additional decoration! or enter 0 to skip : ");
        scanf("%d",&decorate3);
        if(decorate3==1)
        {
            int res1 = amt3 + decamt2;
            printf("\n - Amount with decoration till now is: %drs \n",res1);
            catererChoice13:
            printf("\n - Do you want to add our caterer package for whole day? \n");
            printf("\n - Enter 1 if you want our caterer or enter 0 to skip : ");
            scanf("%d",&caterer1);
            if(caterer1==1)
            {
                printf("\n - We are providing you with 3 category of dish price! \n");
                printf("1. Rs 170 / plate \n");
                printf("2. Rs 260 / plate \n");
                printf("3. Rs 350 / plate \n");
                printf("\n - The number of food varieties will depend on the price range of the plates! \n");
                plateCategory13:

                printf("\n - Press 1 to choose plate 1 \n");
                printf("\n - Press 2 to choose plate 2 \n");
                printf("\n - Press 3 to choose plate 3 \n");
                printf("\n - Which category of plate you want to choose? : ");
                scanf("%d",&plate);
                if(plate==1)
                {
                    printf("\n - You have selected plate 1! \n");
                    printf("\n - How much quantity of plates you require for your function ? : ");
                    scanf("%d",&pltquantity);

                    int totplate = 170 * pltquantity;
                    int totamt = totplate + res1;
                    printf("-----------------------------------------------------------------\n");
                    printf(" - Your total bill amount (with decoration and caterer) is: Rs %d \n",totamt);
                    printf("-----------------------------------------------------------------\n");
                    pay();
                }

                else if(plate==2)
                {
                    printf("\n - You have selected plate 2! \n");
                    printf("\n - How much quantity of plates you require for your function ? : ");
                    scanf("%d",&pltquantity);

                    int totplate = 260 * pltquantity;
                    int totamt = totplate + res1;
                    printf("-----------------------------------------------------------------\n");
                    printf(" - Your total bill amount (with decoration and caterer) is: Rs %d \n",totamt);
                    printf("-----------------------------------------------------------------\n");
                    pay();
                }

                else if(plate==3)
                {
                    printf("\n - You have selected plate 3! \n");
                    printf("\n - How much quantity of plates you require for your function ? : ");
                    scanf("%d",&pltquantity);

                    int totplate = 350 * pltquantity;
                    int totamt = totplate + res1;
                    printf("-----------------------------------------------------------------\n");
                    printf(" - Your total bill amount (with decoration and caterer) is: Rs %d \n",totamt);
                    printf("-----------------------------------------------------------------\n");
                    pay();
                }

                else
                {
                    printf("\n - Invalid input! \n");
                    goto plateCategory13;
                }
            }

            else if(caterer1==0)
            {
                printf("---------------------------------------------------\n");
                printf("\n - Your total amount (with decoration*) is: Rs %d \n",res1);
                printf("---------------------------------------------------\n");
            }

            else
            {
                printf("\n - Invalid input! \n");
                goto catererChoice13;
            }
        }





        else if(decorate3==0)
        {
            printf("\n - Amount without decoration till now is: %drs \n",amt3);
            catererChoice14:
            printf("\n - Do you want to add our caterer package for whole day? \n");
            printf("\n - Enter 1 if you want our caterer or enter 0 to skip : ");
            scanf("%d",&caterer1);
            if(caterer1==1)
            {
                printf("\n - We are providing you with 3 category of dish price! \n");
                printf("1. Rs 170 / plate \n");
                printf("2. Rs 260 / plate \n");
                printf("3. Rs 350 / plate \n");
                printf("\n - The number of food varieties will depend on the price range of the plates! \n");
                plateCategory14:

                printf("Press 1 to choose plate 1 \n");
                printf("Press 2 to choose plate 2 \n");
                printf("Press 3 to choose plate 3 \n");
                printf("\n - Which category of plate you want to choose? : ");
                scanf("%d",&plate);
                if(plate==1)
                {
                    printf("\n - You have selected plate 1! \n");
                    printf("\n - How much quantity of plates you require for your function ? : ");
                    scanf("%d",&pltquantity);

                    int totplate = 170 * pltquantity;
                    int totamt = totplate + amt3;
                    printf("-----------------------------------------------------------------\n");
                    printf(" - Your total bill amount (with decoration and caterer) is: Rs %d \n",totamt);
                    printf("-----------------------------------------------------------------\n");
                    pay();
                }

                else if(plate==2)
                {
                    printf("\n - You have selected plate 2! \n");
                    printf("\n - How much quantity of plates you require for your function ? : ");
                    scanf("%d",&pltquantity);

                    int totplate = 260 * pltquantity;
                    int totamt = totplate + amt3;
                    printf("-----------------------------------------------------------------\n");
                    printf(" - Your total bill amount (with decoration and caterer) is: Rs %d \n",totamt);
                    printf("-----------------------------------------------------------------\n");
                    pay();
                }

                else if(plate==3)
                {
                    printf("\n - You have selected plate 3! \n");
                    printf("\n - How much quantity of plates you require for your function ? : ");
                    scanf("%d",&pltquantity);

                    int totplate = 350 * pltquantity;
                    int totamt = totplate + amt3;
                    printf("-----------------------------------------------------------------\n");
                    printf(" - Your total bill amount (with decoration and caterer) is: Rs %d \n",totamt);
                    printf("-----------------------------------------------------------------\n");
                    pay();
                }

                else
                {
                    printf("\n - Invalid input! \n");
                    goto plateCategory14;
                }
            }
            else if(caterer1==0)
            {
                printf("-----------------------------------------------------------------------\n");
                printf("\n - Your total amount (with decoration and without caterer*) is: Rs %d \n",amt3);
                printf("-----------------------------------------------------------------------\n");
            }

            else
            {
                printf("\n - Invalid input! \n");
                goto catererChoice14;
            }
        }

        else
        {
            printf("\n - Invalid Input \n");
            goto capact7;
        }
        break;

        case 2:
        printf("\n - You selected 200 people hall! \n");
        capact8:
        printf("\n - Do you want to add additional high decoration for whole day @10000rs? \n");
        int decorate4;
        printf("\n - Enter 1 if you want additional decoration! or enter 0 to skip : ");
        scanf("%d",&decorate4);
        if(decorate4==1)
        {
            int res1 = amt4 + decamt2;
            printf("\n - Amount with decoration till now is: %drs \n",res1);

            catererChoice15:
            printf("\n - Do you want to add our caterer package for whole day? \n");
            printf("\n - Enter 1 if you want our caterer or enter 0 to skip : ");
            scanf("%d",&caterer1);
            if(caterer1==1)
            {
                printf("\n - We are providing you with 3 category of dish price! \n");
                printf("1. Rs 170 / plate \n");
                printf("2. Rs 260 / plate \n");
                printf("3. Rs 350 / plate \n");
                printf("\n - The number of food varieties will depend on the price range of the plates! \n");
                plateCategory15:

                printf("Press 1 to choose plate 1 \n");
                printf("Press 2 to choose plate 2 \n");
                printf("Press 3 to choose plate 3 \n");
                printf("\n - Which category of plate you want to choose? : ");
                scanf("%d",&plate);
                if(plate==1)
                {
                    printf("\n - You have selected plate 1! \n");
                    printf("\n - How much quantity of plates you require for your function ? : ");
                    scanf("%d",&pltquantity);

                    int totplate = 170 * pltquantity;
                    int totamt = totplate + res1;
                    printf("-----------------------------------------------------------------\n");
                    printf(" - Your total bill amount (with decoration and caterer) is: Rs %d \n",totamt);
                    printf("-----------------------------------------------------------------\n");
                    pay();
                }

                else if(plate==2)
                {
                    printf("\n - You have selected plate 2! \n");
                    printf("\n - How much quantity of plates you require for your function ? : ");
                    scanf("%d",&pltquantity);

                    int totplate = 260 * pltquantity;
                    int totamt = totplate + res1;
                    printf("-----------------------------------------------------------------\n");
                    printf(" - Your total bill amount (with decoration and caterer) is: Rs %d \n",totamt);
                    printf("-----------------------------------------------------------------\n");
                    pay();
                }

                else if(plate==3)
                {
                    printf("\n - You have selected plate 3! \n");
                    printf("\n - How much quantity of plates you require for your function ? : ");
                    scanf("%d",&pltquantity);

                    int totplate = 350 * pltquantity;
                    int totamt = totplate + res1;
                    printf("-----------------------------------------------------------------\n");
                    printf(" - Your total bill amount (with decoration and caterer) is: Rs %d \n",totamt);
                    printf("-----------------------------------------------------------------\n");
                    pay();
                }

                else
                {
                    printf("\n - Invalid input! \n");
                    goto plateCategory15;
                }
            }

            else if(caterer1==0)
            {
                printf("---------------------------------------------------\n");
                printf("\n - Your total amount (with decoration*) is: Rs %d \n",res1);
                printf("---------------------------------------------------\n");
            }

            else
            {
                printf("\n - Invalid input! \n");
                goto catererChoice15;
            }
        }

        else if(decorate4==0)
        {
            printf("\n - Amount without decoration till now is: %drs \n",amt4);

            catererChoice16:

            printf("\n - Do you want to add our caterer package for whole day? \n");
            printf("\n - Enter 1 if you want our caterer or enter 0 to skip : ");
            scanf("%d",&caterer1);
            if(caterer1==1)
            {
                printf("\n - We are providing you with 3 category of dish price! \n");
                printf("1. Rs 170 / plate \n");
                printf("2. Rs 260 / plate \n");
                printf("3. Rs 350 / plate \n");
                printf("\n - The number of food varieties will depend on the price range of the plates! \n");
                plateCategory16:

                printf("Press 1 to choose plate 1 \n");
                printf("Press 2 to choose plate 2 \n");
                printf("Press 3 to choose plate 3 \n");
                printf("\n - Which category of plate you want to choose? : ");
                scanf("%d",&plate);
                if(plate==1)
                {
                    printf("\n - You have selected plate 1! \n");
                    printf("\n - How much quantity of plates you require for your function ? : ");
                    scanf("%d",&pltquantity);

                    int totplate = 170 * pltquantity;
                    int totamt = totplate + amt4;
                    printf("-----------------------------------------------------------------\n");
                    printf(" - Your total bill amount (with decoration and caterer) is: Rs %d \n",totamt);
                    printf("-----------------------------------------------------------------\n");
                    pay();
                }

                else if(plate==2)
                {
                    printf("\n - You have selected plate 2! \n");
                    printf("\n - How much quantity of plates you require for your function ? : ");
                    scanf("%d",&pltquantity);

                    int totplate = 260 * pltquantity;
                    int totamt = totplate + amt4;
                    printf("-----------------------------------------------------------------\n");
                    printf(" - Your total bill amount (with decoration and caterer) is: Rs %d \n",totamt);
                    printf("-----------------------------------------------------------------\n");
                    pay();
                }

                else if(plate==3)
                {
                    printf("\n - You have selected plate 3! \n");
                    printf("\n - How much quantity of plates you require for your function ? : ");
                    scanf("%d",&pltquantity);

                    int totplate = 350 * pltquantity;
                    int totamt = totplate + amt4;
                    printf("-----------------------------------------------------------------\n");
                    printf(" - Your total bill amount (with decoration and caterer) is: Rs %d \n",totamt);
                    printf("-----------------------------------------------------------------\n");
                    pay();
                }

                else
                {
                    printf("\n - Invalid input! \n");
                    goto plateCategory16;
                }
            }
            else if(caterer1==0)
            {
                printf("-----------------------------------------------------------------------\n");
                printf(" - Your total amount (with decoration and without caterer*) is: Rs %d \n",amt4);
                printf("-----------------------------------------------------------------------\n");
            }

            else
            {
                printf("\n - Invalid input! \n");
                goto catererChoice16;
            }

        }


        else
        {
            printf("\n - Invalid Input \n");
            goto capact8;
        }
        break;

        default:
        printf("\n - Invalid input! \n");
        goto s2;
        }
      break;

        default:
        printf("\n - Invalid Input \n");
        goto main_start2;
   }
   }



   else
   {
        printf("\n - Invalid Input \n");
        goto top;
   }
   break;
                        case 4:
                             system("cls");
                           printf("\t\t\t\t - ACE GYM - \n\n\n");
                           printf("\n - Packages available are: \n\n");
                            printf("Time\t\t\t\tPrice\n");
                            printf("1.One month\t\t\tRs1500\n");
                            printf("2.Six month\t\t\tRs8000\n");
                            printf("3.One year\t\t\tRs15000\n");
                        printf("\n - Enter the number of offer you want to select : ");
                        scanf("%d",&tom);
                        switch(tom)
                        {
                        case 1:
                            printf("\n - Trainer price is 3000\n");
                            trainsplaner=3000;
                            printf("\n -  Your one month gym price is : %d\n", trainer(month,trainsplaner));
                            pay();
                            break;
                        case 2:
                            printf("\n - Trainer price is 5000\n");
                            trainsplaner=5000;
                            printf("\n -  Your six month gym price is : %d\n", trainer(months,trainsplaner));
                                pay();
                            break;
                        case 3:
                            printf("\n - Trainer price is 8000\n");
                            trainsplaner=8000;
                            printf("\n - Your one year gym price is : %d\n", trainer(year,trainsplaner));
                            pay();
                            break;
                    }

}
}
