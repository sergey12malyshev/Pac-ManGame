#ifndef __MENU_H
#define __MENU_H

bool getMenuState(void);
void setMenuState(const bool state);

bool mainMenu(void);
void screenMainMenu(void);
uint8_t getSpeedGame(void);
void setSpeedGame(const uint8_t s);

#endif /* __MENU_H */