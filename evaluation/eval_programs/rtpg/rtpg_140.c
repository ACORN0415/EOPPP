// RTPG_140: vars=9 stmts=2
int xn[64];
int yo[64];
void test_func(void) {
    int cur26 = 36404;
    int x8 = 42160;
    int val42 = 77;
    int dat39 = 53009;
    int b2 = 7;
    int v81 = 0;
    int res18 = 40;
    int cur88 = 29;
    int val85 = 0;
    int *ptr = &val85;
    int i;
    for (i = 0; i < 64; i++) {
        v81 = xn[i];
        val85 = cur88 - v81;
        val42 = dat39 + v81;
        *ptr = *ptr + 4;
        yo[i] = b2;
    }
}
int main() { test_func(); return 0; }

