// RTPG_2261: vars=4 stmts=3
int xn[32];
int yo[32];
void test_func(void) {
    int x48 = -46;
    int x94 = -50;
    int prev7 = 36;
    int b71 = 8;
    int *ptr = &prev7;
    int h0 = 5;
    int sv0 = 0;
    int h1 = 25;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        x94 = xn[i];
        prev7 = x94 * 47100;
        prev7 = x48 + x94;
        x48 = x48 * 70;
        *ptr = *ptr + 3;
        if (x48 == 16) {
        x94 = x48 - prev7;
        }
        yo[i] = x94;
    }
done:
    x48 = 0;
}
int main() { test_func(); return 0; }

