// RTPG_7780: vars=7 stmts=3
int xn[32];
int yo[32];
void test_func(void) {
    int acc15 = 1;
    int cur59 = 59385;
    int b46 = -18;
    int res51 = 9;
    int v81 = 6749;
    int sum99 = 23;
    int out62 = -7;
    int i;
    for (i = 0; i < 32; i++) {
        v81 = xn[i];
        acc15 = res51;
        cur59 = b46 - cur59;
        v81 = cur59;
        yo[i] = sum99;
    }
}
int main() { test_func(); return 0; }

