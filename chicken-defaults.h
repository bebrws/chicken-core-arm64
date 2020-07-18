#define C_CHICKEN_PROGRAM "chicken"
#ifndef C_INSTALL_CC
# define C_INSTALL_CC "/Applications/Xcode.app/Contents/Developer/usr/bin/gcc"
#endif
#ifndef C_INSTALL_CXX
# define C_INSTALL_CXX "g++"
#endif
#ifndef C_INSTALL_POSTINSTALL_PROGRAM
# define C_INSTALL_POSTINSTALL_PROGRAM "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/install_name_tool"
#endif
#ifndef C_INSTALL_RC_COMPILER
# define C_INSTALL_RC_COMPILER ""
#endif
#ifndef C_INSTALL_CFLAGS
# define C_INSTALL_CFLAGS "-fno-strict-aliasing -fwrapv -fno-common -DHAVE_CHICKEN_CONFIG_H -m64 -DC_ENABLE_PTABLES -Os -fomit-frame-pointer"
#endif
#ifndef C_INSTALL_LDFLAGS
# define C_INSTALL_LDFLAGS "-m64 "
#endif
#ifndef C_INSTALL_PREFIX
# define C_INSTALL_PREFIX "/usr/local"
#endif
#ifndef C_INSTALL_SHARE_HOME
# define C_INSTALL_SHARE_HOME "/usr/local/share/chicken"
#endif
#ifndef C_INSTALL_BIN_HOME
# define C_INSTALL_BIN_HOME "/usr/local/bin"
#endif
#ifndef C_INSTALL_EGG_HOME
# define C_INSTALL_EGG_HOME "/usr/local/lib/chicken/11"
#endif
#ifndef C_INSTALL_LIB_HOME
# define C_INSTALL_LIB_HOME "/usr/local/lib"
#endif
#ifndef C_INSTALL_LIB_NAME
# define C_INSTALL_LIB_NAME "chicken"
#endif
#ifndef C_INSTALL_STATIC_LIB_HOME
# define C_INSTALL_STATIC_LIB_HOME "/usr/local/lib"
#endif
#ifndef C_INSTALL_INCLUDE_HOME
# define C_INSTALL_INCLUDE_HOME "/usr/local/include/chicken"
#endif
#ifndef C_INSTALL_MORE_LIBS
# define C_INSTALL_MORE_LIBS "-lm"
#endif
#ifndef C_INSTALL_MORE_STATIC_LIBS
# define C_INSTALL_MORE_STATIC_LIBS "-lm"
#endif
#ifndef C_STACK_GROWS_DOWNWARD
# define C_STACK_GROWS_DOWNWARD 1
#endif
#ifndef C_TARGET_MORE_LIBS
# define C_TARGET_MORE_LIBS "-lm"
#endif
#ifndef C_TARGET_MORE_STATIC_LIBS
# define C_TARGET_MORE_STATIC_LIBS "-lm"
#endif
#ifndef C_TARGET_CC
# define C_TARGET_CC "/Applications/Xcode.app/Contents/Developer/usr/bin/gcc"
#endif
#ifndef C_TARGET_CXX
# define C_TARGET_CXX "g++"
#endif
#ifndef C_TARGET_RC_COMPILER
# define C_TARGET_RC_COMPILER ""
#endif
#ifndef C_TARGET_LIBRARIAN
# define C_TARGET_LIBRARIAN "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/ar"
#endif
#ifndef C_TARGET_INSTALL_PROGRAM
# define C_TARGET_INSTALL_PROGRAM "install"
#endif
#ifndef C_TARGET_CFLAGS
# define C_TARGET_CFLAGS "-fno-strict-aliasing -fwrapv -fno-common -DHAVE_CHICKEN_CONFIG_H -m64 -DC_ENABLE_PTABLES -Os -fomit-frame-pointer"
#endif
#ifndef C_TARGET_LIBRARIAN_FLAGS
# define C_TARGET_LIBRARIAN_FLAGS "scru"
#endif
#ifndef C_TARGET_LDFLAGS
# define C_TARGET_LDFLAGS "-m64 "
#endif
#ifndef C_TARGET_INSTALL_PROGRAM_EXECUTABLE_OPTIONS
# define C_TARGET_INSTALL_PROGRAM_EXECUTABLE_OPTIONS "-m 755"
#endif
#ifndef C_TARGET_INSTALL_PROGRAM_FILE_OPTIONS
# define C_TARGET_INSTALL_PROGRAM_FILE_OPTIONS "-m 644"
#endif
#ifndef C_TARGET_FEATURES
# define C_TARGET_FEATURES ""
#endif
#ifndef C_CROSS_CHICKEN
# define C_CROSS_CHICKEN 0
#endif
#ifndef C_TARGET_PREFIX
# define C_TARGET_PREFIX "/usr/local"
#endif
#ifndef C_TARGET_BIN_HOME
# define C_TARGET_BIN_HOME "/usr/local/bin"
#endif
#ifndef C_TARGET_LIB_HOME
# define C_TARGET_LIB_HOME "/usr/local/lib"
#endif
#ifndef C_TARGET_LIB_NAME
# define C_TARGET_LIB_NAME "chicken"
#endif
#ifndef C_TARGET_RUN_LIB_HOME
# define C_TARGET_RUN_LIB_HOME "/usr/local/lib"
#endif
#ifndef C_TARGET_SHARE_HOME
# define C_TARGET_SHARE_HOME "/usr/local/share"
#endif
#ifndef C_TARGET_INCLUDE_HOME
# define C_TARGET_INCLUDE_HOME "/usr/local/include/chicken"
#endif
#ifndef C_TARGET_STATIC_LIB_HOME
# define C_TARGET_STATIC_LIB_HOME "/usr/local/lib"
#endif
#ifndef C_CHICKEN_PROGRAM
# define C_CHICKEN_PROGRAM "chicken"
#endif
#ifndef C_CSC_PROGRAM
# define C_CSC_PROGRAM "csc"
#endif
#ifndef C_CSI_PROGRAM
# define C_CSI_PROGRAM "csi"
#endif
#ifndef C_CHICKEN_DO_PROGRAM
# define C_CHICKEN_DO_PROGRAM "chicken-do"
#endif
#ifndef C_CHICKEN_INSTALL_PROGRAM
# define C_CHICKEN_INSTALL_PROGRAM "chicken-install"
#endif
#ifndef C_CHICKEN_UNINSTALL_PROGRAM
# define C_CHICKEN_UNINSTALL_PROGRAM "chicken-uninstall"
#endif
#ifndef C_CHICKEN_STATUS_PROGRAM
# define C_CHICKEN_STATUS_PROGRAM "chicken-status"
#endif
#ifndef C_WINDOWS_SHELL
# define C_WINDOWS_SHELL 0
#endif
#ifndef C_BINARY_VERSION
# define C_BINARY_VERSION 11
#endif
#ifndef C_USES_SONAME
# define C_USES_SONAME 0
#endif
/* END OF FILE */
