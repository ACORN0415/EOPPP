// RTPG_9072: vars=3 stmts=3
int xn[16];
int yo[16];
void test_func(void) {
    int out42 = 10;
    int val30 = 3;
    int y72 = 8;
    int *ptr = &y72;
    int i;
    for (i = 0; i < 87; i++) {
        int j;
        for (j = 0; j < 15; j++) {
        out42 = y72 + out42;
        out42 = out42 - 4;
        y72 = val30 - y72;
        }
    }
}
int main() { test_func(); return 0; }

