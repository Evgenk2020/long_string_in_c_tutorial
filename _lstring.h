#ifndef _LSTRING_H_
#define _LSTRING_H_

typedef char *_string; //define the pointer to char array

//define the structure of the final string with the counter
typedef struct
{
  _string final_string;
  int symbol_position;
} add_string;

add_string _lstring();                           //initializing string structure and char counter
void glue_string(add_string *_add, _string new); //add the new string to previous
void mem_clean(add_string *_add);                //clean memory

#endif //_LSTRING_H_