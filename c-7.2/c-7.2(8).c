#include <stdio.h>

int main() {
    int i, j, k=1;

    for(i = 1; i <= 10; i++) 
    {
       
        // i<5?k++:k--;
        
        for(j = 1; j <= 10; j++) 
        {
            if (j <= 6 - k || j >= 5+k)
            {
                if(j<=5)
                {
                    printf("%d",j);
                }
        
                else
                {
                    printf("%d",11-j);
                }  
            } 
            else 
            {
                printf(" ");
            }
        }
        printf("\n");
        
        if(i<5)
        {
            k++;
        }
        
        if(i>5)
        {
            k--;
        }
    }

    return 0;
}




// -----------------------------------------------------------



#include <stdio.h>

int main() {
    int i, j, k;

    for(i = 1; i <= 5; i++) 
    {
        k = 1;
        for(j = 1; j <= 10; j++) 
        {
            if (j <= 6 - i || j >= 5 + i) 
            {
                printf("%d", k);
                if (j < 5) 
                {
                    k++;
                } else if (j > 5) 
                {
                    k--;
                }
            } 
            else 
            {
                printf(" ");
                if (j == 6) 
                {
                    k--;
                }
            }
        }
        printf("\n");
    }

    for(i = 1; i <= 5; i++) 
    {
        k = 1;
        for(j = 1; j <= 10; j++) 
        {
            if (j <= i || j >= 11 - i) 
            {
                printf("%d", k);
                if (j < 5) 
                {
                    k++;
                } 
                else if (j > 5) 
                {
                    k--;
                }
            } 
            else 
            {
                printf(" ");
                if (j == 6) 
                {
                    k--;
                }
            }
        }
        printf("\n");
    }

    return 0;
}

