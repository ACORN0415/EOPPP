// RTPG_8900: vars=3 stmts=3
int xn[16];
int yo[16];
void test_func(void) {
    int y72 = 10;
    int val30 = 3;
    int out42 = 8;
    int *ptr = &out42;
    int i;
    for (i = 0; i < 87; i++) {
        int j;
        for (j = 0; j < 15; j++) {
        y72 = out42 + y72;
        y72 = y72 - 4;
        out42 = val30 - out42;
        }
    }
}
int main() { test_func(); return 0; }

