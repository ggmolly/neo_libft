//../file/read_file.c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "includes/memory.h"
#include "includes/file.h"

void check(char *read_content, char *expected)
{
	if (strcmp(read_content, expected) == 0)
		printf("P");
	else
		printf("F");
}

char *read_file(char *path)
{
	char *content = NULL;
	int size = 0;
	FILE *file = fopen(path, "r");
	if (file)
	{
		fseek(file, 0, SEEK_END);
		size = ftell(file);
		rewind(file);
		content = malloc(sizeof(char) * (size + 1));
		if (content)
		{
			fread(content, 1, size, file);
			content[size] = '\0';
		}
		fclose(file);
	}
	return content;
}

int main(void)
{
	char *file1 = ft_read_file("files_test/digits.txt");
	char *file2 = ft_read_file("files_test/alphabet.txt");
	char *file3 = ft_read_file("files_test/nothing.txt");
	char *file4 = ft_read_file("files_test/long_text.txt");
	char *file5 = ft_read_file("files_test/multiple_lines.txt");
	char *file6 = ft_read_file("files_test/lorem_ipsum.txt");
	char *file7 = ft_read_file("files_test/ooa.txt");
	char *file8 = ft_read_file("files_test/misc_special.txt");
	char *file9 = ft_read_file("files_test/non_printable.txt");
	char *tmp = read_file("files_test/non_printable.txt");
	check(file1, "0123456789");
	check(file2, "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");
	check(file3, "");
	check(file4, "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA");
	check(file5, "aaaaaaaaaaaaaaaaaaaaa\naaaaaaaaaaaaaaaaaaaaa\naaaaaaaaaaaaaaaaaaaaa\naaaaaaaaaaaaaaaaaaaaa\naaaaaaaaaaaaaaaaaaaaa\naaaaaaaaaaaaaaaaaaaaa\naaaaaaaaaaaaaaaaaaaaa\naaaaaaaaaaaaaaaaaaaaa\naaaaaaaaaaaaaaaaaaaaa\naaaaaaaaaaaaaaaaaaaaa\naaaaaaaaaaaaaaaaaaaaa\naaaaaaaaaaaaaaaaaaaaa\naaaaaaaaaaaaaaaaaaaaa\naaaaaaaaaaaaaaaaaaaaa\naaaaaaaaaaaaaaaaaaaaa\naaaaaaaaaaaaaaaaaaaaa\naaaaaaaaaaaaaaaaaaaaa\naaaaaaaaaaaaaaaaaaaaa");
	check(file6, "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Donec feugiat vehicula nibh vitae luctus. Donec a ante bibendum, porta dolor ut, aliquet urna. Sed ut facilisis nunc. Etiam blandit malesuada lectus. Vestibulum sagittis, mauris eget laoreet viverra, tellus purus iaculis lectus, eu ullamcorper leo tellus a lacus. Aliquam gravida scelerisque purus id pretium. Duis ut aliquet tortor. Sed a placerat nibh. Sed quis nisl ligula. Lorem ipsum dolor sit amet, consectetur adipiscing elit.\n\nPellentesque suscipit quam non lacinia feugiat. Quisque interdum sem id ex vehicula sodales. Donec imperdiet placerat mauris quis porttitor. Maecenas finibus eleifend neque sed laoreet. Suspendisse euismod felis urna, nec feugiat purus volutpat sit amet. Sed vel est nec dui convallis euismod sed id ex. Donec pellentesque velit ut dolor consectetur accumsan vitae in justo. Nunc nec dui sit amet enim vestibulum fringilla quis at eros. Pellentesque viverra nibh sit amet ultrices ultrices. Pellentesque posuere ullamcorper cursus. Proin luctus metus ac libero tempus, et vestibulum leo sagittis.\n\nSed auctor ex in erat viverra, at eleifend dolor placerat. Fusce mi nibh, ornare ac ipsum vel, suscipit semper sapien. Donec non nulla non nulla tristique molestie facilisis vel urna. Nullam feugiat vehicula nisl nec hendrerit. Aliquam ultricies dui sit amet ex vulputate interdum. Aliquam mattis laoreet ipsum et vulputate. Donec sed mi nec nisl varius gravida id ac sem. Curabitur lobortis mi vitae maximus egestas. Suspendisse non sapien vitae erat tincidunt pulvinar. Sed consectetur ligula eu arcu fringilla faucibus.\n\nProin posuere cursus neque ut vulputate. Quisque gravida augue eu justo iaculis, sit amet cursus urna rhoncus. Pellentesque accumsan ullamcorper arcu, eu vestibulum dui venenatis nec. Pellentesque massa ipsum, eleifend id pellentesque sed, ultricies quis justo. Sed bibendum tincidunt diam sit amet fringilla. Integer tempor elit ipsum, id pellentesque leo convallis scelerisque orci aliquam.");
	check(file7, "\"é&çè-\"&-èé\"_'ç()ç_àé('_çèé'(_è--\"'(èé&-('&_èéè-ç(è/*-(-/*-è-*/è/*-+++_èè_ç8625738569");
	check(file8, "☺☻♥♦♣♠•◘○◙♂♀♪♫☼►◄↕‼¶§▬↨↑↓→←∟↔▲");
	check(file9, tmp);
	ft_free(&file1);
	ft_free(&file2);
	ft_free(&file3);
	ft_free(&file4);
	ft_free(&file5);
	ft_free(&file6);
	ft_free(&file7);
	ft_free(&file8);
	ft_free(&file9);
	free(tmp);
	return (0);
}