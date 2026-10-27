// RTPG_4658: vars=5 stmts=2
int xn[64];
int yo[64];
void test_func(void) {
    int y71 = 10;
    int hi58 = 5482;
    int lo72 = 61249;
    int z22 = 5;
    int acc90 = 19;
    int i;
    for (i = 0; i < 64; i++) {
        y71 = xn[i];
        lo72 = hi58 + z22;
        lo72 = z22 % hi58;
        yo[i] = z22;
    }
}
int main() { test_func(); return 0; }

