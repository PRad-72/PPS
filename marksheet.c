#include <stdio.h>


int main(){
    int n, i, j, roll, marks[3],total=0;
    char name[50];
    float per;
     printf("Enter number of students: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    
   

        printf("\nStudent %d\n", i+1);

        printf("Roll: ");
        scanf("%d", &roll);

        printf("Name: ");
        scanf("%s", name);

        printf("Enter 3 marks: ");
        for(j=0;j<3;j++){
            scanf("%d", &marks[j]);
            total += marks[j]; 
      }
        per = total/3;
        printf("\n--- Results ---\n");
        printf("Roll: %d", roll);
        printf("\nName: %s", name);
        printf("\nTotal: %d", total);
        printf("\nPercentage: %.2f\n",per);
        if(per >= 40)
        {
          printf("\nResult: PASS\n");
        }
        else
        {
           printf("\nResult: FAIL\n");
        }
        total=0;
    }

    return 0;
}
