// RTPG_5970: vars=5 stmts=2
int xn[64];
int yo[64];
void test_func(void) {
    int lo27 = 78;
    int z41 = 59;
    int x66 = 14;
    int acc75 = 9;
    int c25 = 19;
    int i;
    for (i = 0; i < 64; i++) {
        z41 = xn[i];
        c25 = acc75 + z41;
        c25 = c25 + 3;
        yo[i] = z41;
    }
}
int main() { test_func(); return 0; }

