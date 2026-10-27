// RTPG_6705: vars=3 stmts=7
int xn[64];
int yo[64];
void test_func(void) {
    int cnt44 = 40;
    int y14 = 10;
    int z28 = 8;
    int i;
    for (i = 0; i < 64; i++) {
        cnt44 = xn[i];
        y14 = z28 | cnt44;
        z28 = y14;
        y14 = z28;
        z28 = cnt44 + y14;
        cnt44 = cnt44 - 5;
        cnt44 = cnt44 % y14;
        z28 = cnt44 - 2;
        if (y14 < 80) {
        cnt44 = cnt44 - 2;
        }
        yo[i] = z28;
    }
}
int main() { test_func(); return 0; }

