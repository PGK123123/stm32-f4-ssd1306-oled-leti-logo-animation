#ifndef LOGO_LETI_ANIM_24_H_
#define LOGO_LETI_ANIM_24_H_

#include <stdint.h>

#define LOGO_LETI_FRAMES_COUNT 60

void ssd1306DrawAnimationFrame(uint8_t frame_idx);
void play_leti_rotation(uint32_t frame_delay_ms);

#endif /* LOGO_LETI_ANIM_24_H_ */
