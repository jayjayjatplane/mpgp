# src/executable/CMakeLists.txt
add_executable(run)

# Add source files to the 'executable' target
target_sources(run
    PRIVATE
        main.cpp
)

# Link with the game library
target_link_libraries(run
    PRIVATE

        cmake_example::game
)