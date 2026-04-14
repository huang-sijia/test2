#include <stdio.h>
#include <string.h>

void print_border(void) {
    printf("========================================\n");
}

void print_title(void) {
    print_border();
    printf("            C Hello World Demo          \n");
    print_border();
}

void print_hello_once(int idx) {
    printf("Hello, World! [%02d]\n", idx);
}

void print_hello_block(int start, int count) {
    for (int i = 0; i < count; ++i) {
        print_hello_once(start + i);
    }
}

void print_message_details(const char *name) {
    printf("Program: %s\n", name);
    printf("Language: C\n");
    printf("Goal: print friendly hello messages\n");
}

void print_ascii_art(void) {
    printf("  _   _      _ _        __        __         _     _ \n");
    printf(" | | | | ___| | | ___   \\ \\      / /__  _ __| | __| |\n");
    printf(" | |_| |/ _ \\ | |/ _ \\   \\ \\ /\\ / / _ \\| '__| |/ _` |\n");
    printf(" |  _  |  __/ | | (_) |   \\ V  V / (_) | |  | | (_| |\n");
    printf(" |_| |_|\\___|_|_|\\___/     \\_/\\_/ \\___/|_|  |_|\\__,_|\n");
}

void print_footer(void) {
    print_border();
    printf("Done. Thanks for running this 100-line demo.\n");
    print_border();
}

int count_letters(const char *text) {
    int total = 0;
    for (size_t i = 0; i < strlen(text); ++i) {
        if ((text[i] >= 'A' && text[i] <= 'Z') || (text[i] >= 'a' && text[i] <= 'z')) {
            total++;
        }
    }
    return total;
}

void print_text_stats(const char *text) {
    int letters = count_letters(text);
    printf("Sample text: \"%s\"\n", text);
    printf("Letter count: %d\n", letters);
}

int main(void) {
    const char *sample = "Hello, World from C!";
    print_title();

    print_message_details("hello100.c");
    print_border();

    print_ascii_art();
    print_border();

    print_hello_block(1, 10);
    print_border();

    print_text_stats(sample);
    print_border();

    for (int round = 1; round <= 3; ++round) {
        printf("Round %d -> Hello, World!\n", round);
    }

    print_border();

    const char *extra[] = {
        "Keep learning C.",
        "Practice makes progress.",
        "Small programs build strong basics."
    };

    for (int i = 0; i < 3; ++i) {
        printf("%s\n", extra[i]);
    }

    print_footer();

    return 0;
}

/* This file intentionally has 100 lines. */
/* You can compile with: gcc hello100.c -o hello100 */
/* Then run: ./hello100 */
/* End of file. */
