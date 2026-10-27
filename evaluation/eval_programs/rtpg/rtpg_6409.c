// RTPG_6409: vars=3 stmts=5
int xn[64];
int yo[64];
void test_func(void) {
    int tmp37 = 10;
    int z75 = 6;
    int prev74 = 52;
    int i;
    for (i = 0; i < 64; i++) {
        z75 = xn[i];
        tmp37 = tmp37 + 2;
        tmp37 = prev74 + tmp37;
        prev74 = prev74 & tmp37;
        prev74 = prev74 - tmp37;
        z75 = tmp37 ^ z75;
        if (prev74 < 0) {
        z75 = z75 - 2;
        }
        yo[i] = tmp37;
    }
}
int main() { test_func(); return 0; }

