// RTPG_1164: vars=4 stmts=2
int xn[64];
int yo[64];
void test_func(void) {
    int v61 = 6;
    int val74 = 30029;
    int b72 = 25555;
    int b69 = 8;
    int i;
    for (i = 0; i < 64; i++) {
        b72 = xn[i];
        v61 = val74 - b72;
        v61 = b69 + v61;
        if (b69 <= -7) {
        v61 = v61 + 2;
        }
        yo[i] = val74;
    }
}
int main() { test_func(); return 0; }

