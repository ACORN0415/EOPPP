// RTPG_4839: vars=8 stmts=6
int xn[32];
int yo[32];
void test_func(void) {
    double val47 = 84.32;
    double b42 = 83.59;
    float tmp40 = 16.77;
    float v55 = 29.22;
    double prev76 = 64.08;
    int z28 = 24585;
    int y84 = 97;
    int res40 = 14;
    int i;
    for (i = 0; i < 32; i++) {
        z28 = xn[i];
        b42 = tmp40 + y84;
        tmp40 = tmp40 - 4;
        y84 = tmp40 - 44;
        b42 = prev76;
        y84 = y84 - 1;
        prev76 = b42 + y84;
        if (prev76 != 51) {
        y84 = y84 + 4;
        }
        yo[i] = z28;
    }
}
int main() { test_func(); return 0; }

