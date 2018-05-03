
for(item, MODULES) {
    split_modules = $$split(item, .)
    module_name = $$last(split_modules)
    join_modules = $$join(split_modules, /)
    build_type = release
    CONFIG(debug, debug|release) {
        build_type = debug
    }
    LIBS += -L$$ROOT_DIR/$$join_modules/$$build_type -l$$module_name
}
