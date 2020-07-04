    
    
    
    char m1[]="attack";
    int ast = (int)m1[4];
    int asd=(int)m1[1];
    //printf("%d",ast);
    char m2[256];
    char tmp[8];
    //char k[]=ast;
    sprintf(tmp, "%d", ast);
    strcat(m2,tmp);
    sprintf(tmp, "%d", asd);
    strcat(m2,tmp);
    
    //printf("%s\n",m1);
    printf("%s\n",m2);
    printf("%d length is",strlen(m1));
