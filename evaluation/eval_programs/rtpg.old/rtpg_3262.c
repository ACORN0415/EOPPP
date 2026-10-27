// RTPG_3262: vars=4 stmts=5
int xn[16];
int yo[16];
void test_func(void) {
    int res34 = 4;
    int x36 = 23;
    int v29 = 47;
    int sum66 = 57051;
    int h0 = 32950;
    int sv0 = 0;
    int h1 = 6;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        x36 = xn[i];
        x36 = res34 ^ x36;
        sum66 = x36 - v29;
        v29 = res34 - -32;
        v29 = v29;
        sum66 = sum66 - 2;
        if (v29 >= 9) {
        x36 = x36 + 1;
        }
        yo[i] = x36;
    }
}
int main() { test_func(); return 0; }

