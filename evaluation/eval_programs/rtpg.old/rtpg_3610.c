// RTPG_3610: vars=5 stmts=5
int xn[64];
int yo[64];
void test_func(void) {
    int b45 = 7;
    int y67 = 53186;
    int b17 = 4;
    int y89 = 12095;
    int val45 = 7;
    int i;
    for (i = 0; i < 64; i++) {
        y67 = xn[i];
        val45 = val45 & b45;
        val45 = b45 + val45;
        b45 = b17 % b17;
        y67 = y67 - val45;
        b45 = b45 + 3;
        yo[i] = val45;
    }
}
int main() { test_func(); return 0; }

