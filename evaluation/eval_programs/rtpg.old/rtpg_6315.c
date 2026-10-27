// RTPG_6315: vars=3 stmts=5
int xn[64];
int yo[64];
void test_func(void) {
    int prev74 = 10;
    int tmp37 = 6;
    int z75 = 52;
    int i;
    for (i = 0; i < 64; i++) {
        tmp37 = xn[i];
        prev74 = prev74 + 2;
        prev74 = z75 + prev74;
        z75 = z75 & prev74;
        z75 = z75 - prev74;
        tmp37 = prev74 % z75;
        if (tmp37 == -35) {
        prev74 = z75;
        }
        yo[i] = tmp37;
    }
}
int main() { test_func(); return 0; }

