# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omartela <omartela@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/13 13:53:10 by omartela          #+#    #+#              #
#    Updated: 2025/01/13 13:53:11 by omartela         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COMPILER = c++

TARGET = bsp
INC_DIR = inc
SRC = src/Fixed.cpp src/Point.cpp src/bsp.cpp src/main.cpp
OBJ = $(SRC:.cpp=.o)
CFLAGS = -Wall -Wextra -Werror -I$(INC_DIR)

all: $(TARGET)

$(TARGET): $(OBJ)
	$(COMPILER) $(CFLAGS) -o $(TARGET) $(OBJ)

%.o: %.cpp
	$(COMPILER) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)
fclean:
	rm -f $(OBJ) $(TARGET)

re: fclean all
