// RTPG_7336: vars=5 stmts=6
int xn[32];
int yo[32];
void test_func(void) {
    int prev85 = 2;
    int prev40 = 91;
    int b80 = -50;
    int lo90 = 86;
    int acc37 = -7;
    int i;
    for (i = 0; i < 32; i++) {
        acc37 = xn[i];
        prev40 = prev40 - 1;
        prev40 = prev40 + acc37;
        b80 = prev85 + 4;
        prev40 = lo90 - 30101;
        acc37 = acc37 - 2;
        acc37 = prev85 + lo90;
        yo[i] = b80;
    }
}
int main() { test_func(); return 0; }

