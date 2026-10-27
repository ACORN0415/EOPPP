// RTPG_9672: vars=6 stmts=12
int xn[32];
int yo[32];
void test_func(void) {
    int c24 = -13;
    int sum45 = 36;
    int lo63 = 10004;
    int sum36 = -17;
    int x66 = 6;
    int hi34 = 67;
    int i;
    for (i = 0; i < 32; i++) {
        x66 = xn[i];
        x66 = c24 / sum36;
        x66 = x66;
        hi34 = hi34 ^ lo63;
        sum36 = hi34 % sum45;
        hi34 = c24 | lo63;
        hi34 = lo63 - lo63;
        x66 = x66 + 4;
        sum36 = lo63 + lo63;
        hi34 = x66 - c24;
        sum36 = sum36 - hi34;
        x66 = sum45 % c24;
        lo63 = lo63 - 4;
        if (sum45 > 56256) goto done;
        yo[i] = sum45;
    }
done:
    c24 = 0;
}
int main() { test_func(); return 0; }

