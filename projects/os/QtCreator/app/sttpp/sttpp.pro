########################################################################
# Copyright (c) 1988-2025 $organization$
#
# This software is provided by the author and contributors ``as is''
# and any express or implied warranties, including, but not limited to,
# the implied warranties of merchantability and fitness for a particular
# purpose are disclaimed. In no event shall the author or contributors
# be liable for any direct, indirect, incidental, special, exemplary,
# or consequential damages (including, but not limited to, procurement
# of substitute goods or services; loss of use, data, or profits; or
# business interruption) however caused and on any theory of liability,
# whether in contract, strict liability, or tort (including negligence
# or otherwise) arising in any way out of the use of this software,
# even if advised of the possibility of such damage.
#
#   File: sttpp.pro
#
# Author: $author$
#   Date: 6/24/2025
#
# os specific QtCreator project .pro file for framework talas executable sttpp
########################################################################
# Depends: rostra;nadir;fila;crono;versa;rete;stara;cifra;bn;mp;argo;libjson
#
# Debug: talas/build/os/QtCreator/Debug/bin/sttpp
# Release: talas/build/os/QtCreator/Release/bin/sttpp
# Profile: talas/build/os/QtCreator/Profile/bin/sttpp
#
include(../../../../../build/QtCreator/talas.pri)
include(../../../../QtCreator/talas.pri)
include(../../talas.pri)
include(../../../../QtCreator/app/sttpp/sttpp.pri)

TARGET = $${sttpp_TARGET}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${sttpp_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${sttpp_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${sttpp_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
OBJECTIVE_SOURCES += \
$${sttpp_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${sttpp_HEADERS} \
$${sttpp_OBJECTIVE_HEADERS} \

# SOURCES
#
SOURCES += \
$${sttpp_SOURCES} \

########################################################################
# FRAMEWORKS
#
FRAMEWORKS += \
$${sttpp_FRAMEWORKS} \

# LIBS
#
LIBS += \
$${sttpp_LIBS} \
$${FRAMEWORKS} \

########################################################################
