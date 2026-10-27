// RTPG_5608: vars=9 stmts=10
int xn[32];
int yo[32];
void test_func(void) {
    int v97 = -28;
    int v22 = 1;
    int b32 = 10;
    int x86 = 32958;
    int a84 = 7;
    int a94 = 82;
    int v24 = 27374;
    int cur28 = 66;
    int prev20 = 56675;
    int h0 = 1;
    int sv0 = 0;
    int h1 = 53;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        a94 = xn[i];
        cur28 = v97;
        a84 = v24 * 52231;
        v24 = v22;
        cur28 = cur28 - 4;
        a94 = prev20 - x86;
        prev20 = v22 - 26;
        v24 = b32 * 53;
        v97 = cur28 - v24;
        prev20 = b32 * 16;
        prev20 = b32 + 39561;
        yo[i] = a94;
    }
}
int main() { test_func(); return 0; }

