// RTPG_8739: vars=5 stmts=2
int xn[64];
int yo[64];
void test_func(void) {
    int b9 = 45549;
    int b17 = 32723;
    int lo13 = 9;
    int lo50 = 7;
    int y24 = 45;
    int i;
    for (i = 0; i < 64; i++) {
        lo13 = xn[i];
        lo50 = b9 + lo13;
        b17 = y24;
        yo[i] = lo50;
    }
}
int main() { test_func(); return 0; }

