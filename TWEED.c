    #include <stdio.h>
    #include <stdlib.h>

    int main()
    {
        int t;
        scanf("%d",&t);
        while(t-->0)
        {
            int n;
            scanf("%d",&n);
            char ch[4];
            scanf("%s",&ch);
            int a[n],i;
            for(i=0;i<n;i++)
            {
                scanf("%d",&a[i]);
            }
            if(n==1 && a[0]%2==0 && ch[2]=='e')
                printf("Dee\n");
            else
                printf("Dum\n");
        }
        return 0;
    }
