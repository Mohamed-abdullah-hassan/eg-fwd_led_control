#include "systick_cfg.h"

void systick_Init(void)
{
	SYSTICK_CTRL_STATUS = SYSTICK_CFG_STCRL_R;
	SYSTICK_LOAD_VAL = SYSTICK_CFG_RELOAD_VALUE; 
	SYSTICK_CURRENT_VAL = 0x00;
}