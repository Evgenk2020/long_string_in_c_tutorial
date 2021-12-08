//--------------------------------------------------------------------
void make_string()
{
  //char * specifications
  _string one = (_string)" the first phrase ";
  _string two = (_string)" the second phrase ";
  char three[] = " the third phrase !!";

  add_string now = _lstring();
  add_string zen = _lstring();

  glue_string(&now, one);
  glue_string(&now, two);

  glue_string(&zen, three);
  glue_string(&zen, two);

  printf("my_string: %s\n", now.final_string); //print the new string
  printf("my_string: %s\n", zen.final_string); //print the new string

  mem_clean(&now);
  mem_clean(&zen);
}
//--------------------------------------------------------------------
