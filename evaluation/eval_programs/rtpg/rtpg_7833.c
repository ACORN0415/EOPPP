// RTPG_7833: vars=4 stmts=2
int xn[64];
int yo[64];
void test_func(void) {
    int tmp34 = 55123;
    int acc98 = -17;
    int dat46 = 12544;
    int acc72 = 56372;
    int i;
    for (i = 0; i < 64; i++) {
        acc98 = xn[i];
        acc72 = acc72 - 3;
        dat46 = acc72 / dat46;
        yo[i] = tmp34;
    }
}
int main() { test_func(); return 0; }

