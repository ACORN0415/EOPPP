// RTPG_7299: vars=4 stmts=2
int xn[64];
int yo[64];
void test_func(void) {
    int sum43 = 94;
    int x45 = -50;
    int tmp36 = -22;
    int lo23 = 5;
    int i;
    for (i = 0; i < 64; i++) {
        sum43 = xn[i];
        lo23 = x45 + tmp36;
        tmp36 = tmp36 - 16657;
        yo[i] = sum43;
    }
}
int main() { test_func(); return 0; }

