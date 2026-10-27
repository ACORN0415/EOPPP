// RTPG_7824: vars=6 stmts=7
void test_func(void) {
    int z2 = 38;
    int v93 = 36601;
    int v9 = 82;
    int sum36 = 22828;
    int hi16 = 1839;
    int hi12 = 3;
    int *ptr = &hi12;
    int i;
    for (i = 0; i < 92; i++) {
        v9 = v9 - z2;
        sum36 = z2 - hi16;
        hi12 = v93 + 8;
        z2 = z2 + 5;
        sum36 = hi12;
        v93 = hi12;
        z2 = z2 + sum36;
        *ptr = *ptr + 4;
    }
}
int main() { test_func(); return 0; }

