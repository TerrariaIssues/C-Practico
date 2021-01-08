#ifndef LINE_H
#define LINE_H

/**clear_line: Clears current line*/
void clear_line(void);

/** add_word: Adds word to the end of the current line. If this is not
 * the first word on the line, puts one space before the word.
 * */
void add_word(const char *word);
  
/*Space_remaining: returns the number of characters left in the current line.
*/
int space_remaining(void);

/**write_line: Writes the current line with justification.
 * */

void write_line(void);

/**flush_line: writes the current line without justification. If the line
 * is empty, does nothing.
 * */
void flush_line(void);

#endif