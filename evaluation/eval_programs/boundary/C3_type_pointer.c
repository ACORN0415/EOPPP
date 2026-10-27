// BOUNDARY: pointer type
void test_func(void) {
    int x = 10;
    int *p = &x;
    int i;
    for (i = 0; i < 27; i++) { *p = *p + 1; }
}
int main() { test_func(); return 0; }

