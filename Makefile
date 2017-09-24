include $(THEOS)/makefiles/common.mk

TWEAK_NAME = PodcastFix
PodcastFix_FILES = Tweak.xm
THEOS_DEVICE_IP = 143.215.49.80
include $(THEOS_MAKE_PATH)/tweak.mk

after-install::
	install.exec "killall -9 Overcast"
