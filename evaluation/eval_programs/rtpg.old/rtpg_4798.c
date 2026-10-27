// RTPG_4798: vars=3 stmts=3
int xn[16];
int yo[16];
void test_func(void) {
    int lo70 = 1;
    int lo81 = 68;
    int lo24 = 49;
    int i;
    for (i = 0; i < 99; i++) {
        int j;
        for (j = 0; j < 10; j++) {
        lo70 = lo24;
        lo70 = lo24;
        lo81 = lo81 - 4;
        }
    }
}
int main() { test_func(); return 0; }

