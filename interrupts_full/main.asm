; This test checks if interrupts are being serviced. The ones being checked
; are Vblank, LCD Status, and Timer, since those are the only ones that can be
; tested without user intervention. Really barebones right now, and one of my first
; gb assembly projects.

include "tests.asm"
include "interrupts.asm"

section "vblank", rom0[$40]
jp vblank_int

section "lcd_stat", rom0[$48]
jp lcdstat_int

section "timer", rom0[$50]
jp timer_int

section "header", rom0[$100]
nop
jp main

section "program", rom0[$150]

main:
call disable_lcd
call clear_vram
call copy_tiles
call draw_title
call enable_lcd

call vblank_test
call lcdstat_test
call timer_test

infinite_loop:
jp infinite_loop

copy_tiles:
ld d, $FF
ld e, 3
ld bc, $8000
ld hl, tileset
call memcpy
ret

memcpy:
ld a, [hl+]
ld [bc], a
inc bc
dec d
jp nz, memcpy
dec e
jp nz, memcpy
ret 

enable_lcd:
ld a, $91
ld [$FF40], a
ret

disable_lcd:
ld a, [$FF44]
cp a, $90
jp nz, disable_lcd
xor a
ld [$FF40], a
ret 

clear_vram:
ld hl, $9FFF
ld a, 0
ld b, $FF
ld c, 32
clear_loop:
ld [hl-], a
dec b
jp nz, clear_loop
dec c
jp nz, clear_loop
ret 