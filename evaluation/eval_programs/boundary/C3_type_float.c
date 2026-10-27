// BOUNDARY: type 'float'
void test_func(void) {
    float x = 1.5;
    int y = 0, i;
    for (i = 0; i < 25; i++) { y = y + 1; }
}
int main() { test_func(); return 0; }

