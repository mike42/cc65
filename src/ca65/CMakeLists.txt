add_executable(ca65
        anonname.c
        asserts.c
        condasm.c
        dbginfo.c
        ea65.c
        easw16.c
        enum.c
        error.c
        expr.c
        feature.c
        filetab.c
        fragment.c
        global.c
        incpath.c
        instr.c
        istack.c
        lineinfo.c
        listing.c
        macro.c
        main.c
        nexttok.c
        objcode.c
        objfile.c
        options.c
        pseudo.c
        repeat.c
        scanner.c
        segdef.c
        segment.c
        sizeof.c
        span.c
        spool.c
        struct.c
        studyexpr.c
        symbol.c
        symentry.c
        symtab.c
        token.c
        toklist.c
        ulabel.c
        )

target_link_libraries(ca65 common)

target_include_directories(ca65 PUBLIC ../common)
