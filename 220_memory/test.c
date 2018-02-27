#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <time.h>

int is_end(char* input) {
    return *input == 0;
}

int is_linebreak(char* input) {
    return *input == '\r' || *input == '\n' || *input == ' ';
}

char* eat_linebreaks(char* input) {
    while (is_linebreak(input))
        ++input;

    return input;
}

size_t count_lines(char* input) {
    char* p = input;
    size_t rows = 1;

    if (is_end(p))
        return 0;

    while (!is_end(p)) {
        if (is_linebreak(p)) {
            ++rows;
            p = eat_linebreaks(p);
        }
        else {
            ++p;
        }
    }
    return rows;
}

/* split string by lines */
char** get_lines(char* input, size_t line_count) {
    char* p = input;
    char* from = input;
    size_t length = 0;
    size_t line = 0;
        int i;
    char** lines = (char**)malloc(line_count * sizeof(char*));

    do {
        if (is_end(p) || is_linebreak(p)) {
            lines[line] = (char*)malloc(length + 1);
            for (i = 0; i < length; ++i)
                lines[line][i] = *(from + i);

            lines[line][length] = 0;
            length = 0;
            ++line;
            p = eat_linebreaks(p);
            from = p;

        }
        else {
            ++length;
            ++p;
        }
    } while (!is_end(p));

    // Copy the last line as well in case the input doesn't end in line-break
    lines[line] = (char*)malloc(length + 1);
    for (i = 0; i < length; ++i)
        lines[line][i] = *(from + i);

    lines[line][length] = 0;
    ++line;


    return lines;
}

int main() {
    clock_t start;
    unsigned long microseconds;
    float seconds;
    char** lines;
    size_t size;
    size_t number_of_rows;
    int count;
    int* my_array;
    start = clock();

    FILE *stream;
    char *contents;
    int fileSize = 0;
        int i;

    // Open file, find the size of it
    stream = fopen("/usr/share/dict/words", "rb");
    fseek(stream, 0L, SEEK_END);
    fileSize = ftell(stream);
    fseek(stream, 0L, SEEK_SET);

    // Allocate space for the entire file content
    contents = (char*)malloc(fileSize + 1);

    // Stream file into memory
    size = fread(contents, 1, fileSize, stream);
    contents[size] = 0;
    fclose(stream);

    // Count rows in content
    number_of_rows = count_lines(contents);

    // Get array of char*, one for each line
    lines = get_lines(contents, number_of_rows);

    // Get the numbers out of the lines
    count = atoi(lines[0]); // First row has count
    my_array = (int*)malloc(count * sizeof(int));
    for (i = 0; i < count; ++i) {
        my_array[i] = atoi(lines[i + 1]);
    }

    microseconds = clock() - start;
    seconds = microseconds / 1000000.0f;
    printf("Took %fs\n", seconds);
    for(int i = 0; i < 99000; i++)
	{
		printf("%c\n",&lines);
	}
	
    return 0;
}
