// RTPG_1432: vars=7 stmts=8
int xn[16];
int yo[16];
void test_func(void) {
    int out22 = 34968;
    int b89 = 1;
    int z83 = 2;
    int out96 = 2;
    int val48 = 0;
    int a49 = 63809;
    int prev92 = 26;
    int i;
    for (i = 0; i < 34; i++) {
        int j;
        for (j = 0; j < 10; j++) {
        a49 = out22 - out96;
        prev92 = prev92 + 3;
        a49 = out22 + out96;
        out22 = b89 - out96;
        prev92 = prev92 + val48;
        b89 = b89 + 1;
        a49 = prev92 + out22;
        out96 = out22 + b89;
        }
    }
}
int main() { test_func(); return 0; }

