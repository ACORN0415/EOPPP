// RTPG_7295: vars=4 stmts=3
int xn[16];
int yo[16];
void test_func(void) {
    int y66 = 7;
    int lo86 = 11;
    int z26 = 94;
    int a20 = 14;
    int i;
    for (i = 0; i < 16; i++) {
        y66 = xn[i];
        lo86 = a20 + lo86;
        y66 = lo86 + 44385;
        lo86 = lo86 + 5;
        yo[i] = z26;
    }
}
int main() { test_func(); return 0; }

