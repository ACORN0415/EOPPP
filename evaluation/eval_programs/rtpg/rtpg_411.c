// RTPG_411: vars=5 stmts=3
int xn[32];
int yo[32];
void test_func(void) {
    int hi99 = 8886;
    int c14 = 20800;
    int z15 = 47893;
    int cur21 = 2;
    int b30 = 36060;
    int i;
    for (i = 0; i < 32; i++) {
        hi99 = xn[i];
        z15 = z15 - 5;
        b30 = b30 - c14;
        b30 = b30 + cur21;
        yo[i] = cur21;
    }
}
int main() { test_func(); return 0; }

