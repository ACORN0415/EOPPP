// RTPG_3330: vars=3 stmts=5
int xn[32];
int yo[32];
void test_func(void) {
    int val68 = 80;
    int cnt59 = 53879;
    int tmp81 = 18;
    int i;
    for (i = 0; i < 32; i++) {
        tmp81 = xn[i];
        cnt59 = val68 - cnt59;
        val68 = tmp81 + val68;
        tmp81 = cnt59 + 28;
        val68 = val68 - cnt59;
        val68 = cnt59 - 84;
        if (tmp81 == -21) {
        val68 = val68;
        }
        yo[i] = cnt59;
    }
}
int main() { test_func(); return 0; }

