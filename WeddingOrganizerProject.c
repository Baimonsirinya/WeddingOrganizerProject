#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<math.h>

void Page1();
void Page2();
void PageAdd();
void PageEdit();
void PageDelete();
void Pageschedule();
void PageAdmin();
void SelcetAdmin();
void Pagecustomer();
void SelectCus1();
int Location();
void LocationAdd();
void LocationEdit();
void Locationdelete();
void InputLocation();
int Food();
void FoodAdd();
void FoodEdit();
void Fooddelete();
int Event();
void EventAdd();
void EventEdit();
void Eventdelete();
void SelectCus1();
void InputEvent();
void InputFood();
int InfoPackage();
int CalPackage();
void Schedule();

struct location{
    char name_lct[100];
    int num_Acc;
    float price_lct;
}lct,locationarr[21];

struct Food{
    char name_food[100];
    int num_Acc;
    float price_food;
}food,foodarr[21];

struct Event{
    char style[200];
    float price_event;
}event,eventarr[21];


struct infocus{
    char name_customer[20],lastname_customer[20],phone_customer[10];
    int date_customer;
    char month_customer[20];
    int year_customer;
}lction,foodcus,eventcus,pack;


void main()
{
    Page1();
}
void PageLocation()
{
    printf("-----------------------------------------------------------------------------------------------------------------------");
    printf("                                                LOCATION                ");
    printf("\n                                          =================               ");
    printf("\n\n               Name Location              Accommodate people           Price          \n");
}

void PageFood()
{
    printf("-----------------------------------------------------------------------------------------------------------------------");
    printf("                                                FOOD                ");
    printf("\n                                          =================               ");
    printf("\n\n               Type Food              Accommodate people           Price          \n");
}

void PageEvent()
{
    printf("-----------------------------------------------------------------------------------------------------------------------");
    printf("                                              EVENT STYLE                ");
    printf("\n                                          =================               ");
    printf("\n\n                                Style                       Price          \n");
}


void Page1(){
    int input_p1;
    printf("***********************************************************************************************************************");
    printf("\n                                                  WELCOME                 ");
    printf("\n                                                    TO                  ");
    printf("\n                                               - MULBERRY -               ");
    printf("\n                                            WEDDING ORGANIZER           ");
    printf("\n***********************************************************************************************************************");
    printf("\n\nPlease enter 1 to proceed: ");
    scanf("%d",&input_p1);
    if(input_p1==1){
        system("cls");
        Page2();
    }
}

void Page2(){
    int input_p2;
    system("cls");
    printf("-----------------------------------------------------------------------------------------------------------------------");
    printf("\n                                               PLEASE SELECT                 ");
    printf("\n                                         You are Admin (enter 1)");
    printf("\n                                        You are Customer (enter 2)");
    printf("\n\n\nPlease enter: ");
    scanf("%d",&input_p2);
    printf("\n\n-----------------------------------------------------------------------------------------------------------------------");
    switch(input_p2)
    {
        case 1: PageAdmin();break;
        case 2: Pagecustomer();break;

    }

}


void PageAdmin(){
    char user[10],password[10];
    system("cls");
    printf("-----------------------------------------------------------------------------------------------------------------------");
    printf("\n                                               PLEASE SELECT                                                         ");
    printf("\n                                              ===============                                                        ");
    printf("\n                                                   LOGIN");
    printf("\n\n\nPlease enter user: ");
    scanf("%s",user);
    printf("\nPlease enter password: ");
    scanf("%s",password);
    if(strcmp(user,"sirinya")==0 && strcmp(password,"250545")==0){
        system("cls");
        SelcetAdmin();
    }else{
        printf("\nPlease try again");
        getch();
        system("cls");
        PageAdmin();
    }
}

void SelcetAdmin()
{
    int selectad_p1;
    system("cls");
    printf("-----------------------------------------------------------------------------------------------------------------------");
    printf("\n                                                       ADMIN                 ");
    printf("\n                                          =================================");
    printf("\n                                            1.Add             (enter 1)");
    printf("\n                                            2.Edit            (enter 2)");
    printf("\n                                            3.Delete          (enter 3)");
    printf("\n                                            4.Check shedule   (enter 4)");
    printf("\n\n\nPlease enter: ");
    scanf("%d",&selectad_p1);
    printf("\n\n-----------------------------------------------------------------------------------------------------------------------");
    switch(selectad_p1){
        case 1: PageAdd();break;
        case 2: PageEdit();break;
        case 3: PageDelete();break;
        case 4: Pageschedule();break;
    }
}

void PageAdd()
{
    system("cls");
    int select_add;
    printf("\t\t\t\t\t      What number do you want add");
    printf("\n\t\t\t\t\t======================================");
    printf("\n\n\t\t\t\t\t          (Enter 1) Location");
    printf("\n\t\t\t\t\t          (Enter 2) Food");
    printf("\n\t\t\t\t\t          (Enter 3) Event Style");
    printf("\n\t\t\t\t\t          (Enter 4) Back");
    printf("\n\n\nPlease select: ");
    scanf("%d",&select_add);
    switch(select_add){
        case 1: LocationAdd();break;
        case 2: FoodAdd();break;
        case 3: EventAdd();break;
        case 4: SelcetAdmin();break;
    }
}

void PageEdit()
{
    system("cls");
    int select_edit;
    printf("\t\t\t\t\t     What number do you want to Edit");
    printf("\n\t\t\t\t\t======================================");
    printf("\n\n\t\t\t\t\t          (Enter 1) Location");
    printf("\n\t\t\t\t\t          (Enter 2) Food");
    printf("\n\t\t\t\t\t          (Enter 3) Event Style");
    printf("\n\t\t\t\t\t          (Enter 4) Back");
    printf("\n\n\nPlease select: ");
    scanf("%d",&select_edit);
    system("cls");
    switch(select_edit){
        case 1: LocationEdit();break;
        case 2: FoodEdit();break;
        case 3: EventEdit();break;
        case 4: SelcetAdmin();break;
    }
}

void PageDelete()
{
    system("cls");
    int select_delete;
    printf("\t\t\t\t\t          What number do you want to Delete");
    printf("\n\t\t\t\t\t======================================");
    printf("\n\n\t\t\t\t\t          (Enter 1) Location");
    printf("\n\t\t\t\t\t          (Enter 2) Food");
    printf("\n\t\t\t\t\t          (Enter 3) Event Style");
    printf("\n\t\t\t\t\t          (Enter 4) Back");
    printf("\n\n\nPlease select: ");
    scanf("%d",&select_delete);
    system("cls");
    switch(select_delete){
        case 1: Locationdelete();break;
        case 2: Fooddelete();break;
        case 3: Eventdelete();break;
        case 4: SelcetAdmin();break;
    }
}

void Pageschedule()
{
    system("cls");
    int select;
    printf("\t\t\t\t\tWhat number do you want To Check Schedule");
    printf("\n\t\t\t\t\t======================================");
    printf("\n\n\t\t\t\t\t          (Enter 1) Location");
    printf("\n\t\t\t\t\t          (Enter 2) Food");
    printf("\n\t\t\t\t\t          (Enter 3) Event Style");
    printf("\n\t\t\t\t\t          (Enter 4) Package");
    printf("\n\t\t\t\t\t          (Enter 5) Back");
    printf("\n\n\nPlease select: ");
    scanf("%d",&select);
    if(select==5){
        SelcetAdmin();
    }
    else{
        Schedule(select);
    }
}

int Location()
{
    int i=1;
    int count=0;
    FILE *flct;
    if((flct = fopen("locationarray.txt","r")) == NULL){
        printf("Error in open file");
        exit(1);
    }else{
        while(!feof(flct)){
            fscanf(flct,"%s %d %f",locationarr[i].name_lct,&locationarr[i].num_Acc,&locationarr[i].price_lct);
            printf("\n             %d.%-21s%17d%23.2f Bath",i,locationarr[i].name_lct,locationarr[i].num_Acc,locationarr[i].price_lct);
            i++;
            count++;
        }
        fclose(flct);
    }
    return count;
}

int Food()
{
    int i=1,count=0;
    FILE *ffood;
    if((ffood = fopen("foodarray.txt","r")) == NULL){
        printf("Error in open file");
        exit(1);
    }else{
        while(!feof(ffood)){
            fscanf(ffood,"%s %d %f",foodarr[i].name_food,&foodarr[i].num_Acc,&foodarr[i].price_food);
            printf("\n             %d.%-21s%13d%18.2f Bath",i,foodarr[i].name_food,foodarr[i].num_Acc,foodarr[i].price_food);
            i++;
            count++;
        }
        fclose(ffood);
    }
    return count;
}

int Event()
{
    int i=1,count=0;
    FILE *fevent;
    if((fevent = fopen("eventarray.txt","r")) == NULL){
        printf("Error in open file");
        exit(1);
    }else{
        while(!feof(fevent)){
            fscanf(fevent,"%s %f",eventarr[i].style,&eventarr[i].price_event);
            printf("\n                               %d.%-11s%21.2f Bath",i,eventarr[i].style,eventarr[i].price_event);
            i++;
            count++;
        }
        fclose(fevent);
    }
    return count;
}


void LocationAdd(){
    system("cls");
    FILE *flctarr;
    int choice;
    char Location_add;
    PageLocation();
    Location();
    fflush(stdin);
    printf("\n\nEnter name Location: ");
    scanf("%s",lct.name_lct);
    printf("Enter Accommodate people: ");
    scanf("%d",&lct.num_Acc);
    printf("Enter Price: ");
    scanf("%f",&lct.price_lct);
    flctarr = fopen("locationarray.txt","a");
    fprintf(flctarr,"\n%s %d %.f",lct.name_lct,lct.num_Acc,lct.price_lct);
    fclose(flctarr);
    printf("-----------------------------------------------------------------------------------------------------------------------");
    printf("\n                                                UPDATE\n");
    PageLocation();
    Location();
    printf("\n\nBack home page (Enter1) / Others menu (Enter2) / Add again (Enter3): ");
    scanf("%d",&choice);
    switch(choice){
        case 1: Page2();break;
        case 2: SelcetAdmin();break;
        case 3: LocationAdd();break;
    }
}
void FoodAdd()
{
    system("cls");
    FILE *finfofood;
    FILE *ffoodarr;
    int choice;
    char Food_add;
    PageFood();
    Food();
    fflush(stdin);
    printf("\n\nEnter type food: ");
    scanf("%s",food.name_food);
    printf("Enter Accommodate people: ");
    scanf("%d",&food.num_Acc);
    printf("Enter Price: ");
    scanf("%f",&food.price_food);
    ffoodarr = fopen("foodarray.txt","a");
    fprintf(ffoodarr,"\n%s %d %f",food.name_food,food.num_Acc,food.price_food);
    fclose(ffoodarr);
    printf("\n\n\n-----------------------------------------------------------------------------------------------------------------------");
    printf("\n                                                UPDATE\n");
    PageFood();
    Food();
    printf("\n\nBack home page (Enter1) / Others menu (Enter2) / Add again (Enter3): ");
    scanf("%d",&choice);
    switch(choice){
        case 1: Page2();break;
        case 2: SelcetAdmin();break;
        case 3: FoodAdd();break;
    }
}
void EventAdd()
{
    system("cls");
    FILE *feventarr;
    int choice;
    char Event_add;
    PageEvent();
    Event();
    fflush(stdin);
    printf("\n\nEnter style: ");
    scanf("%s",event.style);
    printf("Enter Price: ");
    scanf("%f",&event.price_event);
    feventarr = fopen("eventarray.txt","a");
    fprintf(feventarr,"\n%s %f",event.style,event.price_event);
    fclose(feventarr);
    printf("-----------------------------------------------------------------------------------------------------------------------");
    printf("\n                                                UPDATE\n");
    PageEvent();
    Event();
    printf("\n\nBack home page (Enter1) / Others menu (Enter2) / Add again (Enter3): ");
    scanf("%d",&choice);
    switch(choice){
        case 1: Page2();break;
        case 2: SelcetAdmin();break;
        case 3: EventAdd();break;
    }
}



void LocationEdit()
{
    FILE *flct;
    system("cls");
    int num,i=1,count,selectedit,choice;
    PageLocation();
    count = Location();
    printf("\n\n\n\n\n\n\n\nWhat number LOCATION do you want to edit: ");
    scanf("%d",&num);
    fflush(stdin);
    printf("\nPlease enter NEW NAME LOCATION: ");
    scanf("%s",locationarr[num].name_lct);
    printf("\nPlease enter NEW Accommodate people: ");
    scanf("%d",&locationarr[num].num_Acc);
    printf("\nPlease enter NEW Price: ");
    scanf("%f",&locationarr[num].price_lct);
    system("cls");
    PageLocation();
    flct = fopen("locationarray.txt","w");
    while(i<=count){
        fprintf(flct,"\n%s %d %.2f",locationarr[i].name_lct,locationarr[i].num_Acc,locationarr[i].price_lct);
        printf("\n             %d.%-21s%13d%23.2f Bath",i,locationarr[i].name_lct,locationarr[i].num_Acc,locationarr[i].price_lct);
        i++;
    }
    fclose(flct);
    printf("\n\n\n\nBack home page (Enter1) / Others menu (Enter2) / Edit again (Enter3): ");
    scanf("%d",&choice);
    switch(choice){
        case 1: Page2();break;
        case 2: SelcetAdmin();break;
        case 3: LocationEdit();break;
    }
}


void FoodEdit()
{
    FILE *ffood;
    system("cls");
    int num,i=1,count,selectedit,choice;
    PageFood();
    count = Food();
    printf("\n\n\n\n\n\n\n\nWhat number Food do you want to edit: ");
    scanf("%d",&num);
    fflush(stdin);
    printf("\nPlease enter NEW Type Food: ");
    scanf("%s",foodarr[num].name_food);
    printf("\nPlease enter NEW Accommodate people: ");
    scanf("%d",&foodarr[num].num_Acc);
    printf("\nPlease enter NEW Price: ");
    scanf("%f",&foodarr[num].price_food);
    system("cls");
    PageFood();
    ffood = fopen("foodarray.txt","w");
    while(i<=count){
        fprintf(ffood,"\n%s %d %.2f",foodarr[i].name_food,foodarr[i].num_Acc,foodarr[i].price_food);
        printf("\n             %d.%-21s%13d%18.2f Bath",i,foodarr[i].name_food,foodarr[i].num_Acc,foodarr[i].price_food);
        i++;
    }
    fclose(ffood);
    printf("\n\n\n\nBack home page (Enter1) / Others menu (Enter2) / Edit again (Enter3): ");
    scanf("%d",&choice);
    switch(choice){
        case 1: Page2();break;
        case 2: SelcetAdmin();break;
        case 3: FoodEdit();break;
    }
}

void EventEdit()
{
    FILE *fevent;
    system("cls");
    int num,i=1,count,selectedit,choice;
    fflush(stdin);
    PageEvent();
    count = Event();
    printf("\n\n\n\n\n\n\n\nWhat number Event Style do you want to edit: ");
    scanf("%d",&num);
    printf("\nPlease enter NEW Event Style: ");
    fflush(stdin);
    scanf("%s",eventarr[num].style);
    printf("\nPlease enter NEW Price: ");
    scanf("%f",&eventarr[num].price_event);
    system("cls");
    PageEvent();
    fevent = fopen("eventarray.txt","w");
    while(i<=count){
        fprintf(fevent,"\n%s %.2f",eventarr[i].style,eventarr[i].price_event);
        printf("\n                               %d.%-11s%21.2f Bath",i,eventarr[i].style,eventarr[i].price_event);
        i++;
    }
    fclose(fevent);
    printf("\n\n\n\nBack home page (Enter1) / Others menu (Enter2) / Edit again (Enter3): ");
    scanf("%d",&choice);
    switch(choice){
        case 1: Page2();break;
        case 2: SelcetAdmin();break;
        case 3: EventEdit();break;
    }
}

void Locationdelete()
{
    int count,i=1,choice;
    int select;
    FILE *flct;
    system("cls");
    PageLocation();
    count = Location();
    fflush(stdin);
    printf("\n\n\nEnter number to Delete: ");
    scanf("%d",&select);
    system("cls");
    printf("-----------------------------------------------------------------------------------------------------------------------");
    printf("\n                                                UPDATE\n");
    PageLocation();
    flct = fopen("locationarray.txt","w");
    if(select<=count && select!=1){
        for(i=1;i<select;i++){
            fprintf(flct,"\n%s %d %.2f",locationarr[i].name_lct,locationarr[i].num_Acc,locationarr[i].price_lct);
            printf("\n             %d.%-21s%13d%23.2f Bath",i,locationarr[i].name_lct,locationarr[i].num_Acc,locationarr[i].price_lct);
        }
        fclose(flct);
        for(i=select+1;i<=count;i++){
            flct = fopen("locationarray.txt","a");
            fprintf(flct,"\n%s %d %.2f",locationarr[i].name_lct,locationarr[i].num_Acc,locationarr[i].price_lct);
            printf("\n             %d.%-21s%13d%23.2f Bath",i-1,locationarr[i].name_lct,locationarr[i].num_Acc,locationarr[i].price_lct);
        }
        fclose(flct);
    }
    if(select<=count && select==1){
        for(i=2;i<=count;i++){
            fprintf(flct,"\n%s %d %.2f",locationarr[i].name_lct,locationarr[i].num_Acc,locationarr[i].price_lct);
            printf("\n             %d.%-21s%13d%23.2f Bath",i-1,locationarr[i].name_lct,locationarr[i].num_Acc,locationarr[i].price_lct);
        }
        fclose(flct);
    }
    printf("\n\n\n\nBack home page (Enter1) / Others menu (Enter2) / Delete again (Enter3): ");
    scanf("%d",&choice);
    switch(choice){
        case 1: Page2();break;
        case 2: SelcetAdmin();break;
        case 3: Locationdelete();break;
    }
}

void Fooddelete()
{
    int count,i=1,choice;
    int select;
    FILE *ffood;
    system("cls");
    PageFood();
    count = Food();
    fflush(stdin);
    printf("\n\n\nEnter number to Delete: ");
    scanf("%d",&select);
    system("cls");
    printf("\n-----------------------------------------------------------------------------------------------------------------------");
    printf("\n                                                UPDATE\n");
    PageFood();
    ffood = fopen("foodarray.txt","w");
    if(select<=count&&select!=1){
        for(i=1;i<select;i++){
            fprintf(ffood,"\n%s %d %f",foodarr[i].name_food,foodarr[i].num_Acc,foodarr[i].price_food);
            printf("\n             %d.%-21s%13d%18.2f Bath",i,foodarr[i].name_food,foodarr[i].num_Acc,foodarr[i].price_food);
        }
        fclose(ffood);
        for(i=select+1;i<=count;i++){
            ffood = fopen("foodarray.txt","a");
            fprintf(ffood,"\n%s %d %f",foodarr[i].name_food,foodarr[i].num_Acc,foodarr[i].price_food);
            printf("\n             %d.%-21s%13d%18.2f Bath",i-1,foodarr[i].name_food,foodarr[i].num_Acc,foodarr[i].price_food);
        }
        fclose(ffood);
    }
    if(select<=count && select==1){
        for(i=2;i<=count;i++){
            fprintf(ffood,"\n%s %d %f",foodarr[i].name_food,foodarr[i].num_Acc,foodarr[i].price_food);
            printf("\n             %d.%-21s%13d%18.2f Bath",i-1,foodarr[i].name_food,foodarr[i].num_Acc,foodarr[i].price_food);
        }
        fclose(ffood);
    }
    printf("\n\n\n\nBack home page (Enter1) / Others menu (Enter2) / Delete again (Enter3): ");
    scanf("%d",&choice);
    switch(choice){
        case 1: Page2();break;
        case 2: SelcetAdmin();break;
        case 3: Fooddelete();break;
    }
}

void Eventdelete()
{
    int count,i=1,choice;
    int select;
    FILE *fevent;
    system("cls");
    PageEvent();
    count = Event();
    fflush(stdin);
    printf("\n\n\nEnter number to Delete: ");
    scanf("%d",&select);
    system("cls");
    printf("-----------------------------------------------------------------------------------------------------------------------");
    printf("\n                                                UPDATE\n");
    PageEvent();
    fevent = fopen("eventarray.txt","w");
    if(select<=count&&select!=1){
        for(i=1;i<select;i++){
            fprintf(fevent,"\n%s %f",eventarr[i].style,eventarr[i].price_event);
            printf("\n                               %d.%-11s%21.2f Bath",i,eventarr[i].style,eventarr[i].price_event);
        }
        fclose(fevent);
        for(i=select+1;i<=count;i++){
            fevent = fopen("eventarray.txt","a");
            fprintf(fevent,"\n%s %f",eventarr[i].style,eventarr[i].price_event);
            printf("\n                               %d.%-11s%21.2f Bath",i-1,eventarr[i].style,eventarr[i].price_event);
        }
        fclose(fevent);
    }
    if(select<=count&&select==1){
        for(i=2;i<=count;i++){
            fprintf(fevent,"\n%s %f",eventarr[i].style,eventarr[i].price_event);
            printf("\n                               %d.%-11s%21.2f Bath",i-1,eventarr[i].style,eventarr[i].price_event);
        }
        fclose(fevent);
    }
    printf("\n\n\n\nBack home page (Enter1) / Others menu (Enter2) / Delete again (Enter3): ");
    scanf("%d",&choice);
    switch(choice){
        case 1: Page2();break;
        case 2: SelcetAdmin();break;
        case 3: Eventdelete();break;
    }
}

void Pagecustomer()
{
    system("cls");
    int select1;
    printf("-----------------------------------------------------------------------------------------------------------------------");
    printf("                                                CUSTOMER SERVICE                ");
    printf("\n                                              ------------------                ");
    printf("\n\n(Enter 1) to select LOCATION service");
    printf("\n(Enter 2) to select FOOD service");
    printf("\n(Enter 3) to select EVENT STYLE service");
    printf("\n(Enter 4) to select all package (Location, food, theme, (Free) event photographer)");
    printf("\n\nPLEASE ENTER: ");
    scanf("%d",&select1);
    printf("\n\n-----------------------------------------------------------------------------------------------------------------------");
    switch(select1)
    {
        case 1: InputLocation();break;
        case 2: InputFood();break;
        case 3: InputEvent();break;
        case 4: InfoPackage();break;
    }
}


void ServiceLocation()
{
    printf("-----------------------------------------------------------------------------------------------------------------------");
    printf("                                                CUSTOMER SERVICE                ");
    printf("\n                                              ------------------                ");
    printf("\nYou select service is location service ");
    printf("\n\n- PLEASE ENTER YOUR INFORMATION -");
}

void ServiceFood()
{
    printf("-----------------------------------------------------------------------------------------------------------------------");
    printf("                                                CUSTOMER SERVICE                ");
    printf("\n                                              ------------------                ");
    printf("\nYou select service is Food service ");
    printf("\n\n- PLEASE ENTER YOUR INFORMATION -");
}

void ServiceEvent()
{
    printf("-----------------------------------------------------------------------------------------------------------------------");
    printf("                                                CUSTOMER SERVICE                ");
    printf("\n                                              ------------------                ");
    printf("\nYou select service is Event Style service ");
    printf("\n\n- PLEASE ENTER YOUR INFORMATION -");
}

void ServicePackage()
{
    printf("-----------------------------------------------------------------------------------------------------------------------");
    printf("                                                CUSTOMER SERVICE                ");
    printf("\n                                              ------------------                ");
    printf("\nYou select service is Total Package ");
    printf("\n\n- PLEASE ENTER YOUR INFORMATION -");
}

int  InfoLocation()
{
    int num;
    system("cls");
    PageLocation();
    Location();
    printf("\n\n\nPlease Enter: ");
    scanf("%d",&num);
    system("cls");
    ServiceLocation();
    FILE *flctcus;
    flctcus = fopen("customerlocation.txt","w");
    printf("\n\nName: ");
    scanf("%s",lction.name_customer);
    printf("\nLastname: ");
    scanf("%s",lction.lastname_customer);
    printf("\nPhone number: ");
    scanf("%s",lction.phone_customer);
    fflush(stdin);
    do{
        printf("\nDate of event (date): ");
        scanf("%d",&lction.date_customer);
    }while(lction.date_customer>=31);
    printf("\nMonth of event (January-December): ");
    scanf("%s",lction.month_customer);
    do{
        printf("\nYear of event (year): ");
        scanf("%d",&lction.year_customer);
    }while(lction.year_customer<2564);
    printf("\n\n------------------------------------------------------------------------------------------------------------------------");
    fprintf(flctcus,"%s %s %s %d %s %d",lction.name_customer,lction.lastname_customer,lction.phone_customer,lction.date_customer,lction.month_customer,lction.year_customer);
    fclose(flctcus);
    return num;
}
void InputLocation()
{
    system("cls");
    int num;
    num = InfoLocation();
    FILE *scdlocation,*flctcus,*pricelct;
    system("cls");
    printf("                                                ***Successfully***");
    printf("\n                                     Please wait The team will contact you back");
    printf("\n-----------------------------------------------------------------------------------------------------------------------");
    flctcus = fopen("customerlocation.txt","r");
    while(!feof(flctcus)){
        fscanf(flctcus,"%s %s %s %d %s %d",lction.name_customer,lction.lastname_customer,lction.phone_customer,&lction.date_customer,lction.month_customer,&lction.year_customer);
    }
    fclose(flctcus);
    printf("\n\t\t\t\t\t        Confirmed %s",locationarr[num].name_lct);
    printf("\n\n\t\t\t\t\t   Your Name: %s",lction.name_customer);
    printf("\n\t\t\t\t\t   Your Lastname: %s",lction.lastname_customer);
    printf("\n\t\t\t\t\t   Your Number Phone: %s",lction.phone_customer);
    fflush(stdin);
    printf("\n\n\t\t\t\t\t   Your Date Event: %d",lction.date_customer);
    printf("\n\t\t\t\t\t   Your Month Event: %s",lction.month_customer);
    printf("\n\t\t\t\t\t   Your Year of Event: %d",lction.year_customer);
    printf("\n\n\n\t\t\t\t\t\t\t\t\t\tPRICE = %.2f BATH",locationarr[num].price_lct);
    printf("\n\n-----------------------------------------------------------------------------------------------------------------------\n");
    scdlocation = fopen("schedulelocation.txt","a");
    fprintf(scdlocation,"\n\t\t\t\t\t   Confirmed %s\n",locationarr[num].name_lct);
    fprintf(scdlocation,"\n\t\t\t\t\t   Your Name: %s",lction.name_customer);
    fprintf(scdlocation,"\n\t\t\t\t\t   Your Lastname: %s",lction.lastname_customer);
    fprintf(scdlocation,"\n\t\t\t\t\t   Your Number Phone: %s",lction.phone_customer);
    fflush(stdin);
    fprintf(scdlocation,"\n\n\t\t\t\t\t   Your Date Event: %d",lction.date_customer);
    fprintf(scdlocation,"\n\t\t\t\t\t   Your Month Event: %s",lction.month_customer);
    fprintf(scdlocation,"\n\t\t\t\t\t   Your Year of Event: %d",lction.year_customer);
    fprintf(scdlocation,"\n\t\t\t\t\t   PRICE = %.2f BATH\n",locationarr[num].price_lct);
    fprintf(scdlocation,"\n\n-----------------------------------------------------------------------------------------------------------------------");
    fclose(scdlocation);
    getch();
    Page2();
}

int InfoFood()
{
    int num,numperson_food;
    system("cls");
    PageFood();
    Food();
    printf("\n** Chinese Tables can't book more than 100 Tables **: ");
    printf("\n\n\nPlease Enter: ");
    scanf("%d",&num);
    while(num==1){
        printf("\nHow many table do you want? (10 person / 1 table): ");
        scanf("%d",&numperson_food);
        if(numperson_food > 0 && numperson_food <= 100){
            foodarr[num].price_food = 3000 * numperson_food;
            break;
        }else{
            printf("\nPlease try again too many tables must less than or equal to 100 tables\n");
            getch();
        }
    }
    system("cls");
    ServiceFood();
    FILE *ffoodcus;
    ffoodcus = fopen("customerfood.txt","w");
    printf("\n\nName: ");
    scanf("%s",foodcus.name_customer);
    printf("\nLastname: ");
    scanf("%s",foodcus.lastname_customer);
    printf("\nPhone number: ");
    scanf("%s",foodcus.phone_customer);
    fflush(stdin);
    do{
        printf("\nDate of event (date): ");
        scanf("%d",&foodcus.date_customer);
    }while(foodcus.date_customer>=31);
    printf("\nMonth of event (January-December): ");
    scanf("%s",foodcus.month_customer);
    do{
        printf("\nYear of event (year): ");
        scanf("%d",&foodcus.year_customer);
    }while(foodcus.year_customer<2564);
    printf("\n\n------------------------------------------------------------------------------------------------------------------------");
    fprintf(ffoodcus,"%s %s %s %d %s %d",foodcus.name_customer,foodcus.lastname_customer,foodcus.phone_customer,foodcus.date_customer,foodcus.month_customer,foodcus.year_customer);
    fclose(ffoodcus);
    return num;
}

void InputFood()
{
    system("cls");
    int num;
    num = InfoFood();
    //customer custom;
    FILE *scdfood,*ffoodcus,*pricefood;
    system("cls");
    printf("                                                ***Successfully***");
    printf("\n                                     Please wait The team will contact you back");
    printf("\n-----------------------------------------------------------------------------------------------------------------------");
    ffoodcus = fopen("customerfood.txt","r");
    while(!feof(ffoodcus)){
        fscanf(ffoodcus,"%s %s %s %d %s %d",foodcus.name_customer,foodcus.lastname_customer,foodcus.phone_customer,&foodcus.date_customer,foodcus.month_customer,&foodcus.year_customer);
    }
    fclose(ffoodcus);
    printf("\n\t\t\t\t\t        Confirmed %s",foodarr[num].name_food);
    printf("\n\n\t\t\t\t\t   Your Name: %s",foodcus.name_customer);
    printf("\n\t\t\t\t\t   Your Lastname: %s",foodcus.lastname_customer);
    printf("\n\t\t\t\t\t   Your Number Phone: %s",foodcus.phone_customer);
    fflush(stdin);
    printf("\n\n\t\t\t\t\t   Your Date Event: %d",foodcus.date_customer);
    printf("\n\t\t\t\t\t   Your Month Event: %s",foodcus.month_customer);
    printf("\n\t\t\t\t\t   Your Year of Event: %d",foodcus.year_customer);
    printf("\n\n\n\t\t\t\t\t\t\t\t\t\tPRICE = %.2f BATH",foodarr[num].price_food);
    printf("\n\n-----------------------------------------------------------------------------------------------------------------------\n");
    scdfood = fopen("schedulefood.txt","a");
    fprintf(scdfood,"\n\t\t\t\t\t   Confirmed %s\n",foodarr[num].name_food);
    fprintf(scdfood,"\n\t\t\t\t\t   Customer Name: %s",foodcus.name_customer);
    fprintf(scdfood,"\n\t\t\t\t\t   Customer Lastname: %s",foodcus.lastname_customer);
    fprintf(scdfood,"\n\t\t\t\t\t   Customer Number Phone: %s",foodcus.phone_customer);
    fflush(stdin);
    fprintf(scdfood,"\n\n\t\t\t\t\t   Your Date Event: %d",foodcus.date_customer);
    fprintf(scdfood,"\n\t\t\t\t\t   Your Month Event: %s",foodcus.month_customer);
    fprintf(scdfood,"\n\t\t\t\t\t   Your Year of Event: %d",foodcus.year_customer);
    fprintf(scdfood,"\n\t\t\t\t\t   PRICE = %.2f BATH\n",foodarr[num].price_food);
    fprintf(scdfood,"\n\n-----------------------------------------------------------------------------------------------------------------------");
    fclose(scdfood);
    getch();
    Page2();
}

int  InfoEvent()
{
    int num;
    system("cls");
    PageEvent();
    Event();
    printf("\n\n\nPlease Enter: ");
    scanf("%d",&num);
    system("cls");
    ServiceEvent();
    FILE *fevcus;
    fevcus = fopen("customerevent.txt","w");
    printf("\n\nName: ");
    scanf("%s",eventcus.name_customer);
    printf("\nLastname: ");
    scanf("%s",eventcus.lastname_customer);
    printf("\nPhone number: ");
    scanf("%s",eventcus.phone_customer);
    fflush(stdin);
    do{
        printf("\nDate of event (date): ");
        scanf("%d",&eventcus.date_customer);
    }while(eventcus.date_customer>=31);
    printf("\nMonth of event (January-December): ");
    scanf("%s",eventcus.month_customer);
    do{
        printf("\nYear of event (year): ");
        scanf("%d",&eventcus.year_customer);
    }while(eventcus.year_customer<2564);
    printf("\n\n------------------------------------------------------------------------------------------------------------------------");
    fprintf(fevcus,"%s %s %s %d %s %d",eventcus.name_customer,eventcus.lastname_customer,eventcus.phone_customer,eventcus.date_customer,eventcus.month_customer,eventcus.year_customer);
    fclose(fevcus);
    return num;
}
void InputEvent()
{
    system("cls");
    int num;
    num = InfoEvent();
    FILE *scdevent,*fevcus,*priceev;
    system("cls");
    printf("                                                ***Successfully***");
    printf("\n                                     Please wait The team will contact you back");
    printf("\n-----------------------------------------------------------------------------------------------------------------------");
    fevcus = fopen("customerevent.txt","r");
    while(!feof(fevcus)){
        fscanf(fevcus,"%s %s %s %d %s %d",eventcus.name_customer,eventcus.lastname_customer,eventcus.phone_customer,&eventcus.date_customer,eventcus.month_customer,&eventcus.year_customer);
    }
    fclose(fevcus);
    printf("\n\t\t\t\t\t        Confirmed %s",eventarr[num].style);
    printf("\n\n\t\t\t\t\t   Your Name: %s",eventcus.name_customer);
    printf("\n\t\t\t\t\t   Your Lastname: %s",eventcus.lastname_customer);
    printf("\n\t\t\t\t\t   Your Number Phone: %s",eventcus.phone_customer);
    fflush(stdin);
    printf("\n\n\t\t\t\t\t   Your Date Event: %d",eventcus.date_customer);
    printf("\n\t\t\t\t\t   Your Month Event: %s",eventcus.month_customer);
    printf("\n\t\t\t\t\t   Your Year of Event: %d",eventcus.year_customer);
    printf("\n\n\n\t\t\t\t\t\t\t\t\t\tPRICE = %.2f BATH",eventarr[num].price_event);
    printf("\n\n-----------------------------------------------------------------------------------------------------------------------\n");
    scdevent = fopen("scheduleevent.txt","a");
    fprintf(scdevent,"\n\t\t\t\t\t   Confirmed %s\n",eventarr[num].style);
    fprintf(scdevent,"\n\t\t\t\t\t   Customer Name: %s",eventcus.name_customer);
    fprintf(scdevent,"\n\t\t\t\t\t   Customer Lastname: %s",eventcus.lastname_customer);
    fprintf(scdevent,"\n\t\t\t\t\t   Customer Number Phone: %s",eventcus.phone_customer);
    fflush(stdin);
    fprintf(scdevent,"\n\n\t\t\t\t\t   Your Date Event: %d",eventcus.date_customer);
    fprintf(scdevent,"\n\t\t\t\t\t   Your Month Event: %s",eventcus.month_customer);
    fprintf(scdevent,"\n\t\t\t\t\t   Your Year of Event: %d",eventcus.year_customer);
    fprintf(scdevent,"\n\t\t\t\t\t   PRICE = %.2f BATH\n",eventarr[num].price_event);
    fprintf(scdevent,"\n\n-----------------------------------------------------------------------------------------------------------------------");
    fclose(scdevent);
    getch();
    Page2();
}

int CalPackage(int num1,int num2,int num3)
{
    float sum=0,income=0;
    float pricetotal=0;
    float discount;
    FILE *pricepk,*scdpk;
    sum = locationarr[num1].price_lct+foodarr[num2].price_food+eventarr[num3].price_event;
    pricetotal = sum*0.9;
    printf("\n\t\t\t\t\t            Confirmed");
    printf("\n\n\t\t\t\t\t   Location is %s = %.2f Bath",locationarr[num1].name_lct,locationarr[num1].price_lct);
    printf("\n\t\t\t\t\t   Food is %s = %.2f Bath",foodarr[num2].name_food,foodarr[num2].price_food);
    printf("\n\t\t\t\t\t   Event Style is %s = %.2f Bath",eventarr[num3].style,eventarr[num3].price_event);
    printf("\n\n\t\t\t\t\t   Your Name: %s",pack.name_customer);
    printf("\n\t\t\t\t\t   Your Lastname: %s",pack.lastname_customer);
    printf("\n\t\t\t\t\t   Your Number Phone: %s",pack.phone_customer);
    fflush(stdin);
    printf("\n\n\t\t\t\t\t   Your Date Event: %d",pack.date_customer);
    printf("\n\t\t\t\t\t   Your Month Event: %s",pack.month_customer);
    printf("\n\t\t\t\t\t   Your Year of Event: %d",pack.year_customer);
    printf("\n\n\n\t\t\t\t\t\t\t\t\t\t      PRICE = %.2f BATH",sum);
    printf("\n\n\t\t\t\t\t\t\t\t\t\t *You get a discount* 10 Percent");
    printf("\n\n\t\t\t\t\t\t\t\t\t\t   Total Price = %.2f BATH",pricetotal);
    printf("\n\n-----------------------------------------------------------------------------------------------------------------------");
    scdpk = fopen("schedulepackage.txt","a");
    fprintf(scdpk,"\n\t\t\t\t\t            Confirmed");
    fprintf(scdpk,"\n\n\t\t\t\t\t   Location is %s",locationarr[num1].name_lct);
    fprintf(scdpk,"\n\t\t\t\t\t   Food is %s",foodarr[num2].name_food);
    fprintf(scdpk,"\n\t\t\t\t\t   Event Style is %s",eventarr[num3].style);
    fprintf(scdpk,"\n\n\t\t\t\t\t   Customer Name: %s",pack.name_customer);
    fprintf(scdpk,"\n\t\t\t\t\t   Customer Lastname: %s",pack.lastname_customer);
    fprintf(scdpk,"\n\t\t\t\t\t   Customer Number Phone: %s",pack.phone_customer);
    fflush(stdin);
    fprintf(scdpk,"\n\n\t\t\t\t\t   Customer Date Event: %d",pack.date_customer);
    fprintf(scdpk,"\n\t\t\t\t\t   Customer Month Event: %s",pack.month_customer);
    fprintf(scdpk,"\n\t\t\t\t\t   Customer Year of Event: %d",pack.year_customer);
    fprintf(scdpk,"\n\t\t\t\t\t   PRICE = %.2f BATH",pricetotal);
    fprintf(scdpk,"\n\n-----------------------------------------------------------------------------------------------------------------------");
    fclose(scdpk);
    getch();
    Page2();
}

int  InfoPackage()
{
    int num1,num2,num3,numperson_food,month,date;
    system("cls");
    printf("-----------------------------------------------------------------------------------------------------------------------");
    printf("                                              All Package                ");
    printf("\n                                          =================               ");
    printf("\n                                          PROMOTION FOR YOU !!                ");
    printf("\n                   If you receive the whole package, you will get 10 percent discount               ");
    printf("\n                   +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n\n");
    PageLocation();
    Location();
    printf("\n\n\nPlease Enter: ");
    scanf("%d",&num1);
    PageFood();
    Food();
    printf("\n** Chinese Tables can't book more than 100 Tables **: ");
    printf("\n\n\nPlease Enter: ");
    scanf("%d",&num2);
    while(num2==1){
        printf("\nHow many table do you want? (10 person / 1 table): ");
        scanf("%d",&numperson_food);
        if(numperson_food > 0 && numperson_food <= 100){
            foodarr[num2].price_food = 3000 * numperson_food;
            break;
        }else{
            printf("\nPlease try again too many tables must less than or equal to 100 tables\n");
            getch();
        }
    }
    PageEvent();
    Event();
    printf("\n\n\nPlease Enter: ");
    scanf("%d",&num3);
    system("cls");
    ServicePackage();
    FILE *fpk;
    fpk = fopen("customerpackage.txt","w");
    printf("\n\nName: ");
    scanf("%s",pack.name_customer);
    printf("\nLastname: ");
    scanf("%s",pack.lastname_customer);
    printf("\nPhone number: ");
    scanf("%s",pack.phone_customer);
    fflush(stdin);
    do{
        printf("\nDate of event (date): ");
        scanf("%d",&pack.date_customer);
    }while(pack.date_customer>=31);
    printf("\nMonth of event (January-December): ");
    scanf("%s",pack.month_customer);
    do{
        printf("\nYear of event (year): ");
        scanf("%d",&pack.year_customer);
    }while(pack.year_customer<2564);
    printf("\n\n------------------------------------------------------------------------------------------------------------------------");
    fprintf(fpk,"%s %s %s %d %s %d",pack.name_customer,pack.lastname_customer,pack.phone_customer,pack.date_customer,pack.month_customer,pack.year_customer);
    fclose(fpk);
    FILE *scdpk,*pricepk;
    system("cls");
    printf("                                                ***Successfully***");
    printf("\n                                     Please wait The team will contact you back");
    printf("\n-----------------------------------------------------------------------------------------------------------------------");
    fpk = fopen("customerpackage.txt","r");
    while(!feof(fpk)){
        fscanf(fpk,"%s %s %s %d %s %d",pack.name_customer,pack.lastname_customer,pack.phone_customer,&pack.date_customer,pack.month_customer,&pack.year_customer);
    }
    fclose(fpk);
    CalPackage(num1,num2,num3);
}


void Schedule(int select)
{
    int choice;
    system("cls");
    char read;
    if(select==1){
        FILE *scdlct;
        if((scdlct = fopen("schedulelocation.txt","r")) == NULL){
        printf("Error in open file");
        exit(1);
        }else{
            printf("\n\t\t\t\t\t            LOCATION CUSTOMER");
            printf("\n\n-----------------------------------------------------------------------------------------------------------------------\n");
            while((read = fgetc(scdlct)) != EOF){
                printf("%c",read);
            }
        fclose(scdlct);
    }
    printf("\n\n\n\nBack home page (Enter1) / Others menu (Enter2) / Other Schedule (Enter3): ");
    scanf("%d",&choice);
    switch(choice){
        case 1: Page2();break;
        case 2: SelcetAdmin();break;
        case 3: Pageschedule();break;
    }
    }
    if(select==2){
        FILE *scdfood;
        if((scdfood = fopen("schedulefood.txt","r")) == NULL){
        printf("Error in open file");
        exit(1);
        }else{
            printf("\n\t\t\t\t\t            FOOD CUSTOMER");
            printf("\n\n-----------------------------------------------------------------------------------------------------------------------\n");
            while((read = fgetc(scdfood)) != EOF){
                printf("%c",read);
            }
        fclose(scdfood);
    }
    printf("\n\n\n\nBack home page (Enter1) / Others menu (Enter2) / Other Schedule (Enter3): ");
    scanf("%d",&choice);
    switch(choice){
        case 1: Page2();break;
        case 2: SelcetAdmin();break;
        case 3: Pageschedule();break;
    }
    }
    if(select==3){
        FILE *scdevent;
        if((scdevent = fopen("scheduleevent.txt","r")) == NULL){
        printf("Error in open file");
        exit(1);
        }else{
            printf("\n\t\t\t\t\t            EVENT CUSTOMER");
            printf("\n\n-----------------------------------------------------------------------------------------------------------------------\n");
            while((read = fgetc(scdevent)) != EOF){
                printf("%c",read);
            }
        fclose(scdevent);
    }
    printf("\n\n\n\nBack home page (Enter1) / Others menu (Enter2) / Other Schedule (Enter3): ");
    scanf("%d",&choice);
    switch(choice){
        case 1: Page2();break;
        case 2: SelcetAdmin();break;
        case 3: Pageschedule();break;
    }
    }
    if(select==4){
        FILE *scdpk;
        if((scdpk = fopen("schedulepackage.txt","r")) == NULL){
        printf("Error in open file");
        exit(1);
        }else{
            printf("\n\t\t\t\t\t            PACKAGE CUSTOMER");
            printf("\n\n-----------------------------------------------------------------------------------------------------------------------\n");
            while((read = fgetc(scdpk)) != EOF){
                printf("%c",read);
            }
        fclose(scdpk);
    }
    printf("\n\n\n\nBack home page (Enter1) / Others menu (Enter2) / Other Schedule (Enter3): ");
    scanf("%d",&choice);
    switch(choice){
        case 1: Page2();break;
        case 2: SelcetAdmin();break;
        case 3: Pageschedule();break;
    }
    }
    getch();
    SelcetAdmin();
}
