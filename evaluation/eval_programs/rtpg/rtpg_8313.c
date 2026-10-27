// RTPG_8313: vars=4 stmts=7
int xn[64];
int yo[64];
void test_func(void) {
    int res57 = 8;
    int v51 = 68;
    int z89 = 25;
    int c35 = 9;
    int h0 = 23;
    int sv0 = 0;
    int h1 = 9;
    int sv1 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        res57 = xn[i];
        v51 = v51;
        c35 = res57 - c35;
        v51 = v51 & res57;
        z89 = res57 * 54166;
        res57 = v51 + 0;
        c35 = c35 * 3;
        z89 = z89 & v51;
        yo[i] = c35;
    }
}
int main() { test_func(); return 0; }

