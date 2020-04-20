add_library (CatCutifier "CatCutifier.cpp" "CatCutifier.h")
add_library (CatCutifier "SetCutifier.cpp" "SetCutifier.h")
add_library (CatCutifier "UpdateCutifier.cpp" "UpdateCutifier.h")
target_include_directories(CatCutifier PUBLIC .)

# Should install library properly here, but I'm focusing on just the docs