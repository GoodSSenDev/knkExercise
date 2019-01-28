[was #8] No. The difference is that "%1s" will store a null character after it reads and stores a nonblank character; " %c" will store only the nonblank character. As a result, the two format strings must be used differently:

char c, s[2];

scanf(" %c", &c);  /* stores a nonblank character into c */
scanf("%1s", s);   /* stores a nonblank character into s[0]
                      and a null character into s[1] */
					  
// from the knking.com answer page.