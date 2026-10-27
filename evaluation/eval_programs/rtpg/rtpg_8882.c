// RTPG_8882: vars=5 stmts=2
int xn[64];
int yo[64];
void test_func(void) {
    int lo50 = 45549;
    int lo13 = 32723;
    int y24 = 9;
    int b9 = 7;
    int b17 = 45;
    int i;
    for (i = 0; i < 64; i++) {
        y24 = xn[i];
        b9 = lo50 + y24;
        lo13 = b17;
        yo[i] = b9;
    }
}
int main() { test_func(); return 0; }

