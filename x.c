char *k="12345";
strlen(k)=5;
sizeof(k)=5;
char k[]="12345";
strlen(k)=5;
sizeof(k)=6;
char s[2][8];
int size = sizeof(s)/sizeof(s[0]); //length of 2d char array.
          
