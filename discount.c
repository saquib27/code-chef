#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, x, y;
        scanf("%d %d %d", &n, &x, &y);
        int a[n];

        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        // Your code goes here
        int originalprice=0;
        int priceafterdiscount=0;
        for(int i;i<n;i++){
            originalprice=a[i]+originalprice;

            priceafterdiscount=a[i]-y;
            int overallDP=0;
            overallDP=priceafterdiscount+overallDP;
            
            if(priceafterdiscount<=0){
                priceafterdiscount=0;
            }
        
            int cost=x+overallDP;

            if(originalprice>cost){
                printf("COUPON");
            }
            else{
                printf("NO COUPON");
            }
        }
        
    }

    return 0;
}