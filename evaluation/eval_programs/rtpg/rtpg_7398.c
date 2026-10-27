// RTPG_7398: vars=7 stmts=7
int xn[32];
int yo[32];
void test_func(void) {
    int c44 = 29;
    int res10 = 59;
    int cur95 = -28;
    int x87 = 11;
    int tmp83 = 2;
    int dat58 = 5480;
    int c28 = 37;
    int i;
    for (i = 0; i < 32; i++) {
        c28 = xn[i];
        dat58 = dat58 + 3;
        cur95 = c28 + 62001;
        tmp83 = cur95;
        tmp83 = tmp83 + 5;
        tmp83 = tmp83 - 5;
        c44 = dat58 - c44;
        x87 = x87 + 4;
        yo[i] = cur95;
    }
}
int main() { test_func(); return 0; }

