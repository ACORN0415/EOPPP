// RTPG_815: vars=5 stmts=3
int xn[16];
int yo[16];
void test_func(void) {
    int val69 = 80;
    int res65 = 4;
    int tmp34 = 10877;
    int dat48 = 5681;
    int cur59 = 13632;
    int i;
    for (i = 0; i < 16; i++) {
        val69 = xn[i];
        dat48 = tmp34 - cur59;
        tmp34 = tmp34 + 2;
        val69 = dat48 - 5;
        yo[i] = cur59;
    }
}
int main() { test_func(); return 0; }

