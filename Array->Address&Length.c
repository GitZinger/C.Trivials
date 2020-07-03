    char *k[2];
    //char o[]="lopkl";
    k[0]="opppp";
    k[1]="99";
        
    printf("addr is %p\n",&k);
    printf("addr is %p\n",k);
    printf("addr is %p\n",k[0]);
    printf("addr is %p\n",k[1]);
    printf("%d\n",strlen(k[0]));
    printf("%d\n",strlen(k[1]));
    printf("%s\n",k[0]);
    printf("%s\n",*k);
    printf("%s\n",*(k+1));
    
    /*
    printf("addr is %p\n",o);
    
    printf("%c\n",o[2]);
    printf("addr is %p\n",o+2);
    */
    return 0;
