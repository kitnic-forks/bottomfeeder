iverilog -o gen_reg_test ../modules.v gen_reg_tb.v
iverilog -o pwm_test ../modules.v pwm_tb.v
iverilog -o tmr_test ../modules.v tmr_tb.v
iverilog -o dinterp_test ../modules.v dinterp_tb.v
iverilog -o spi_test ../modules.v spi_tb.v
iverilog -o wavetable_test ../modules.v wavetable_tb.v
iverilog -o wavetable_ext_test ../modules.v wavetable_ext_tb.v
iverilog -o adsr_test ../modules.v adsr_tb.v
iverilog -o mix_test ../modules.v mix_tb.v
iverilog -o port_test ../modules.v port_tb.v

vvp gen_reg_test
vvp pwm_test
vvp tmr_test
vvp dinterp_test
vvp spi_test -lxt2
vvp wavetable_test
vvp wavetable_ext_test
vvp adsr_test 
vvp mix_test
vvp port_test

#gtkwave test.vcd

Read-Host -Prompt "Press Enter to exit"