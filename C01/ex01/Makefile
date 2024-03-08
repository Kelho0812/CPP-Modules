NAME = zombie

RED = \033[0;31m
GRN = \033[0;32m
YEL = \033[0;33m
BLU = \033[0;34m
MAG = \033[0;35m
CYN = \033[0;36m
WHT = \033[0;37m
RES = \033[0m

CC = g++

CFLAGS = -Werror -Wall -Wextra -g -std=c++98

RM = rm -rf

SDIR := src
ODIR := obj

SOURCES := main.cpp \
			Zombie.class.cpp \
			randomChump.cpp \
			newZombie.cpp \
			
OBJECTS := $(patsubst %.cpp,$(ODIR)/%.o,$(SOURCES))

all : ${NAME}

${NAME} : ${OBJECTS} 
	@${CC} ${CFLAGS} ${OBJECTS} -o ${NAME} $(LFLAG)
	@echo "\n$(GRN)➾ ${NAME} created$(RES)"

$(ODIR)/%.o: $(SDIR)/%.cpp | $(ODIR)
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c -o $@ $<
	@echo "${GRN}➾ $@ created ${RES}"

$(ODIR):
	@mkdir -p $@	

clean :
	@${RM} ${OBJECTS}
	@${RM} ${ODIR}
	@echo "${RED}➾ ${NAME} objects deleted${RES}"

fclean : clean
	@${RM} ${NAME}
	@echo "${RED}➾ ${NAME} deleted${RES}"

re : fclean all