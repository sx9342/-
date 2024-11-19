# CC = gcc # 编译器为gcc
# CFLAGS = -g -Iinclude # 编译参数，包括调试信息和头文件路径
# OBJECTS =src/menu.o src/main.o src/add_score.o src/print_score.o src/exit_system.o src/home.o src/search_score.o src/modify_score.o src/delete_score.o src/sort_score.o # 所有需要编译的目标文件
# EXECUTABLE = system # 最终生成的可执行文件名
# HEADFILE = include/head.h # 公共头文件
# # 默认目标，依赖于$(EXECUTABLE)
# all: $(EXECUTABLE)

# # 定义虚拟目标，确保某些目标不会与文件名冲突
# .PHONY: all clean

# # src/menu.o依赖于src/menu.c和头文件
# src/menu.o: src/menu.c $(HEADFILE)
# 	@echo "Compiling src/menu.c to src/menu.o"
# 	$(CC) $(CFLAGS) -c src/menu.c -o src/menu.o

# # src/home.o依赖于src/home.c和头文件
# src/home.o: src/home.c $(HEADFILE)
# 	@echo "Compiling src/home.c to src/home"
# 	$(CC) $(CFLAGS) -c src/home.c -o src/home.o

	
# src/add_score.o: src/add_score.c $(HEADFILE)
# 	$(CC) $(CFLAGS) -c src/add_score.c -o src/add_score.o
	
# src/exit_system.o:	src/exit_system.c $(HEADFILE)
# 	$(CC) $(CFLAGS) -c src/exit_system.c -o src/exit_system.o
		
# src/search_score.o: src/search_score.c $(HEADFILE)
# 	$(CC) $(CFLAGS) -c src/search_score.c -o src/search_score.o		
# # src/main.o依赖于src/main.c和头文件
# src/modify_score.o: src/modify_score.c $(HEADFILE)
# 	$(CC) $(CFLAGS) -c src/modify_score.c -o src/modify_score.o

# src/delete_score.o: src/delete_score.c $(HEADFILE)
# 	$(CC) $(CFLAGS) -c src/delete_score.c -o src/delete_score.o	
	
# src/sort_score.o: src/sort_score.c $(HEADFILE)
# 	$(CC) $(CFLAGS) -c src/sort_score.c -o src/sort_score.o	
# src/main.o: src/main.c $(HEADFILE)
# 	$(CC) $(CFLAGS) -c src/main.c -o src/main.o	

# # $(EXECUTABLE)依赖于所有目标文件
# $(EXECUTABLE): $(OBJECTS)
# 	@echo "Linking objects to create $(EXECUTABLE)"
# 	$(CC) $(OBJECTS) -o $(EXECUTABLE)

# # 清理目标，用于删除所有目标文件和可执行文件
# clean: 
# 	@echo "Cleaning up object and executable files"
# 	rm -f $(OBJECTS) $(EXECUTABLE)

# Makefile 用于构建一个学生成绩管理系统
# 设置编译器为 gcc
CC = gcc 
# 编译参数，包括生成调试信息和指定头文件路径
CFLAGS = -g -Iinclude 
# 所有需要编译的目标文件列表
OBJECTS = src/menu.o src/main.o src/add_score.o src/print_score.o src/exit_system.o src/home.o src/search_score.o src/modify_score.o src/delete_score.o src/sort_score.o 
# 最终生成的可执行文件名
EXECUTABLE = system 
# 公共头文件路径
HEADFILE = include/head.h 

# 默认目标，依赖于 $(EXECUTABLE)
all: $(EXECUTABLE)

# 定义虚拟目标，确保某些目标不会与文件名冲突
.PHONY: all clean

# 模式规则，用于编译所有 .c 文件
%.o: %.c $(HEADFILE)
	@echo "Compiling $< to $@" 
	$(CC) $(CFLAGS) -c $< -o $@

# 链接目标文件生成可执行文件
$(EXECUTABLE): $(OBJECTS)
	@echo "Linking objects to create $(EXECUTABLE)"
	$(CC) $(OBJECTS) -o $@

# 清理目标，用于删除所有目标文件和可执行文件
clean:
	@echo "Cleaning up object and executable files"
	rm -f $(OBJECTS) $(EXECUTABLE)