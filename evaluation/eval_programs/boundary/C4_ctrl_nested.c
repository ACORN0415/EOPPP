// BOUNDARY: nested loop
void test_func(void) {
    int sum = 0, i, j;
    for (i = 0; i < 15; i++) {
        for (j = 0; j < 11; j++) {
            sum = sum + i + j;
        }
    }
}
int main() { test_func(); return 0; }

