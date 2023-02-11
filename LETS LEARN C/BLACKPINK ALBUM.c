#include <stdio.h>
int main()
{
    int options;
    char album;
   // printf("\n\n \t\t\t\t\t=============================================\n");
    printf("\n\n \t\t\t\t\t enter an option to get the tracklist ->\n\n");
    printf("\t1. square one\n");
    printf("\t2. square two\n");
    printf("\t3. Re-BLACKPINK\n");
    printf("\t4. square up\n");
    printf("\t5. BLACKPINK In Your Area\n");
    printf("\t6. kill this love\n");
    printf("\t7. how you like that\n");
    printf("\t8. born pink\n\n");
    printf("\tenter-> ");
    scanf("%d",&options)  ;

    system("cls");

    switch(options)
    {
    case 1 :
        printf("\n\n\t\t\t\t\tyou've selected ->square one album\n\n  square one playlist ->>\n");
        printf("\n 1. Whistle\n\n 2. Boombayah\n\n\n");
        break;

        case 2 :
        printf("\n\n\t\t\t\t\tyou've selected =>square two album\n\n  square two playlist ->>\n");
        printf("\n 1. Playing With Fire\n\n 2. Stay\n\n 3. Whistle (Acoustic Version)\n\n\n");
        break;

        case 3 :
            printf("\n\n\t\t\t\t\tyou've selected Re-Blackpink album\n\n  Re-Blackpink playlist ->>\n");
            printf("\n 1. Boombayah (Japanese version)\n\n 2. Whistle (Japanese version)\n\n 3. Playing With Fire (Japanese version)\n\n 4. Stay (Japanese version)\n\n 5. As If Its Your Last (Japanese version)\n\n 6. Whistle (Acoustic version/Japanese version)\n\n 7. Boombayah\n\n 8. Whistle\n\n 9. Playing With Fire\n\n 10. Stay\n\n 11. As If Its Your Last\n\n 12. Whistle (Acoustic Version)\n\n");
            break;

        case 4 :
            printf("\n\n\t\t\t\t\tyou've selected =>square up album\n\n   square up playlist ->>\n");
            printf("\n 1. Ddu-Du, Ddu-Du\n\n 2. Forever Young\n\n 3. Really\n\n 4. See U Later\n\n 5. As If Its Your Last (hidden track)\n\n\n");
            break;

        case 5 :
            printf("\n\n\t\t\t\t\tyou've selected =>Blackpink In Your Area album\n\n   Blackpink In Your Area  playlist ->>\n");
            printf("\n 1. Boombayah\n\n 2. Whistle\n\n 3. Playing With Fire\n\n 4. Stay\n\n 5. As If Its Your Last\n\n 6. Ddu-Du, Ddu-Du\n\n 7. Forever Young\n\n 8. Really\n\n 9. See U Later\n\n\n");
            break;
        case 6 :
             printf("\n\n\t\t\t\t\tyou've selected =>Kill This Love\n\n   Blackpink In Your Area  playlist ->>\n");
            printf("\n 1. Kill This Love\n\n 2. Don t  Know What To Do\n\n 3. Kick It\n\n 4. Hope Not\n\n 5. Ddu-Du, Ddu-Du (Remix)\n\n\n");
            break;

        case 7 :
             printf("\n\n\t\t\t\t\tyou've selected =>How you Like that album\n\n   How you Like that playlist ->>\n");
            printf("\n 1. How You Like That\n\n 2. Ice Cream by BLACKPINK & Selena Gomez\n\n 3. Pretty Savage\n\n 4. Bet You Wanna (Ft. Cardi B)\n\n 5. Lovesick Girls\n\n 6. Crazy Over You\n\n 6. Love To Hate Me\n\n 7. You Never Know\n\n\n");
            break;

        case 8 :
             printf("\n\n\t\t\t\t\tyou've selected =>Born Pink album\n\n   Born pink playlist ->>\n");
            printf("\n 1. pink venom\n 2. Shut Down\n 3. Typa Girl\n 4. Yeah Yeah Yeah\n 5. Hard to Love\n 6. The Happiest Girl\n 7. Tally\n 8. Ready For Love");
            break;

        default:
            printf("\nAn BlackPink album of that name doesn't exist");

    }
    getch();
}
