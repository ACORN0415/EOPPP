// RTPG_6765: vars=3 stmts=4
int xn[64];
int yo[64];
void test_func(void) {
    int prev88 = 4;
    int cur94 = 0;
    int res62 = 28995;
    int i;
    for (i = 0; i < 64; i++) {
        res62 = xn[i];
        res62 = res62 - cur94;
        res62 = prev88 - cur94;
        prev88 = res62 + 81;
        cur94 = cur94 + cur94;
        if (res62 == -39) {
        cur94 = cur94 + 4;
        }
        yo[i] = prev88;
    }
}
int main() { test_func(); return 0; }

