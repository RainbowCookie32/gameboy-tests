# gameboy-tests
Simple tests used to check some areas of rusty-boi

# Current Tests:
### interrupts_full: 
Checks if interrupts are being triggered and serviced. This test doesn't visually fail, but rather loops infinitely in case an interrupt is not triggered. The test stages are:
##### 1. VBlank:
* Nothing fancy. Will hang if the individual VBlank interrupt (bit 0 on IE/IF) is not triggered.

##### 2. LCD Status:
* LY Coincidence: Enabled by setting bit 6 on LCDC Stat ($FF41). Gets triggered when LYC ($FF45) is equal to LY ($FF44) and the Coincidence Flag is set (bit 2 in STAT).
* Mode 2/OAM: Enabled by settings bit 5 on LCDC Stat ($FF41). Gets triggered when the video chip enters OAM Scan mode.
* Mode 1/V-Blank: Enabled by settings bit 4 on LCDC Stat ($FF41). Gets triggered when the video chip enters V-Blank mode. **It's not the same as the V-Blank interrupt**.
* Mode 0/H-Blank: Enabled by settings bit 3 on LCDC Stat ($FF41). Gets triggered when the video chip enters H-Blank mode.

##### 3. Timer:
* 4096 Hz: Triggered when the TIMA register ($FF05) overflows with timer frequency set to 4096 Hz (bits 0 and 1 are reset on TAC - $FF07).
* 262144 Hz: Triggered when the TIMA register ($FF05) overflows with timer frequency set to 262144 Hz (bits 0 is set and 1 is reset on TAC - $FF07).
* 65536 Hz: Triggered when the TIMA register ($FF05) overflows with timer frequency set to 65536 Hz (bits 0 is reset and 1 is set on TAC - $FF07).
* 16384 Hz: Triggered when the TIMA register ($FF05) overflows with timer frequency set to 16384 Hz (bits 0 and 1 are set on TAC - $FF07).
