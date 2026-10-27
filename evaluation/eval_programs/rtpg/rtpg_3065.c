// RTPG_3065: vars=3 stmts=3
int xn[32];
int yo[32];
void test_func(void) {
    int out11 = 17477;
    int out76 = 32725;
    int out19 = 2;
    int i;
    for (i = 0; i < 32; i++) {
        out19 = xn[i];
        out19 = out11;
        out76 = out76;
        out11 = out76 + out19;
        if (out76 != -39) {
        out19 = out76 - out19;
        }
        yo[i] = out11;
    }
}
int main() { test_func(); return 0; }

