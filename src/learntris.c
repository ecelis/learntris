#include <stdio.h>
#include <ncurses.h>

int main() {
  int ch;
  /*initscr();*/
  raw();
  keypad(stdscr, TRUE);
  noecho();
  ch = getch();
  if(ch == 'q') {
      endwin();
  }
  return 0;
}
