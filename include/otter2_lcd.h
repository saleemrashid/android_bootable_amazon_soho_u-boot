#ifndef _OMAP4_LCD_H_
#define _OMAP4_LCD_H_

enum {
	FASTBOOT_RED,
	FASTBOOT_RED_OFF,
	FASTBOOT_GREEN,
	FASTBOOT_GREEN_OFF,
	FASTBOOT,
	FASTBOOT_IMG_NUM,
};

void showimage(int type);
void show_authfailed(void);
void show_lowbattery(void);
void show_lowbattery_charging(void);

#endif
