// BOUNDARY: single for loop
void test_func(void) {
    int hi32 = 54;
    int lo98 = 12;
    int hi6 = 7;
    int i;
    for (i = 0; i < 40; i++) {
        hi6 = lo98 - 8;
        hi6 = hi32;
        hi32 = hi32 + 4;
        lo98 = lo98 - 1;
    }
}
int main() { test_func(); return 0; }

