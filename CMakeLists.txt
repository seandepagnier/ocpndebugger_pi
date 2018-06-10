##---------------------------------------------------------------------------
## Author:      Pavel Kalian
## Copyright:   
## License:     wxWidgets License
##---------------------------------------------------------------------------

# define minimum cmake version
CMAKE_MINIMUM_REQUIRED(VERSION 2.6.2)

PROJECT(ocpndebugger_pi)

SET(PACKAGE_NAME ocpndebugger_pi)
SET(VERBOSE_NAME OpenCPNDebugger)
SET(TITLE_NAME OpenCPNDebugger)
SET(CPACK_PACKAGE_CONTACT "Pavel Kalian")

INCLUDE("cmake/PluginConfigure.cmake")

SET(SRC_OCPNDEBUGGER
            src/ocpndebugger_pi.h
            src/ocpndebugger_pi.cpp
            src/icons.h
            src/icons.cpp
            src/qtstylesheet.cpp
            src/ocpndebuggergui.h
            src/ocpndebuggergui.cpp
            src/ocpndebuggergui_impl.cpp
            src/ocpndebuggergui_impl.h
        )

ADD_LIBRARY(${PACKAGE_NAME} SHARED ${SRC_OCPNDEBUGGER})

INCLUDE("cmake/PluginInstall.cmake")
INCLUDE("cmake/PluginLocalization.cmake")
INCLUDE("cmake/PluginPackage.cmake")
