// BOUNDARY: type 'int'
void test_func(void) {
    int x = 10;
    int y = 0, i;
    for (i = 0; i < 19; i++) { y = y + 1; }
}
int main() { test_func(); return 0; }

