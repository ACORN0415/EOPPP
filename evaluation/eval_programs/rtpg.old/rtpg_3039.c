// RTPG_3039: vars=3 stmts=5
int xn[64];
int yo[64];
void test_func(void) {
    int z30 = 86;
    int tmp94 = 6;
    int v80 = 17;
    int i;
    for (i = 0; i < 64; i++) {
        z30 = xn[i];
        v80 = z30 + v80;
        tmp94 = tmp94 + 1;
        v80 = tmp94;
        v80 = z30 + v80;
        v80 = v80 - z30;
        yo[i] = v80;
    }
}
int main() { test_func(); return 0; }

