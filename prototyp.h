void  abortpage(void);
short  dvibyte(void);
unsigned short  twobytes(void);
long  threebytes(void);
short  signedbyte(void);
short  signedpair(void);
long  signedtrio(void);
long  signedquad(void);
long  transf(long  p,unsigned short  q);
void  transformpages(void);
long  fontdeflen(long  p);
unsigned char  dvibuf(long  p);
void  stringdvibuf(long  p,long  n);
int  usage(void);
int  error(char  *s);
long  scale(long  whole,long  num,long  den,long  sf);
int  scalemag(long  *p);
long  myatol(char  * *s);
long  myatodim(char  * *s);
short  selectedpage(long  n);
void  initialize(void);
int  processargs(int  argc,char  * *argv);
long  ptr(long  where);
void  searchpageloc(void);
int  readdvifile(void);
int  outdvibyte(unsigned char  c);
int  outdvi2(long  v);
int  outdviquad(long  v);
int  putbuf(long  length);
int  putstr(unsigned char  *s);
int  writepreamble(void);
int  putfontdef(int  f);
int  writepostamble(void);
int  beginpage(void);
int  dopage(long  num);
int  endpage(void);
int  writedvifile(void);
int  main(int  argc,char  * *argv);
