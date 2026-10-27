// RTPG_3171: vars=4 stmts=5
int xn[32];
int yo[32];
void test_func(void) {
    int acc27 = -49;
    int sum76 = 62555;
    int prev37 = 7;
    int z78 = 41097;
    int i;
    for (i = 0; i < 32; i++) {
        acc27 = xn[i];
        z78 = acc27 + acc27;
        prev37 = prev37 + z78;
        acc27 = z78 | prev37;
        z78 = z78 & prev37;
        z78 = z78 + 3;
        if (acc27 != -20) {
        z78 = prev37;
        }
        yo[i] = acc27;
    }
}
int main() { test_func(); return 0; }

