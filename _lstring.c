#define CACHE 1

#include <stdio.h>
#include <stdlib.h>
#include "_lstring.h"

void dyn_mem(add_string *_add);   //locate array size
void redyn_mem(add_string *_add); //relocate array size

//initializing string structure and char counter
add_string _lstring()
{
  add_string _l_str;
  _l_str.symbol_position = 0;

  return _l_str;
}

//locate array size
void dyn_mem(add_string *_add)
{
  _add->final_string = (_string)malloc(CACHE + sizeof(char));

  if (_add->final_string == NULL)
  {
    printf("An error occures during memory location...\n");
    exit(1);
  }
}

//relocate array size
void redyn_mem(add_string *_add) { _add->final_string = (_string)realloc(_add->final_string, (_add->symbol_position + CACHE) * sizeof(char)); }

//clean memory
void mem_clean(add_string *_add)
{
  free(_add->final_string);
  _add->final_string = NULL;
  _add->symbol_position = 0;
}

//add the new string to previous
void glue_string(add_string *_add, _string new)
{
  if (_add->symbol_position == 0)
    dyn_mem(_add);

  _string buf = &new[0];

  while (*buf)
  {
    _add->final_string[_add->symbol_position] = *buf;
    *buf++;
    _add->symbol_position += 1;
    redyn_mem(_add);
  }
}
