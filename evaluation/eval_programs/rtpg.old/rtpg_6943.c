// RTPG_6943: vars=4 stmts=4
int xn[32];
int yo[32];
void test_func(void) {
    float z27 = 64.50;
    int cur84 = 2;
    int tmp40 = 8;
    double b82 = 85.60;
    int i;
    for (i = 0; i < 32; i++) {
        tmp40 = xn[i];
        z27 = z27 - 1;
        tmp40 = cur84 + 31;
        z27 = b82 + cur84;
        tmp40 = tmp40 - cur84;
        yo[i] = tmp40;
    }
}
int main() { test_func(); return 0; }

