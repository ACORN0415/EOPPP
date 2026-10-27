// RTPG_8276: vars=4 stmts=2
int xn[32];
int yo[32];
void test_func(void) {
    int z78 = 8;
    int v63 = 36;
    int cnt55 = 19;
    int v26 = 65304;
    int i;
    for (i = 0; i < 32; i++) {
        v63 = xn[i];
        cnt55 = cnt55 + v63;
        v63 = v63 - 4;
        yo[i] = z78;
    }
}
int main() { test_func(); return 0; }

