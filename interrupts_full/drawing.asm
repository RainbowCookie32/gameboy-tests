include "tiles.inc"

draw_loop:
ld a, [bc]
inc bc
ld [hl+], a
dec d
jp nz, draw_loop
ret 

draw_title:
ld hl, $9822
ld bc, text_title
ld d, 15
call draw_loop
ret

draw_vblank_start:
ld hl, $9883
ld bc, text_vblank
ld d, 7
call draw_loop
ret

draw_vblank_ok:
ld hl, $988A
ld bc, text_ok
ld d, 3
call draw_loop
ret

draw_lcd_start:
ld hl, $98C3
ld bc, text_lcd
ld d, 12
call draw_loop
ret

draw_lcd_ok:
ld hl, $98CB
ld bc, text_ok
ld d, 4
call draw_loop
ret

draw_timer_start:
ld hl, $9903
ld bc, text_timer
ld d, 10
call draw_loop
ret

draw_timer_ok:
ld hl, $990A
ld bc, text_ok
ld d, 4
call draw_loop
ret