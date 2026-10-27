// RTPG_487: vars=7 stmts=5
int xn[32];
int yo[32];
void test_func(void) {
    float sum97 = 25.85;
    int b29 = 47616;
    int cnt38 = 59244;
    double res54 = 10.80;
    int b18 = -35;
    int val18 = -47;
    int b27 = 8;
    int i;
    for (i = 0; i < 32; i++) {
        b29 = xn[i];
        val18 = res54 - cnt38;
        res54 = b18 + sum97;
        b27 = val18 - b27;
        cnt38 = cnt38 - 1;
        val18 = res54 - val18;
        yo[i] = val18;
    }
}
int main() { test_func(); return 0; }

