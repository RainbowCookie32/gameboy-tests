section "Tiles", rom0

TILE_0  EQU $01
TILE_1  EQU $02
TILE_2  EQU $03
TILE_3  EQU $04
TILE_4  EQU $05
TILE_5  EQU $06
TILE_6  EQU $07
TILE_7  EQU $08
TILE_8  EQU $09
TILE_9  EQU $0A

TILE_A  EQU $12
TILE_B  EQU $13
TILE_C  EQU $14
TILE_D  EQU $15
TILE_E  EQU $16
TILE_F  EQU $17
TILE_G  EQU $18
TILE_H  EQU $19
TILE_I  EQU $1A
TILE_J  EQU $1B
TILE_K  EQU $1C
TILE_L  EQU $1D
TILE_M  EQU $1E
TILE_N  EQU $1F
TILE_O  EQU $20
TILE_P  EQU $21
TILE_Q  EQU $22
TILE_R  EQU $23
TILE_S  EQU $24
TILE_T  EQU $25
TILE_U  EQU $26
TILE_V  EQU $27
TILE_W  EQU $28
TILE_X  EQU $29
TILE_Y  EQU $2A
TILE_Z  EQU $2B

TILE_EMPTY EQU $00
TILE_COLON EQU $0B
TILE_SLASH EQU $2D

text_title:
DB TILE_I, TILE_N, TILE_T, TILE_E, TILE_R, TILE_R, TILE_U, TILE_P
DB TILE_T, TILE_S, TILE_EMPTY, TILE_T, TILE_E, TILE_S, TILE_T

text_vblank:
DB TILE_V, TILE_B, TILE_L, TILE_A, TILE_N, TILE_K, TILE_COLON

text_lcd:
DB TILE_L, TILE_C, TILE_D, TILE_S, TILE_T, TILE_A, TILE_T, TILE_COLON, TILE_EMPTY, TILE_0, TILE_SLASH, TILE_4

text_timer:
DB TILE_T, TILE_I, TILE_M, TILE_E, TILE_R, TILE_COLON, TILE_EMPTY, TILE_0, TILE_SLASH, TILE_4

text_ok:
DB TILE_EMPTY, TILE_O, TILE_K, TILE_EMPTY


tileset:
DB $00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00

DB $7C,$7C,$86,$86,$8A,$8A,$92,$92
DB $A2,$A2,$C2,$C2,$7C,$7C,$00,$00

DB $10,$10,$30,$30,$10,$10,$10,$10
DB $10,$10,$10,$10,$7C,$7C,$00,$00

DB $7C,$7C,$82,$82,$02,$02,$1C,$1C
DB $60,$60,$80,$80,$FE,$FE,$00,$00

DB $FE,$FE,$04,$04,$18,$18,$04,$04
DB $02,$02,$82,$82,$7C,$7C,$00,$00

DB $0C,$0C,$14,$14,$24,$24,$44,$44
DB $84,$84,$FE,$FE,$04,$04,$00,$00

DB $FC,$FC,$80,$80,$FC,$FC,$02,$02
DB $02,$02,$82,$82,$7C,$7C,$00,$00

DB $7C,$7C,$80,$80,$80,$80,$FC,$FC
DB $82,$82,$82,$82,$7C,$7C,$00,$00

DB $FE,$FE,$82,$82,$04,$04,$08,$08
DB $10,$10,$10,$10,$10,$10,$00,$00

DB $7C,$7C,$82,$82,$82,$82,$7C,$7C
DB $82,$82,$82,$82,$7C,$7C,$00,$00

DB $7C,$7C,$82,$82,$82,$82,$7E,$7E
DB $02,$02,$02,$02,$7C,$7C,$00,$00

DB $00,$00,$30,$30,$30,$30,$00,$00
DB $30,$30,$30,$30,$00,$00,$00,$00

DB $08,$08,$2E,$2E,$F8,$F8,$28,$28
DB $3E,$3E,$E8,$E8,$20,$20,$00,$00

DB $08,$08,$10,$10,$20,$20,$40,$40
DB $20,$20,$10,$10,$08,$08,$00,$00

DB $00,$00,$00,$00,$7C,$7C,$00,$00
DB $7C,$7C,$00,$00,$00,$00,$00,$00

DB $20,$20,$10,$10,$08,$08,$04,$04
DB $08,$08,$10,$10,$20,$20,$00,$00

DB $3C,$3C,$42,$42,$02,$02,$0C,$0C
DB $10,$10,$00,$00,$10,$10,$00,$00

DB $7C,$7C,$82,$82,$9A,$9A,$AA,$AA
DB $BC,$BC,$80,$80,$7C,$7C,$00,$00

DB $38,$38,$44,$44,$82,$82,$82,$82
DB $FE,$FE,$82,$82,$82,$82,$00,$00

DB $FC,$FC,$82,$82,$82,$82,$FC,$FC
DB $82,$82,$82,$82,$FC,$FC,$00,$00

DB $7C,$7C,$82,$82,$80,$80,$80,$80
DB $80,$80,$82,$82,$7C,$7C,$00,$00

DB $F8,$F8,$84,$84,$82,$82,$82,$82
DB $82,$82,$84,$84,$F8,$F8,$00,$00

DB $FE,$FE,$80,$80,$80,$80,$FC,$FC
DB $80,$80,$80,$80,$FE,$FE,$00,$00

DB $FE,$FE,$80,$80,$80,$80,$FC,$FC
DB $80,$80,$80,$80,$80,$80,$00,$00

DB $7C,$7C,$82,$82,$80,$80,$80,$80
DB $8E,$8E,$82,$82,$7E,$7E,$00,$00

DB $82,$82,$82,$82,$82,$82,$FE,$FE
DB $82,$82,$82,$82,$82,$82,$00,$00

DB $7C,$7C,$10,$10,$10,$10,$10,$10
DB $10,$10,$10,$10,$7C,$7C,$00,$00

DB $1E,$1E,$04,$04,$04,$04,$04,$04
DB $04,$04,$84,$84,$78,$78,$00,$00

DB $84,$84,$88,$88,$90,$90,$F0,$F0
DB $88,$88,$84,$84,$82,$82,$00,$00

DB $40,$40,$40,$40,$40,$40,$40,$40
DB $40,$40,$40,$40,$7E,$7E,$00,$00

DB $82,$82,$C6,$C6,$AA,$AA,$92,$92
DB $82,$82,$82,$82,$82,$82,$00,$00

DB $82,$82,$C2,$C2,$A2,$A2,$92,$92
DB $8A,$8A,$86,$86,$82,$82,$00,$00

DB $7C,$7C,$82,$82,$82,$82,$82,$82
DB $82,$82,$82,$82,$7C,$7C,$00,$00

DB $FC,$FC,$82,$82,$82,$82,$82,$82
DB $FC,$FC,$80,$80,$80,$80,$00,$00

DB $7C,$7C,$82,$82,$82,$82,$92,$92
DB $8A,$8A,$84,$84,$7A,$7A,$00,$00

DB $FC,$FC,$82,$82,$82,$82,$84,$84
DB $F8,$F8,$84,$84,$82,$82,$00,$00

DB $7C,$7C,$80,$80,$80,$80,$7C,$7C
DB $02,$02,$02,$02,$FC,$FC,$00,$00

DB $FE,$FE,$10,$10,$10,$10,$10,$10
DB $10,$10,$10,$10,$10,$10,$00,$00

DB $82,$82,$82,$82,$82,$82,$82,$82
DB $82,$82,$82,$82,$7C,$7C,$00,$00

DB $82,$82,$82,$82,$82,$82,$82,$82
DB $44,$44,$28,$28,$10,$10,$00,$00

DB $82,$82,$82,$82,$82,$82,$92,$92
DB $AA,$AA,$C6,$C6,$82,$82,$00,$00

DB $82,$82,$44,$44,$28,$28,$10,$10
DB $28,$28,$44,$44,$82,$82,$00,$00

DB $82,$82,$44,$44,$28,$28,$10,$10
DB $10,$10,$10,$10,$10,$10,$00,$00

DB $FE,$FE,$04,$04,$08,$08,$10,$10
DB $20,$20,$40,$40,$FE,$FE,$00,$00

DB $1C,$1C,$10,$10,$10,$10,$10,$10
DB $10,$10,$10,$10,$1C,$1C,$00,$00

DB $80,$80,$40,$40,$20,$20,$10,$10
DB $08,$08,$04,$04,$02,$02,$00,$00

DB $70,$70,$10,$10,$10,$10,$10,$10
DB $10,$10,$10,$10,$70,$70,$00,$00

DB $10,$10,$28,$28,$44,$44,$82,$82
DB $00,$00,$00,$00,$00,$00,$00,$00

DB $00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$FE,$FE,$00,$00