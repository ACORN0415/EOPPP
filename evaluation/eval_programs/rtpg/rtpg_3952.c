// RTPG_3952: vars=9 stmts=4
void test_func(void) {
    int out37 = 5;
    int lo63 = 0;
    int tmp52 = 5;
    int sum78 = -19;
    int hi53 = 1;
    int lo44 = 17673;
    int z46 = 12979;
    int prev68 = 40394;
    int tmp97 = 49;
    int *ptr = &tmp52;
    int i;
    for (i = 0; i < 83; i++) {
        tmp97 = sum78 - hi53;
        sum78 = lo63;
        lo63 = hi53 - tmp97;
        z46 = lo44 + hi53;
        *ptr = *ptr + 5;
        if (sum78 > 42) goto done;
    }
done:
    tmp97 = 0;
}
int main() { test_func(); return 0; }

