// RTPG_4866: vars=3 stmts=3
int xn[16];
int yo[16];
void test_func(void) {
    int lo70 = 1;
    int lo24 = 68;
    int lo81 = 49;
    int i;
    for (i = 0; i < 99; i++) {
        int j;
        for (j = 0; j < 10; j++) {
        lo70 = lo81;
        lo70 = lo81;
        lo24 = lo24 - 4;
        }
    }
}
int main() { test_func(); return 0; }

