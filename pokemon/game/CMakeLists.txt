add_library(game)


# Add source files to the 'game' target
target_sources(game
    PRIVATE
        src/Pokedex.cpp
        src/Pokemon.cpp
        src/PokemonParty.cpp
        
)

# Include directories for the 'game' target
target_include_directories(game
 PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}/include
 )

# Create an alias for the 'game' library
add_library(cmake_example::game ALIAS game)