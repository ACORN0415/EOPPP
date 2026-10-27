// RTPG_3440: vars=9 stmts=8
int xn[64];
int yo[64];
void test_func(void) {
    int prev28 = 52568;
    int lo44 = 1;
    int b13 = 10;
    int tmp26 = 4;
    int x18 = 75;
    int prev42 = 5;
    int val39 = 3;
    int v41 = 26;
    int b50 = -47;
    int i;
    for (i = 0; i < 64; i++) {
        b13 = xn[i];
        lo44 = tmp26 + prev28;
        tmp26 = v41 - prev42;
        x18 = val39;
        b13 = b13 - 3;
        b13 = val39 + val39;
        prev28 = tmp26;
        tmp26 = prev42 - val39;
        prev42 = lo44;
        yo[i] = b50;
    }
}
int main() { test_func(); return 0; }

