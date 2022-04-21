PROJ_NAME = TRASHMEASUREMENT

BUILD_DIR = Build

# All Source code files
SRC = main.c\
src/lightindicator.c\
src/voiceindicator.c\

TEST_SRC =unity/unity.c\
src/voiceindicator.c\
src/lightindicator.c\
test/test.c\

TEST_OUTPUT = $(BUILD_DIR)/Test_$(PROJ_NAME).out

#Object copy to create hexfile
OBJCOPY = avr-objcopy.exe

#Avrdude
AVRDUDE := avrdude

#Options for HEX file generation
HFLAGS = -j .text -j .data -O ihex

# All header file paths
INC = -Iinc\
-Iunity\

# Find out the OS and configure the variables accordingly
ifdef OS	# All configurations for Windwos OS
   # Delete command 
   RM = del /q
   # Correct the path based on OS
   FixPath = $(subst /,\,$1)
   # Name of the compiler used
   CC = avr-gcc.exe
   # Name of the elf to hex file converter used
   AVR_OBJ_CPY = avr-objcopy.exe
else #All configurations for Linux OS
   ifeq ($(shell uname), Linux)
   	  # Delete command
      RM = rm -rf				
	  # Correct the path based on OS
      FixPath = $1				
	  # Name of the compiler used
	  CC = avr-gcc
	  # Name of the elf to hex file converter used
	  AVR_OBJ_CPY = avr-objcopy 
   endif
endif

# Command to make to consider these names as targets and not as file names in folder
.PHONY:all analysis clean doc

all:$(BUILD_DIR)
	# Compile the code and generate the ELF file
	$(CC) -g -Wall -Os -mmcu=atmega328 -DF_CPU=16000000UL $(INC) $(SRC) -o $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).elf)
	
hex: $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).elf)
	#create hex file
	$(OBJCOPY) $(HFLAGS) $< $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).hex)

#alltest: $(SRC) $(BUILD)
#	$(CC) -g -Wall -Os -mmcu=atmega328 -DF_CPU=16000000UL $(SRC) $(INC) -o $(PROJECT_OUTPUT).out

test:$(BUILD)
	$(CC) -g -Wall -Os -mmcu=atmega328 -DF_CPU=16000000UL $(TEST_SRC) $(INC) -o $(TEST_OUTPUT)
# ./$(TEST_OUTPUT)


$(BUILD_DIR):
	# Create directory to store the built files
	mkdir $(BUILD_DIR)

analysis: $(SRC)
	#Analyse the code using Cppcheck command line utility
	cppcheck --enable=all $^

doc:
	#Build the code code documentation using Doxygen command line utility
	make -C documentation

clean:
	# Remove all the build files and generated document files
	$(RM) $(call FixPath,$(BUILD_DIR)/*)
	make -C documentation clean
	rmdir $(BUILD_DIR)