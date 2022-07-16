include $(BASE_PATH)/common/variables.mk

all: test
clean:
	$Qrm -rf tmp
	$Q[ ! -d builddir ] || $(MAKE) -C builddir/default clean
	$Q[ ! -d builddir ] || $(MAKE) -C builddir/normal clean
	$Q[ ! -d builddir ] || $(MAKE) -C builddir/asan clean
	$Q[ ! -d builddir ] || $(MAKE) -C builddir/msan clean
	$Q[ ! -d builddir ] || $(MAKE) -C builddir/ubsan clean
fclean:
	$Qrm -rf tmp builddir
test: | builddir
	$Q$(MAKE) -C builddir/default test
	$Q$(MAKE) -C builddir/normal test
	$Q[ ! -f $(BASE_PATH)/libft_asan.a ] || $(MAKE) -C builddir/asan
	$Q[ ! -f $(BASE_PATH)/libft_msan.a ] || $(MAKE) -C builddir/msan
	$Q[ ! -f $(BASE_PATH)/libft_ubsan.a ] || $(MAKE) -C builddir/ubsan
.PHONY: all clean fclean test

builddir:
	$Qrm -rf tmp
	$Qmkdir tmp
	$Qmkdir tmp/default && printf "TEST_NAME := $(TEST_NAME)\nBASE_PATH := ../../$(BASE_PATH)\ninclude \$$(BASE_PATH)/common/basic_default.mk\n" > tmp/default/Makefile
	$Qmkdir tmp/normal && printf "TEST_NAME := $(TEST_NAME)\nBASE_PATH := ../../$(BASE_PATH)\ninclude \$$(BASE_PATH)/common/basic_normal.mk\n" > tmp/normal/Makefile
	$Qmkdir tmp/asan && printf "TEST_NAME := $(TEST_NAME)\nBASE_PATH := ../../$(BASE_PATH)\ninclude \$$(BASE_PATH)/common/basic_asan.mk\n" > tmp/asan/Makefile
	$Qmkdir tmp/msan && printf "TEST_NAME := $(TEST_NAME)\nBASE_PATH := ../../$(BASE_PATH)\ninclude \$$(BASE_PATH)/common/basic_msan.mk\n" > tmp/msan/Makefile
	$Qmkdir tmp/ubsan && printf "TEST_NAME := $(TEST_NAME)\nBASE_PATH := ../../$(BASE_PATH)\ninclude \$$(BASE_PATH)/common/basic_ubsan.mk\n" > tmp/ubsan/Makefile
	$Qmv tmp builddir
