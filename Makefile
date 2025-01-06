
# # Makefile 用于构建一个学生成绩管理系统
# # 设置编译器为 gcc
# CC = gcc 
# # 编译参数，包括生成调试信息和指定头文件路径
# CFLAGS = -g -Iinclude 
# # 所有需要编译的目标文件列表
# OBJECTS = src/menu.o src/main.o src/add_score.o src/print_score.o src/exit_system.o src/home.o src/search_score.o src/modify_score.o src/delete_score.o src/sort_score.o 
# # 最终生成的可执行文件名
# EXECUTABLE = system 
# # 公共头文件路径
# HEADFILE = include/head.h 

# # 默认目标，依赖于 $(EXECUTABLE)
# all: $(EXECUTABLE)

# # 定义虚拟目标，确保某些目标不会与文件名冲突
# .PHONY: all clean

# # 模式规则，用于编译所有 .c 文件
# %.o: %.c $(HEADFILE)
# 	@echo "Compiling $< to $@" 
# 	$(CC) $(CFLAGS) -c $< -o $@

# # 链接目标文件生成可执行文件
# $(EXECUTABLE): $(OBJECTS)
# 	@echo "Linking objects to create $(EXECUTABLE)"
# 	$(CC) $(OBJECTS) -o $@

# # 清理目标，用于删除所有目标文件和可执行文件
# clean:
# 	@echo "Cleaning up object and executable files"
# 	rm -f $(OBJECTS) $(EXECUTABLE)

# Makefile 用于构建一个学生成绩管理系统
# 设置编译器为 gcc
CC = gcc 
# 编译参数，包括生成调试信息和指定头文件路径
CFLAGS = -g -Iinclude 
# 中间文件目录
BUILD_DIR = build
# 所有需要编译的目标文件列表
OBJECTS = $(BUILD_DIR)/menu.o $(BUILD_DIR)/main.o $(BUILD_DIR)/add_score.o $(BUILD_DIR)/print_score.o $(BUILD_DIR)/exit_system.o $(BUILD_DIR)/home.o $(BUILD_DIR)/search_score.o $(BUILD_DIR)/modify_score.o $(BUILD_DIR)/delete_score.o $(BUILD_DIR)/sort_score.o 
# 最终生成的可执行文件名
EXECUTABLE = system 
# 公共头文件路径
HEADFILE = include/head.h 

# 默认目标，依赖于 $(EXECUTABLE)
all: $(EXECUTABLE)

# 定义虚拟目标，确保某些目标不会与文件名冲突
.PHONY: all clean

# 创建 build 目录
$(BUILD_DIR):
	@mkdir -p $(BUILD_DIR)

# 模式规则，用于编译所有 .c 文件
$(BUILD_DIR)/%.o: src/%.c $(HEADFILE) | $(BUILD_DIR)
	@echo "Compiling $< to $@" 
	$(CC) $(CFLAGS) -c $< -o $@

# 链接目标文件生成可执行文件
$(EXECUTABLE): $(OBJECTS)
	@echo "Linking objects to create $(EXECUTABLE)"
	$(CC) $(OBJECTS) -o $@

# 清理目标，用于删除所有目标文件和可执行文件
clean:
	@echo "Cleaning up object and executable files"
	rm -rf $(BUILD_DIR) $(EXECUTABLE)