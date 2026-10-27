// RTPG_9296: vars=3 stmts=2
int xn[32];
int yo[32];
void test_func(void) {
    int tmp81 = -24;
    float cur15 = 77.54;
    int res80 = 4;
    int *ptr = &cur15;
    int h0 = 10;
    int sv0 = 0;
    int h1 = -34;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        tmp81 = xn[i];
        tmp81 = cur15;
        cur15 = cur15 * 38;
        *ptr = *ptr + 1;
        if (tmp81 <= -21) {
        cur15 = cur15;
        }
        yo[i] = cur15;
    }
}
int main() { test_func(); return 0; }

