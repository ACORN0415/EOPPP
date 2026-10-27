// RTPG_8703: vars=3 stmts=4
int xn[64];
int yo[64];
void test_func(void) {
    int x72 = 11368;
    int sum95 = 3;
    int prev25 = 2;
    int i;
    for (i = 0; i < 64; i++) {
        x72 = xn[i];
        sum95 = sum95 - 4;
        sum95 = sum95 + prev25;
        x72 = prev25 - 15932;
        sum95 = x72 + sum95;
        if (x72 > 3) goto done;
        yo[i] = sum95;
    }
done:
    sum95 = 0;
}
int main() { test_func(); return 0; }

