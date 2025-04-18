# Nom de l'exécutable final
NAME = phonebook

# Dossiers des sources et des includes
SRC_DIR = .
INC_DIR = .

# Fichiers sources
SRC = $(SRC_DIR)/main.cpp $(SRC_DIR)/phonebook.cpp $(SRC_DIR)/contact.cpp

# Fichiers objets
OBJ = $(SRC:.cpp=.o)

# Compilateur et options
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++11 -I$(INC_DIR)

# Lien des fichiers objets pour créer l'exécutable
$(NAME): $(OBJ)
	$(CXX) $(OBJ) -o $(NAME)

# Compilation des fichiers .cpp en fichiers .o
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Nettoyer les fichiers générés
clean:
	rm -f $(OBJ)

# Supprimer l'exécutable et les fichiers objets
fclean: clean
	rm -f $(NAME)

# Recompiler tout
re: fclean $(NAME)

# Règles par défaut : compile et génère l'exécutable
all: $(NAME)
