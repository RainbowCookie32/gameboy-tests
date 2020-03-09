vblank_int:
ld [hl], $C0
ret


lcdstat_int:
ldh a, [$ff00+$41]  ; Load LCDC Stat to see what interrupt we should check.
ld b, a             ; Backup the loaded value

and $40
jp nz, lcd_lyc

ld a, b
and $20
jp nz, lcd_oam

ld a, b
and $10
jp nz, lcd_vblank

ld a, b
and $08
jp nz, lcd_hblank

ret

lcd_lyc:
ld [hl], $C1
ret

lcd_oam:
ld [hl], $C2
ret

lcd_vblank:
ld [hl], $C3
ret 

lcd_hblank:
ld [hl], $C4
ret 


timer_int:
ldh a, [$ff00+$07]
and 3

cp $00
jp z, timer_0

cp $01
jp z, timer_1

cp $02
jp z, timer_2

cp $03
jp z, timer_3

ret 


timer_0:
ld [hl], $C5
ret 

timer_1:
ld [hl], $C6
ret 

timer_2:
ld [hl], $C7
ret 

timer_3:
ld [hl], $C8
ret 