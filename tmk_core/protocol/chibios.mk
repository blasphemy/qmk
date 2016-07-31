PROTOCOL_DIR = protocol
CHIBIOS_DIR = $(PROTOCOL_DIR)/chibios


SRC += $(CHIBIOS_DIR)/usb_main.c
SRC += $(CHIBIOS_DIR)/main.c

ifdef BLUETOOTH_ENABLE
	SRC += $(CHIBIOS_DIR)/bluetooth.c
endif

VPATH += $(TMK_PATH)/$(PROTOCOL_DIR)
VPATH += $(TMK_PATH)/$(CHIBIOS_DIR)
