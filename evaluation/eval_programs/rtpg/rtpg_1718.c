// RTPG_1718: vars=3 stmts=6
int xn[32];
int yo[32];
void test_func(void) {
    int b7 = 50344;
    int acc43 = 1;
    int acc98 = 39978;
    int i;
    for (i = 0; i < 32; i++) {
        b7 = xn[i];
        acc43 = acc43 - 1;
        b7 = b7 - 30885;
        acc43 = acc43 + 5;
        acc98 = acc98;
        acc98 = acc98 + 2;
        acc98 = acc43 + b7;
        yo[i] = b7;
    }
}
int main() { test_func(); return 0; }

