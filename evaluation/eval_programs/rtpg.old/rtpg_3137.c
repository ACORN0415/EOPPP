// RTPG_3137: vars=8 stmts=5
void test_func(void) {
    int a87 = 30;
    int out78 = 9;
    int c94 = 2;
    float x45 = 86.91;
    int acc70 = 27;
    int z52 = 15;
    int v59 = -18;
    int prev75 = -44;
    int *ptr = &out78;
    int i;
    for (i = 0; i < 65; i++) {
        out78 = z52 + acc70;
        x45 = x45 + z52;
        z52 = z52 - 8;
        z52 = a87 % out78;
        v59 = v59 & x45;
        *ptr = *ptr + 4;
    }
}
int main() { test_func(); return 0; }

