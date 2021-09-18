SET C51INC=D:\Keil_v5\C51\Inc;D:\Keil_v5\C51\Inc\Evatronix
SET C51LIB=D:\Keil_v5\C51\Lib
SET CPU_TYPE=R80515
SET CPU_VENDOR=Cadence Design Systems Inc.
SET UV2_TARGET=EEPROM
SET CPU_XTAL=0x016E3600
"D:\Keil_v5\C51\BIN\C51.EXE" @".\Output\main.__i"
"D:\Keil_v5\C51\BIN\C51.EXE" @".\Output\Common.__i"
"D:\Keil_v5\C51\BIN\C51.EXE" @".\Output\Delay.__i"
"D:\Keil_v5\C51\BIN\A51.EXE" @".\Output\STARTUP._ia"
"D:\Keil_v5\C51\BIN\LX51.EXE" @".\Output\EEPROM.lnp"
"D:\Keil_v5\C51\BIN\OHX51.EXE" ".\Output\EEPROM" HEX
