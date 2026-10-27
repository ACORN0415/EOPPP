// RTPG_9409: vars=9 stmts=3
int xn[32];
int yo[32];
void test_func(void) {
    int prev50 = 72;
    int tmp12 = 7;
    int prev66 = 0;
    int out83 = 38167;
    int prev37 = -21;
    int y26 = 18830;
    int a15 = -28;
    int x96 = 32348;
    int tmp84 = -12;
    int *ptr = &prev50;
    int i;
    for (i = 0; i < 32; i++) {
        x96 = xn[i];
        x96 = x96 + 5;
        out83 = out83 - 3;
        prev37 = x96;
        *ptr = *ptr + 4;
        if (x96 != -16) {
        prev50 = prev66 + prev50;
        }
        yo[i] = a15;
    }
}
int main() { test_func(); return 0; }

