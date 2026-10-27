// RTPG_5110: vars=6 stmts=3
int xn[32];
int yo[32];
void test_func(void) {
    int val68 = -10;
    int val42 = 29469;
    int a19 = 7;
    int x16 = 25;
    int out42 = -23;
    int val58 = 7;
    int i;
    for (i = 0; i < 32; i++) {
        a19 = xn[i];
        val42 = out42;
        x16 = out42 + out42;
        a19 = val42 + out42;
        if (a19 <= 16) {
        out42 = val58 + 831;
        }
        yo[i] = val42;
    }
}
int main() { test_func(); return 0; }

