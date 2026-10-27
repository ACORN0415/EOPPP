// RTPG_4193: vars=3 stmts=5
void test_func(void) {
    int out74 = 12046;
    int x76 = 42;
    int hi37 = 79;
    int *ptr = &out74;
    int i;
    for (i = 0; i < 10; i++) {
        out74 = hi37 - x76;
        x76 = x76 + 4;
        hi37 = hi37 + 10;
        x76 = x76 - 1;
        x76 = hi37 - out74;
        *ptr = *ptr + 1;
    }
}
int main() { test_func(); return 0; }

