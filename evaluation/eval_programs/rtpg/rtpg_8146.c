// RTPG_8146: vars=6 stmts=4
int xn[64];
int yo[64];
void test_func(void) {
    int out11 = 3;
    int hi20 = 58207;
    int sum85 = 4;
    int acc24 = 15;
    int lo38 = 8;
    int out52 = 9;
    int i;
    for (i = 0; i < 64; i++) {
        lo38 = xn[i];
        out11 = lo38 + out52;
        out52 = lo38 - 3;
        sum85 = sum85 + 2;
        lo38 = acc24 + out52;
        yo[i] = sum85;
    }
}
int main() { test_func(); return 0; }

