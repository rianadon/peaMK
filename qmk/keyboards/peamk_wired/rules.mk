# Add VIK configuration here (e.g. VIK_PMW3360_RIGHT=yes to use a trackball)

VIK_ENABLE = yes

include $(KEYBOARD_PATH_1)/vik/rules.mk

# If the target has _v4, add LEMON_V4 option
ifneq ($(findstring _v4,$(TARGET)),)
    OPT_DEFS += -DLEMON_V4
endif
