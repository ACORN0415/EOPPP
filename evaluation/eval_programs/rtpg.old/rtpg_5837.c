// RTPG_5837: vars=6 stmts=8
int xn[32];
int yo[32];
void test_func(void) {
    int acc93 = 8;
    int res15 = -12;
    int val87 = 40;
    int tmp37 = 9;
    int y64 = 0;
    int x73 = 9;
    int i;
    for (i = 0; i < 32; i++) {
        res15 = xn[i];
        val87 = res15 - 8894;
        res15 = acc93 + y64;
        res15 = y64;
        tmp37 = tmp37 + 2;
        tmp37 = acc93;
        val87 = tmp37;
        res15 = x73;
        val87 = tmp37 - val87;
        if (acc93 > 26) {
        y64 = x73 + x73;
        }
        yo[i] = res15;
    }
}
int main() { test_func(); return 0; }

