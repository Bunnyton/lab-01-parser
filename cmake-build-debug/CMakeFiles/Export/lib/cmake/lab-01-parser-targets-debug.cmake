#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "lab-01-parser::lab-01-parser" for configuration "Debug"
set_property(TARGET lab-01-parser::lab-01-parser APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(lab-01-parser::lab-01-parser PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "CXX"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/liblab-01-parser.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS lab-01-parser::lab-01-parser )
list(APPEND _IMPORT_CHECK_FILES_FOR_lab-01-parser::lab-01-parser "${_IMPORT_PREFIX}/lib/liblab-01-parser.a" )

# Import target "lab-01-parser::demo" for configuration "Debug"
set_property(TARGET lab-01-parser::demo APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(lab-01-parser::demo PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/bin/demo"
  )

list(APPEND _IMPORT_CHECK_TARGETS lab-01-parser::demo )
list(APPEND _IMPORT_CHECK_FILES_FOR_lab-01-parser::demo "${_IMPORT_PREFIX}/bin/demo" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
