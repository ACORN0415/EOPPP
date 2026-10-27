// RTPG_4464: vars=6 stmts=6
int xn[32];
int yo[32];
void test_func(void) {
    int b23 = 100;
    int hi16 = 61271;
    int val46 = 4;
    int acc21 = 61;
    int z38 = -28;
    int x98 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        x98 = xn[i];
        val46 = x98 + 8;
        acc21 = x98 - hi16;
        b23 = b23 + 3;
        acc21 = z38 + hi16;
        b23 = acc21;
        x98 = b23 + z38;
        if (b23 >= -45) {
        b23 = val46 - b23;
        }
        yo[i] = x98;
    }
}
int main() { test_func(); return 0; }

