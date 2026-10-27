// RTPG_7145: vars=5 stmts=4
int xn[32];
int yo[32];
void test_func(void) {
    int hi52 = 48;
    int tmp54 = 26;
    int hi13 = 45269;
    int z74 = 2;
    int sum27 = 50;
    int i;
    for (i = 0; i < 32; i++) {
        hi13 = xn[i];
        z74 = z74 - hi52;
        z74 = hi13 + 3;
        hi13 = hi13 + 5;
        z74 = z74;
        if (tmp54 != 83) {
        hi13 = hi13 - 2;
        }
        yo[i] = hi13;
    }
}
int main() { test_func(); return 0; }

