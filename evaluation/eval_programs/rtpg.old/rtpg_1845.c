// RTPG_1845: vars=3 stmts=12
int xn[64];
int yo[64];
void test_func(void) {
    int x15 = 7;
    int cur2 = 3151;
    int prev70 = 6;
    int i;
    for (i = 0; i < 64; i++) {
        prev70 = xn[i];
        x15 = prev70;
        prev70 = x15 + 46;
        x15 = cur2 - 12;
        cur2 = prev70 - 21901;
        x15 = prev70 - x15;
        prev70 = x15 + prev70;
        x15 = cur2 + 60710;
        cur2 = prev70 - cur2;
        cur2 = x15 - cur2;
        prev70 = cur2 + cur2;
        x15 = prev70 - cur2;
        cur2 = x15 - 10;
        if (prev70 >= 35) {
        prev70 = prev70 - 2;
        }
        yo[i] = prev70;
    }
}
int main() { test_func(); return 0; }

