#ifndef __GAME_ENGINE_H
#define __GAME_ENGINE_H

#define LC_INCLUDE "lc-addrlabels.h"
#include "pt.h"
PT_THREAD(GameEngineThread(struct pt *pt));

void initGame(void);
void levelSet(uint8_t l);
void levelReset(void);
void levelUp(void);

#endif /* __GAME_ENGINE_H */
