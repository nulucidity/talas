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
#   File: sttpp.pri
#
# Author: $author$
#   Date: 6/24/2025
#
# generic QtCreator project .pri file for framework talas executable sttpp
########################################################################

########################################################################
# sttpp

# sttpp TARGET
#
sttpp_TARGET = sttpp

# sttpp INCLUDEPATH
#
sttpp_INCLUDEPATH += \
$${talas_INCLUDEPATH} \

# sttpp DEFINES
#
sttpp_DEFINES += \
$${talas_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_CONSOLE_MAIN_MAIN \

########################################################################
# sttpp OBJECTIVE_HEADERS
#
#sttpp_OBJECTIVE_HEADERS += \
#$${TALAS_SRC}/xos/app/console/sttpp/main.hh \

# sttpp OBJECTIVE_SOURCES
#
#sttpp_OBJECTIVE_SOURCES += \
#$${TALAS_SRC}/xos/app/console/sttpp/main.mm \

########################################################################
# sttpp HEADERS
#
sttpp_HEADERS += \
$${NADIR_SRC}/xos/console/sequence.hpp \
$${NADIR_SRC}/xos/console/out.hpp \
$${NADIR_SRC}/xos/console/output.hpp \
$${NADIR_SRC}/xos/console/input.hpp \
$${NADIR_SRC}/xos/console/error.hpp \
$${NADIR_SRC}/xos/console/io.hpp \
$${NADIR_SRC}/xos/console/main.hpp \
$${NADIR_SRC}/xos/console/getopt/main_opt.hpp \
$${NADIR_SRC}/xos/console/getopt/main.hpp \
\
$${NADIR_SRC}/xos/app/console/main_opt.hpp \
$${NADIR_SRC}/xos/app/console/main.hpp \
$${NADIR_SRC}/xos/app/console/version/main_opt.hpp \
$${NADIR_SRC}/xos/app/console/version/main.hpp \
$${NADIR_SRC}/xos/app/console/output/base/main_opt.hpp \
$${NADIR_SRC}/xos/app/console/output/base/main.hpp \
$${NADIR_SRC}/xos/app/console/input/base/main_opt.hpp \
$${NADIR_SRC}/xos/app/console/input/base/main.hpp \
\
$${VERSA_SRC}/xos/app/console/protocol/base/main_opt.hpp \
$${VERSA_SRC}/xos/app/console/protocol/base/main.hpp \
$${VERSA_SRC}/xos/app/console/protocol/client/main_opt.hpp \
$${VERSA_SRC}/xos/app/console/protocol/client/main.hpp \
$${VERSA_SRC}/xos/app/console/protocol/server/main_opt.hpp \
$${VERSA_SRC}/xos/app/console/protocol/server/main.hpp \
\
$${VERSA_SRC}/xos/app/console/protocol/ttp/base/main_opt.hpp \
$${VERSA_SRC}/xos/app/console/protocol/ttp/base/main.hpp \
$${VERSA_SRC}/xos/app/console/protocol/ttp/client/main_opt.hpp \
$${VERSA_SRC}/xos/app/console/protocol/ttp/client/main.hpp \
$${VERSA_SRC}/xos/app/console/protocol/ttp/server/main_opt.hpp \
$${VERSA_SRC}/xos/app/console/protocol/ttp/server/main.hpp \
\
$${TALAS_SRC}/xos/app/console/protocol/sttp/base/main_opt.hpp \
$${TALAS_SRC}/xos/app/console/protocol/sttp/base/main.hpp \
$${TALAS_SRC}/xos/app/console/protocol/sttp/client/main_opt.hpp \
$${TALAS_SRC}/xos/app/console/protocol/sttp/client/main.hpp \
$${TALAS_SRC}/xos/app/console/protocol/sttp/server/main_opt.hpp \
$${TALAS_SRC}/xos/app/console/protocol/sttp/server/main.hpp \

# sttpp SOURCES
#
sttpp_SOURCES += \
$${TALAS_SRC}/xos/app/console/protocol/sttp/client/main_opt.cpp \
$${TALAS_SRC}/xos/app/console/protocol/sttp/client/main.cpp \

########################################################################
# sttpp FRAMEWORKS
#
sttpp_FRAMEWORKS += \
$${talas_rsa_FRAMEWORKS} \

# sttpp LIBS
#
sttpp_LIBS += \
$${talas_rsa_LIBS} \

########################################################################
# NO Qt
QT -= gui core
