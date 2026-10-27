// RTPG_3965: vars=3 stmts=6
int xn[32];
int yo[32];
void test_func(void) {
    double c90 = 37.18;
    int z56 = 24944;
    float lo25 = 44.60;
    int i;
    for (i = 0; i < 32; i++) {
        z56 = xn[i];
        lo25 = z56 + c90;
        z56 = z56 - 1;
        c90 = lo25;
        z56 = z56 + z56;
        lo25 = z56 + 31678;
        lo25 = lo25 + z56;
        yo[i] = c90;
    }
}
int main() { test_func(); return 0; }

