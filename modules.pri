split_modules = $$split(MODULE, .)
module_name = $$last(split_modules)
join_path = $$join(split_modules, /)
build_type = release
CONFIG(debug, debug|release) {
    build_type = debug
}
target_path = $$ROOT_DIR/$$join_path/$$build_type

for(item, DEPEND_MODULES) {
    split_modules = $$split(item, .)
    module_name = $$last(split_modules)
    join_modules = $$join(split_modules, /)
    build_type = release
    CONFIG(debug, debug|release) {
        build_type = debug
    }
    #message($$ROOT_DIR/$$join_modules/$$build_type)

    LIBS += -L$$ROOT_DIR/$$join_modules/$$build_type -l$$module_name

    linux-g++{
        #QMAKE_POST_LINK += $$quote(cp $$join $${DESTDIR}$$escape_expand(\n\t))
    }

    win32 {
        #QMAKE_POST_LINK += $$quote(cmd /c copy /y $$ROOT_DIR/$$join_modules/$$build_type/$$module_name $${target_path}$$escape_expand(\n\t))
    }
}
