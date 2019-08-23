#include <stdio.h>
#include <stdlib.h>

/*
第0节:基本语法
*/
int main()
{
	// 1.注释
	// 方式一
	/*
	   方式二
	*/

	// 2.标识符
	/*
	C 标识符是用来标识变量、函数，或任何其他用户自定义项目的名称。
	一个标识符以字母 A-Z 或 a-z 或下划线 _ 开始，后跟零个或多个字母、下划线和数字（0-9）。
	C 标识符内不允许出现标点字符，比如 @、$ 和 %。C 是区分大小写的编程语言。因此，在 C 中，Manpower 和 manpower 是两个不同的标识符。
	下面列出几个有效的标识符：
	mohd       zara    abc   move_name  a_123
	myname50   _temp   j     a23b9      retVal
	*/


	// 3.基本结构
	/*
	程序的第一行 #include <stdio.h> 是预处理器指令，告诉 C 编译器在实际编译之前要包含 stdio.h 文件。
	下一行 int main() 是主函数，程序从这里开始执行。
	下一行 注释 将会被编译器忽略，这里放置程序的注释内容。它们被称为程序的注释。
	下一行 printf(...) 是 C 中另一个可用的函数，会在屏幕上显示消息 "Hello, World!"。
	下一行 return 0; 终止 main() 函数，并返回值 0。
	*/
	/* 我的第一个 C 程序 */
	printf("Hello, World! \n");
	return 0;
}