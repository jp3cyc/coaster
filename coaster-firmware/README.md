�q���[�Y�ǂݏo��
avrdude -c usbasp -p m328p -U lfuse:r:con:h -U hfuse:r:con:h -U efuse:r:con:h


�q���[�Y��������
avrdude -c usbasp -p m328p -U lfuse:w:0xe2:m -U hfuse:w:0xde:m -U efuse:w:0x07:m

bin��������
avrdude -c usbasp -p m328p -U flash:w:coaster-firmware.ino.with_bootloader.eightanaloginputs.hex