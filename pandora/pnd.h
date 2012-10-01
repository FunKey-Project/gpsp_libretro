void gpsp_plat_init(void);
void gpsp_plat_quit(void);

u32 gpsp_plat_joystick_read(void);
u32 gpsp_plat_buttons_to_cursor(u32 buttons);

#define PLAT_BUTTON_COUNT 17
extern u32 button_plat_mask_to_config[PLAT_BUTTON_COUNT];

void *fb_flip_screen(void);
void fb_set_mode(int w, int h, int buffers, int scale,
	int filter, int filter2);
void fb_wait_vsync(void);
