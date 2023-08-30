cmake_minimum_required(VERSION 3.5)

project(ChatWgt VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

set(PROJECT_SOURCES
        main.cpp
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(ChatWgt
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}


        mainwindow_test.h mainwindow_test.cpp mainwindow_test.ui

        qrc.qrc
        ChatWgtItems/chatreceivewgtitem.cpp ChatWgtItems/chatreceivewgtitem.h ChatWgtItems/chatreceivewgtitem.ui ChatWgtItems/chatsendwgtitem.cpp ChatWgtItems/chatsendwgtitem.h ChatWgtItems/chatsendwgtitem.ui
        ChatWgtItems/abstractionchatwgtitem.cpp ChatWgtItems/abstractionchatwgtitem.h ChatWgtItems/abstractionchatwgtitemmgr.cpp ChatWgtItems/abstractionchatwgtitemmgr.h ChatWgtItems/chatreceivewgtitem.cpp ChatWgtItems/chatreceivewgtitem.h ChatWgtItems/chatreceivewgtitem.ui ChatWgtItems/chatsendwgtitem.cpp ChatWgtItems/chatsendwgtitem.h ChatWgtItems/chatsendwgtitem.ui    ChatWgtItems/chatwgtitemmgr.cpp ChatWgtItems/chatwgtitemmgr.h
        ChatWgt/chatwgt.cpp ChatWgt/chatwgt.h ChatWgt/chatwgt.ui ChatWgt/chatwgtmgr.cpp ChatWgt/chatwgtmgr.h
        chatwgtmain.h chatwgtmain.cpp
        icon.rc



    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET ChatWgt APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(ChatWgt SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(ChatWgt
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(ChatWgt PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.ChatWgt)
endif()
set_target_properties(ChatWgt PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS ChatWgt
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(ChatWgt)
endif()
