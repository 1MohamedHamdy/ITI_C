void main()
{
  char *name ;
  name = (char *)calloc(20,1);
  int index = 0 ; 
  name[0]  = 'M' ;
  name[1] = 'o';
  name[2] = 'h';
  name[3] = 'a';
  name[4] = 'm' ;
  name[5] = 'e' ;
  name[6] = 'd' ;
  for(int i=0;i<20;i++)
  {
    if(name[i] == '\0'){
      break ;
    }
    index++;
  }
  name = realloc(name,index);
  printf('-'*50);
  
}