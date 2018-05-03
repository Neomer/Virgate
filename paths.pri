ROOT_DIR = $$PWD
SDK_DIR = $$PWD/SDK

CONFIG(debug, debug|release) {
    DESTDIR = $$ROOT_DIR/build/debug
    OBJECTS_DIR = $$ROOT_DIR/build/debug/.tmp
    MOC_DIR = $$ROOT_DIR/build/debug/.tmp
    RCC_DIR = $$ROOT_DIR/build/debug/.tmp
    UI_DIR = $$ROOT_DIR/build/debug/.tmp
} else {
    DESTDIR = $$ROOT_DIR/build/release
    OBJECTS_DIR = $$ROOT_DIR/build/release/.tmp
    MOC_DIR = $$ROOT_DIR/build/release/.tmp
    RCC_DIR = $$ROOT_DIR/build/release/.tmp
    UI_DIR = $$ROOT_DIR/build/release/.tmp
}


