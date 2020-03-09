include "drawing.asm"

; Sets the test result byte to 0, then disables interrupts.
prepare_test:
xor a
ld hl, $FF80
ld [hl], a
ldh [$ff00+$FF], a
di 
ret


vblank_test:
call disable_lcd        ; Disable the LCD for VRAM manipulation.
call draw_vblank_start  ; Copy the tiles used in the test menu.
call enable_lcd         ; Re-enable the LCD.
call prepare_test
ld a, 1
ldh [$ff00+$ff], a      ; Load 1 on IE, which enables just Vblank interrupts.
ei
vblank_wait:
ldh a, [$ff00+$80]
cp a, $C0
jp nz, vblank_wait    ; Jump if they are not set.
call disable_lcd
call draw_vblank_ok
call enable_lcd
ret 


lcdstat_test:
call disable_lcd        ; Disable the LCD for VRAM manipulation.
call draw_lcd_start     ; Copy the tiles used in the test menu.
call enable_lcd         ; Re-enable the LCD.
call prepare_test

call lcdstat_lyc_test
call lcdstat_mode2_test
call lcdstat_mode1_test
call lcdstat_mode0_test

call disable_lcd
call draw_lcd_ok
call enable_lcd
ret 

lcdstat_lyc_test:
ldh a, [$ff00+$41]
and $07
or $40
ldh [$ff00+$41], a
ld a, $20
ldh [$ff00+$45], a
ld a, 2
ldh [$ff00+$ff], a
ei 
lyc_wait:
ldh a, [$ff00+$80]
cp a, $C1
jp nz, lyc_wait
ld a, TILE_1
ld [$98CC], a
ret 

lcdstat_mode2_test:
ldh a, [$ff00+$41]
and $07
or $20
ldh [$ff00+$41], a
ld a, 2
ldh [$ff00+$ff], a
ei 
mode2_wait:
ldh a, [$ff00+$80]
cp a, $C2
jp nz, mode2_wait
ld a, TILE_2
ld [$98CC], a
ret 

lcdstat_mode1_test:
ldh a, [$ff00+$41]
and $07
or $10
ldh [$ff00+$41], a
ld a, 2
ldh [$ff00+$ff], a
ei 
mode1_wait:
ldh a, [$ff00+$80]
cp a, $C3
jp nz, mode1_wait
ld a, TILE_3
ld [$98CC], a
ret 

lcdstat_mode0_test:
ldh a, [$ff00+$41]
and $07
or $08
ldh [$ff00+$41], a
ld a, 2
ldh [$ff00+$ff], a
ei 
mode0_wait:
ldh a, [$ff00+$80]
cp a, $C4
jp nz, mode0_wait
ld a, TILE_4
ld [$98CC], a
ret 

timer_test:
call disable_lcd
call draw_timer_start
call enable_lcd
call prepare_test

ld a, $04
ldh [$ff00+$ff], a

call timer_test_0
call timer_test_1
call timer_test_2
call timer_test_3

call disable_lcd
call draw_timer_ok
call enable_lcd
ret 

timer_test_0:
ld a, $04
ldh [$ff00+$07], a
ei 
timer0_wait:
ldh a, [$ff00+$80]
cp a, $C5
jp nz, timer0_wait
ld a, TILE_1
ld [$990A], a
ret 

timer_test_1:
ld a, $05
ldh [$ff00+$07], a
ei 
timer1_wait:
ldh a, [$ff00+$80]
cp a, $C6
jp nz, timer1_wait
ld a, TILE_2
ld [$990A], a
ret 

timer_test_2:
ld a, $06
ldh [$ff00+$07], a
ei 
timer2_wait:
ldh a, [$ff00+$80]
cp a, $C7
jp nz, timer2_wait
ld a, TILE_3
ld [$990A], a
ret 

timer_test_3:
ld a, $07
ldh [$ff00+$07], a
ei 
timer3_wait:
ldh a, [$ff00+$80]
cp a, $C8
jp nz, timer3_wait
ld a, TILE_4
ld [$990A], a
ret 