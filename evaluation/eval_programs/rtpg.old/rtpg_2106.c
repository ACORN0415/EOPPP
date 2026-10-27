// RTPG_2106: vars=3 stmts=8
int xn[64];
int yo[64];
void test_func(void) {
    int y23 = 90;
    int a32 = 38;
    int x17 = 59599;
    int i;
    for (i = 0; i < 64; i++) {
        x17 = xn[i];
        x17 = a32;
        y23 = y23 + a32;
        y23 = a32 + x17;
        x17 = a32 + x17;
        x17 = a32 + x17;
        x17 = x17;
        a32 = a32 - x17;
        x17 = a32 + 31730;
        yo[i] = x17;
    }
}
int main() { test_func(); return 0; }

