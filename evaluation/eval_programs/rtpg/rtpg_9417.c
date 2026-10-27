// RTPG_9417: vars=6 stmts=3
int xn[64];
int yo[64];
void test_func(void) {
    double val22 = 75.05;
    int hi60 = 14;
    int out72 = 5;
    int hi55 = 50;
    int tmp67 = 13;
    int z97 = -40;
    int i;
    for (i = 0; i < 64; i++) {
        hi60 = xn[i];
        out72 = out72 + val22;
        hi55 = out72 + 57713;
        tmp67 = hi55 + val22;
        if (hi55 != -39) {
        z97 = z97 + 2;
        }
        yo[i] = z97;
    }
}
int main() { test_func(); return 0; }

