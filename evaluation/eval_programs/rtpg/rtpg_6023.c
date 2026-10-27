// RTPG_6023: vars=3 stmts=3
int xn[64];
int yo[64];
void test_func(void) {
    int cnt26 = 7;
    int cur85 = 36;
    int hi3 = 41146;
    int *ptr = &cur85;
    int h0 = 29;
    int sv0 = 0;
    int h1 = 3;
    int sv1 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        cnt26 = xn[i];
        cur85 = cnt26 * 41;
        cur85 = cur85 + 3;
        cur85 = hi3;
        *ptr = *ptr + 5;
        yo[i] = hi3;
    }
}
int main() { test_func(); return 0; }

