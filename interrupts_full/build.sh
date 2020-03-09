rgbasm -E -o out/interrupts_test.o main.asm
rgblink -o out/interrupts_test.gb -n out/interrupts_test.sym out/interrupts_test.o
rgbfix -v -p 0 out/interrupts_test.gb
