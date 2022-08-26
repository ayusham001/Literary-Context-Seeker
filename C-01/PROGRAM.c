#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void bk(){
    printf("\033[1;30m");
}
void r(){
    printf("\033[1;31m");
}
void g(){
    printf("\033[1;32m");
}
void y(){
    printf("\033[1;33m");
}
void b(){
    printf("\033[1;34m");
}
void p(){
    printf("\033[1;35m");
}
void c(){
    printf("\033[1;36m");
}
void w(){
    printf("\033[1;37m");
}
void reset(){
    printf("\033[0m");
}
int main()
{
    int a,o,z,f,h;
    int e,i,u;
    int ch=1 , df=1;
    w();
    printf("\n\n\n                                                         **********************************************************\n");
    reset();
    p();
    printf("                                                          \n                                                                            LITERARY CONTEST SPOTTER\n                                                          \n                                                          ");
    reset();
    c();
    printf("The aim of this engine is to reduce the amount of time\n                                                          and efforts consumed in the proces of searching for\n                                                          the right contest.\n");
    reset();
    r();
    printf("\n                                                          Enter 1 for CONTESTS IN INDIAN SUBCONTINENT\n                                                          Enter 2 for INTERNATIONAL CONTESTS\n\n");
    reset();
    w();
    printf("                                                        **********************************************************\n\n");
    reset();
    scanf("%d",&a);
    switch (a)
    {
    case 1:
        y();
        printf("                                                                           Contests in Indian Sub-continent\n");
        reset();
        w();
        printf("                                                                           ********************************\n");
        reset();
        p();
        printf("                                                                           Enter the attribute of your choice\n                                                                           Press 1 for Poetry Contests\n                                                                           Press 2 for Essay Contests\n                                                                           Press 3 for Article Contests \n                                                                           Press 4 for Story Contests\n\n");
        reset();
        scanf("%d",&o);
        switch (o)
        {
        case 1:
            r();
            printf("                                                                           POETRY CONTESTS\n");
            reset();
            w();
            printf("                                                                           ***************\n");
            reset();
            c();
            printf("                                                                           Press 1 for Free Contests\n                                                                           Press 2 for Paid Cotests\n\n");
            reset();
            scanf("%d" , &z);
            switch (z)
            {
            case 1:
                y();
                printf("                                                                           FREE CONTESTS\n");
                reset();
                w();
                printf("                                                                           *************\n");
                reset();
                p();
                printf("                                                                           Press 1 for Free Publication as a Prize\n                                                                           Press 2 for Cash Prize\n");
                break;

            
            case 2:
                y();
                printf("                                                                           PAID CONTESTS\n");
                reset();
                w();
                printf("                                                                           *************\n");
                reset();
                while(ch==1){
                p();
                printf("                                                                           Press 3 for Free Publication + Gift Voucher as a Prize\n                                                                           Press 4 for Cash Prize\n\n");
                reset();
                scanf("%d" , &f);
                
                switch (f)
                {
                case 3:
                    c();
                    printf("\n                                                                           POETIC PALACE\n");
                    reset();
                    w();
                    printf("                                                                           -------------\n");
                    reset();
                    r();
                    printf("                                                                           Poetic Palace is a Writing Platform/Marketplace that connects the world to expert writers,\n                                                                           envisioned towards initiating the global impact of poetry in one central location.\n                                                                           We are fortified with experienced and distinctive poets with a demonstrated\n                                                                           history of working in the Writing and Editing industry\n");
                    reset(); 
                    b();
                    printf("                                                                           Theme: No theme\n                                                                           Fees: Rs350 for one entry each\n                                                                           Eligibility: For people aged 21 and above\n                                                                           Date of Submission: 30th september, 2021\n");
                    reset();
                    w();
                    printf("\n                                                                           *******\n");
                    reset();
                    y();
                    printf("\n                                                                           THE WRITCO PRIZE\n");
                    reset();
                    w();
                    printf("                                                                           ----------------\n");
                    reset();
                    p();
                    printf("                                                                           The Writco creates an original platform for established &\n                                                                           non-established poets and provides the public with consistent\n                                                                           access to contemporary poetry.\n");
                    reset();
                    b();
                    printf("                                                                           Fees: Rs 200 (ONLY ONE ENTRY PER PERSON)\n                                                                           Eligibility: For people aged 18 and above\n                                                                           Date of Submission: 28th Octobe, 2021\n");
                    reset();
                    break;
                
                case 4:
                    c();
                    printf("\n                                                                           THE POETRY PALLETTE\n");
                    reset();
                    w();
                    printf("                                                                           -----------------------\n");
                    reset();
                    r();
                    printf("                                                                           The Poetry Pallette runs a National poetry,\n                                                                           art, speech and song competition for young people aged 18 and above,\n                                                                           focusing on conflict and its impact.\n                                                                           We amplify the voices of young people all over the world.\n");
                    reset();
                    b();
                    printf("                                                                           Theme: LOVE\n                                                                           Fees: Rs300 per entry (only 2 entries per person is allowed)\n                                                                           Eligibility: For people aged 15 and above\n                                                                           Date of Submission: 21 october, 2021\n");
                    printf("                                                                           Cash Prize: Rs5000 for winner, Rs 2000 for 1st runner up, Rs1000 for 2nd runner up\n\n");
                    reset();
                    w();
                    printf("\n                                                                           *********\n");
                    reset();
                    y();
                    printf("\n                                                                           THE WILLIAM GOLDING PRIZE\n");
                    reset();
                    w();
                    printf("                                                                           --------------------------\n");
                    reset();
                    p();
                    printf("                                                                           The William Goulding Prize is a not-for-profit organization;\n                                                                           all moneys raised from the competition benefits writers and writing.\n");
                    reset();
                    b();
                    printf("                                                                           Fees: Rs200/entry\n                                                                           Eligibility: For age 18+\n                                                                           Date of Submission: 30th november, 2021\n");
                    reset();
                     g();
                    printf("\n                                                                           press 1 to register into 'THE POETRY PALLETTE'\n                                                                           press 2 to register into 'THE WILLIAM GOLDING PRIZE'\n\n");
                    reset();
                    scanf("%d",&h);
                    switch (h)
                    {
                        case 1:
                           system("explorer file:///C:/Users/Ayu/OneDrive/Desktop/Coding/project/C-01/form.html");
                        break;
                
                        case 2:
                        r();
                        printf("                                                                           Contest not available");
                        reset();
                        break;
                    }
                    break;
                }
                printf("\n                                                                           do you want to continue y/n\n");
                scanf("%d" , &ch);
                }
                break;
            }
            break;
        
        
        }
        break;
    case 2:
        c();
        printf("International Contests ");
        reset();
        w();
        printf("********\n");
        reset();
        p();
        printf("Enter the attribute of your choice\nPress 1 for Poetry Contests\nPress 2 for Essay Contests\nPress 3 for Article Contests \nPress 4 for Story Contests\n\n");
        reset();
        scanf("%d",&e);
        switch (e)
        {
        case 1:
            r();
            printf("POETRY CONTESTS\n");
            reset();
            w();
            printf("*****\n");
            reset();
            c();
            printf("Press 1 for Free Contests\nPress 2 for Paid Cotests\n\n");
            reset();
            scanf("%d" , &i);
            switch (i)
            {
            case 1:
                y();
                printf("FREE CONTESTS\n");
                reset();
                w();
                printf("*****\n");
                reset();
                p();
                printf("Press 1 for Free Publication as a Prize\nPress 2 for Cash Prize\n");
                break;

            
            case 2:
                y();
                printf("PAID CONTESTS\n");
                reset();
                w();
                printf("*****\n");
                reset();
                while(df==1)
                {
                p();
                printf("Press 3 for Free Publication + Gift Voucher as a Prize\nPress 4 for Cash Prize\n\n");
                reset();
                scanf("%d" , &u);
                
                switch (u)
                {
                case 3:
                    c();
                    printf("\nPOET'S PLACE\n");
                    reset();
                    w();
                    printf("-------------\n");
                    reset();
                    r();
                    printf("Poet's Place is a Writing Platform/Marketplace that connects the world to expert writers,\nenvisioned towards initiating the global impact of poetry in one central location.\nWe are fortified with experienced and distinctive poets with a demonstrated\nhistory of working in the Writing and Editing industry\n");
                    reset(); 
                    b();
                    printf("Theme: No theme\nFees: Rs350 for one entry each\nEligibility: For people aged 21 and above\nDate of Submission: 30th september, 2021\n");
                    reset();
                    w();
                    printf("\n***\n");
                    reset();
                    y();
                    printf("\nWRITE IT DOWN\n");
                    reset();
                    w();
                    printf("----------------\n");
                    reset();
                    p();
                    printf("Write It Down creates an original platform for established &\nnon-established poets and provides the public with consistent\naccess to contemporary poetry.\n");
                    reset();
                    b();
                    printf("Fees: Rs 200 (ONLY ONE ENTRY PER PERSON)\nEligibility: For people aged 18 and above\nDate of Submission: 28th Octobe, 2021\n");
                    reset();
                    break;
                
                case 4:
                    c();
                    printf("\nTHE HERITAGE OF POETRY\n");
                    reset();
                    w();
                    printf("-----------------------\n");
                    reset();
                    r();
                    printf("The HERITAGE OF POETRY runs a National poetry,\nart, speech and song competition for young people aged 18 and above,\nfocusing on conflict and its impact.\nWe amplify the voices of young people all over the world.\n");
                    reset();
                    b();
                    printf("Theme: LOVE\nFees: Rs300 per entry (only 2 entries per person is allowed)\nEligibility: For people aged 15 and above\nDate of Submission: 21 october, 2021\n");
                    printf("Cash Prize: Rs5000 for winner, Rs 2000 for 1st runner up, Rs1000 for 2nd runner up\n\n");
                    reset();
                    w();
                    printf("\n***\n");
                    reset();
                    y();
                    printf("\nTHE CROUSEL\n");
                    reset();
                    w();
                    printf("--------------------------\n");
                    reset();
                    p();
                    printf("The Crousel is a not-for-profit organization;\nall moneys raised from the competition benefits writers and writing.\n");
                    reset();
                    b();
                    printf("Fees: Rs200/entry\nEligibility: For age 18+\nDate of Submission: 30th november, 2021\n");
                    reset();
                    break;
                }
                printf("\ndo you want to continue y/n\n");
                scanf("%d" , &df);
                }
                break;
            }
            break;
        
        
        }
        break;
    
    default:
        break;
    }
}
