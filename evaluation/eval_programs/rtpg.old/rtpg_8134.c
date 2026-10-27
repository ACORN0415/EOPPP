// RTPG_8134: vars=5 stmts=11
void test_func(void) {
    int z74 = 7;
    int dat84 = 90;
    int sum76 = 10;
    int z88 = 89;
    int res69 = 23;
    int *ptr = &sum76;
    int i;
    for (i = 0; i < 66; i++) {
        sum76 = z88 - z74;
        sum76 = sum76;
        z74 = res69 + 4;
        z88 = z74 + 9;
        dat84 = dat84 + 1;
        sum76 = sum76 - res69;
        res69 = dat84 - z74;
        dat84 = dat84 - 2;
        z74 = dat84;
        dat84 = sum76 + 41;
        dat84 = sum76 - sum76;
        *ptr = *ptr + 2;
    }
}
int main() { test_func(); return 0; }

