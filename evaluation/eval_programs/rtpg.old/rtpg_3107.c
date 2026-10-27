// RTPG_3107: vars=3 stmts=5
int xn[64];
int yo[64];
void test_func(void) {
    int out29 = 91;
    float sum29 = 48.79;
    double dat72 = 29.77;
    int i;
    for (i = 0; i < 64; i++) {
        sum29 = xn[i];
        dat72 = sum29 - dat72;
        sum29 = dat72 + sum29;
        sum29 = dat72 + sum29;
        sum29 = sum29 - sum29;
        out29 = out29 - sum29;
        yo[i] = dat72;
    }
}
int main() { test_func(); return 0; }

