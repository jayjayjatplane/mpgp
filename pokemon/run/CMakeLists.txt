# src/executable/CMakeLists.txt
add_executable(run)

# Add source files to the 'executable' target
target_sources(run
    PRIVATE
        battle_function.cpp    
        new_main.cpp
        pokemon_storage.cpp
)

# Link with the game library
target_link_libraries(run
    PRIVATE

        cmake_example::game
)