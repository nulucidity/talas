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
#   File: sttpb.pro
#
# Author: $author$
#   Date: 6/25/2025
#
# os specific QtCreator project .pro file for framework talas executable sttpb
########################################################################
# Depends: rostra;nadir;fila;crono;versa;rete;stara;cifra;bn;mp;argo;libjson
#
# Debug: talas/build/os/QtCreator/Debug/bin/sttpb
# Release: talas/build/os/QtCreator/Release/bin/sttpb
# Profile: talas/build/os/QtCreator/Profile/bin/sttpb
#
include(../../../../../build/QtCreator/talas.pri)
include(../../../../QtCreator/talas.pri)
include(../../talas.pri)
include(../../../../QtCreator/app/sttpb/sttpb.pri)

TARGET = $${sttpb_TARGET}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${sttpb_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${sttpb_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${sttpb_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
OBJECTIVE_SOURCES += \
$${sttpb_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${sttpb_HEADERS} \
$${sttpb_OBJECTIVE_HEADERS} \

# SOURCES
#
SOURCES += \
$${sttpb_SOURCES} \

########################################################################
# FRAMEWORKS
#
FRAMEWORKS += \
$${sttpb_FRAMEWORKS} \

# LIBS
#
LIBS += \
$${sttpb_LIBS} \
$${FRAMEWORKS} \

########################################################################
