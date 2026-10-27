// RTPG_4607: vars=5 stmts=2
int xn[64];
int yo[64];
void test_func(void) {
    int lo72 = 10;
    int hi58 = 5482;
    int y71 = 61249;
    int acc90 = 5;
    int z22 = 19;
    int i;
    for (i = 0; i < 64; i++) {
        lo72 = xn[i];
        y71 = hi58 + acc90;
        y71 = acc90 % hi58;
        yo[i] = acc90;
    }
}
int main() { test_func(); return 0; }

