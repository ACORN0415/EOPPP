// RTPG_4353: vars=3 stmts=6
int xn[64];
int yo[64];
void test_func(void) {
    int dat4 = 5;
    int c52 = 17;
    int acc57 = 4;
    int h0 = 88;
    int sv0 = 0;
    int h1 = 14711;
    int sv1 = 0;
    int i;
    for (i = 0; i < 50; i++) {
        int j;
        for (j = 0; j < 8; j++) {
        acc57 = c52 + acc57;
        acc57 = acc57 - 35;
        dat4 = c52 + acc57;
        dat4 = acc57 - dat4;
        c52 = acc57 + c52;
        dat4 = c52 + 80;
        }
    }
}
int main() { test_func(); return 0; }

