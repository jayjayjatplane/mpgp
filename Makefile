# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -std=c++17 -Wall -Wextra

# Executable name
EXEC = pokemon_game

# Source files
SRCS = main.cpp \
       Pokemon.cpp \
       Move.cpp \
       Pokedex.cpp \
       PokemonParty.cpp \
       Trainer.cpp \
       Limits.cpp \
       pokemon_storage.cpp \
       battle_function.cpp

# Object files
OBJS = $(SRCS:.cpp=.o)

# Header files
HEADERS = Pokemon.h \
          Move.h \
          Pokedex.h \
          PokemonParty.h \
          Trainer.h \
          Limits.h \
          pokemon_storage.h \
          battle_function.h

# Default target
all: $(EXEC)

# Linking the executable
$(EXEC): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Compiling the source files into object files
%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean target
clean:
	rm -f $(OBJS) $(EXEC)

# Phony targets
.PHONY: all clean
