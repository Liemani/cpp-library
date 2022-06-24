NAME			:= libcpp-library.a

SRCS			:= \
				   BuiltInChar.cpp \
				   WrapChar.cpp \
				   JSONDescriber.cpp

OBJS			:= $(SRCS:.cpp=.o)

CXX				:= c++
CXXFLAGS		:= -std=c++98 -Wall -Wextra -Werror
INCLUDE			:=
DEBUG_OPTION	:= -D NDEBUG
LIBRARY			:=

COMPILE			= $(CXX) $(CXXFLAGS) $(INCLUDE) $(DEBUG_OPTION)
AR              = ar -r
LINK			= $(CXX) $(CXXFLAGS) $(INCLUDE) $(DEBUG_OPTION) $(LIBRARY)

RM				:= rm -f



.PHONY: all
all:			$(NAME)

.PHONY: debug setdebug
debug:			clean setdebug $(NAME)
setdebug:
				$(eval DEBUG_OPTION = -g)

.PHONY: clean fclean re
clean:
				$(RM) $(OBJS)
fclean:			clean
				$(RM) $(NAME)
re:				fclean all



$(NAME):		$(OBJS)
				$(AR) $@ $^

$(OBJS):        %.o: %.cpp
				$(COMPILE) -o $@ -c $<
