#==============================================================================#
#                                   TARGETS                                    #
#==============================================================================#

NAME = class_generator

#==============================================================================#
#                                   COMMANDS                                   #
#==============================================================================#

CXX = c++
MKDIR = mkdir -p
RM = rm -f
MAKE_SILENT = make --no-print-directory

#==============================================================================#
#                                    COLORS                                    #
#==============================================================================#

PURPLE = \033[35m
GREEN = \033[32m
YELLOW = \033[33m
END = \033[0m

#==============================================================================#
#                                    PATHS                                     #
#==============================================================================#

SRC_DIR = src/
HEADER_DIR = include/
OBJ_DIR = obj/

#==============================================================================#
#                                   SOURCES                                    #
#==============================================================================#

SRC = main.cpp parsing.cpp utils.cpp Flags.cpp \
		classGenerator.cpp sourceGenerator.cpp headerGenerator.cpp

#==============================================================================#
#                                   HEADERS                                    #
#==============================================================================#

HEAD = $(addprefix $(HEADER_DIR), classGenerator.h Flags.hpp) \

#==============================================================================#
#                                   OBJECTS                                    #
#==============================================================================#

OBJ = $(addprefix $(OBJ_DIR), $(SRC:.cpp=.o))

#==============================================================================#
#                                   MAKEFILE                                   #
#==============================================================================#

all : $(OBJ_DIR) $(NAME)

$(NAME) : $(OBJ)
	echo "$(YELLOW)Making Class Generator$(END)"
	$(CXX) $(OBJ) -o $(NAME)
	echo "$(GREEN)Done$(END)"

$(OBJ_DIR)%.o : $(SRC_DIR)%.cpp $(HEAD) Makefile
	$(CXX) -c $< -o $@

$(OBJ_DIR) :
	$(MKDIR) $(OBJ_DIR)

clean :
	echo "$(PURPLE)Cleaning Class Generator's objects...$(END)"
	$(RM)r $(OBJ_DIR)
	echo "$(GREEN)Done$(END)"

fclean : clean
	echo "$(PURPLE)Cleaning Class Generator...$(END)"
	$(RM) $(NAME)
	echo "$(GREEN)Done$(END)"

re : fclean
	$(MAKE_SILENT) all

.PHONY : all clean fclean re
.SILENT :