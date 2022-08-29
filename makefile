TARGET_EXEC := nes

CC := gcc
CFLAGS := -g

#LIBS := 
#LIB_DIRS := 

BUILD_DIR := ./build

# Find all .c file 
SRC_DIR := ./src 
SRCS := $(shell find $(SRC_DIR) -name '*.c')

# Add all include dir
INC_DIR := ./include
INC_DIRS := $(shell find $(INC_DIR) -type d)
INC_FLAGS := $(addprefix -I,$(INC_DIRS))

# Create a list of .o file
OBJS := $(SRCS:%.c=$(BUILD_DIR)/%.o)

# The final build step.
$(TARGET_EXEC): $(OBJS)
#	$(CC) `pkg-config --cflags gtk+-3.0` $(INC_FLAGS) $(OBJS) -o $@ $(LDFLAGS) `pkg-config --libs gtk+-3.0`
	$(CC) $(INC_FLAGS) $(OBJS) -o $@ $(LDFLAGS) 

# Build step for C source
$(BUILD_DIR)/%.o: %.c 
	mkdir -p $(dir $@)
#	$(CC)  `pkg-config --cflags gtk+-3.0` $(INC_FLAGS) $(CPPFLAGS) $(CFLAGS)  -c $< -o $@  `pkg-config --libs gtk+-3.0` 
	$(CC) $(INC_FLAGS) $(CPPFLAGS) $(CFLAGS)  -c $< -o $@ 

.PHONY: clean
clean:
	rm -r $(BUILD_DIR)
	rm $(TARGET_EXEC)