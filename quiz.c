#include<stdio.h>
void main()
{
    int start,point=0;
    char opt;
    printf("Wolcome to a simple quiz\n");
    printf("Enter 1 to continue\nEnter 0 to exit\n");
    scanf("%d",&start);
    if(start==1)
    {
        printf("You have 5 questions select the correct option\n\n");
        printf("1.In which decade was the American Institute of Electrical Engineers (AIEE) founded?\n");
        printf("a)1850s\n");
        printf("b)1880s\n");
        printf("c)1930s\n");
        printf("d)1950s\n");
        scanf("%s",&opt);
        if(opt=='b')
        {
            point++;
            opt='d';
            
        }
        printf("2.What is part of a database that holds only one type of information?\n");
        printf("a)Report\n");
        printf("b)Field\n");
        printf("c)Record\n");
        printf("d)File\n");
        scanf("%s",&opt);
        if(opt=='b')
        {
            point++;
            opt='d';
        }
        printf("3.'OS' computer abbreviation usually means ?\n");
        printf("a)Order of Significance\n");
        printf("b)Open Software\n");
        printf("c)Operating System\n");
        printf("d)Optical Sensor\n");
        scanf("%s",&opt);
        if(opt=='c')
        {
            point++;
            opt='d';
        }
        printf("4.In which decade with the first transatlantic radio broadcast occur?\n");
        printf("a)1850s\n");
        printf("b)1860s\n");
        printf("c)1870s\n");
        printf("d)1900s\n");
        scanf("%s",&opt);
        if(opt=='d')
        {
            point++;
            opt='d';
        }
        printf("5.'.MOV' extension refers usually to what kind of file?\n");
        printf("a)Image file\n");
        printf("b)Animation/movie file\n");
        printf("c)Audio file\n");
        printf("d)MS Office document\n");
        scanf("%s",&opt);
        if(opt=='b')
        {
            point++;
        }
        printf("\nYou scored %d/5",point);
    }else if(start==0){
        printf("Thankyou\n");
    }else
    {
        printf("invalide input\n");
    }
    
}