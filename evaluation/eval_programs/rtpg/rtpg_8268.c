// RTPG_8268: vars=6 stmts=2
void test_func(void) {
    int x41 = 21319;
    int b81 = 32;
    int cnt3 = 3;
    int out75 = 94;
    int z13 = 9;
    int val41 = -24;
    int *ptr = &out75;
    int i;
    for (i = 0; i < 49; i++) {
        val41 = val41 - 1;
        z13 = z13 - 1;
        *ptr = *ptr + 3;
    }
}
int main() { test_func(); return 0; }

