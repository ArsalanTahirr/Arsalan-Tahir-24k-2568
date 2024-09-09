#include <stdio.h>
int main() {
    int fsc_marks, fsc_percent, nts_marks;
    printf("Enter your F.Sc. marks out of 1200: ");
    scanf("%d", &fsc_marks);
    fsc_percent=(fsc_marks*100)/1200;
    printf("Enter your NTS marks (percentage): ");
    scanf("%d", &nts_marks);
    if (fsc_percent > 70 && nts_marks >= 70)
        printf("You have secured admission in Oxford University IT\n");
    else if (fsc_percent > 70 && nts_marks >= 60)
        printf("You have secured admission in Oxford University Electronics\n");
    else if (fsc_percent > 70 && nts_marks >= 50)
        printf("You have secured admission in Oxford University Telecommunication\n");
    else if (fsc_percent >= 60 && fsc_percent <= 70 && nts_marks >= 50)
        printf("You have secured admission in MIT IT\n");
    else if (fsc_percent >= 50 && fsc_percent <= 59 && nts_marks >= 50)
        printf("You have secured admission in MIT Chemical\n");
    else if (fsc_percent >= 40 && fsc_percent < 50 && nts_marks >= 50)
        printf("You have secured admission in MIT Computer\n");
    else
        printf("You marks does not meet the eligibility criteria of any university\n");

    return 0;
}

