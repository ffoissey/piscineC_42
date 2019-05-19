SRCS = main.c calculator.c io.c
OBJS = main.o calculator.o io.o
HEAD = calculator.h io.h
TMP = calculator.h.gch io.h.gch
TARGET = do-op

all: $(TARGET)

$(TARGET): obj
	@gcc $(FLAG) -o $(TARGET) $(OBJS)

obj:
	@gcc -c $(SRCS) $(HEAD)

clean:
	@rm -f $(OBJS) $(TMP)

fclean: clean
	@rm -f $(TARGET)

re: fclean all
