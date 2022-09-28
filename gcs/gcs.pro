TEMPLATE = app

CONFIG += sdk_no_version_check

include(../common/common.pri)

HEADERS += \
    gcs_communicator_factory.h \
    handlers/attitude_handler.h

SOURCES += \
    gcs_communicator_factory.cpp \
    handlers/attitude_handler.cpp \
    main.cpp
