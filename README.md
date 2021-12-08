# long_string_in_c_tutorial
<b>Tutorial library for string joint</b>
<p>It allows to joint a large number of sybmols using both <b>(char *)</b> and <b>char foo[]</b> constructions.</p>

  ><p>_string -- declare the array of symbols (char *)<br/>
  >add_string -- declare the structure with the string array, symbol counter and checking of the first symbol<br/>
  >add_string->final_string -- array of symbols containing united string<br/>
  >add_string->symbol_position -- a place of symbol in array<br/>
  >_lstring() -- function for string structure initialization<br/>
  >void glue_string(add_string *_add, _string new) -- function for adding the new string to previous one in structure<br/>
  >void mem_clean(add_string *_add) -- function for memory clean containing declared string<br/>
  ></p>
  >

<p>See an example:</p>

  ><p>
  ></p>
  >void make_string() {<br/>
  > _string one = (_string)"this is my first phrase ";<br/>
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
