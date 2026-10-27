// BOUNDARY: comparison '!='
void test_func(void) {
    int out65 = 33959;
    int out87 = 10;
    int hi98 = 7;
    int tmp83 = -5;
    int i;
    for (i = 0; i < 32; i++) {
        out65 = hi98 + tmp83;
        if (out65 != 2) break;
    }
}
int main() { test_func(); return 0; }

