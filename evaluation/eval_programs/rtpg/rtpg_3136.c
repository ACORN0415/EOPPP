// RTPG_3136: vars=7 stmts=6
void test_func(void) {
    int x6 = 33858;
    int z8 = 72;
    int y68 = 48;
    int x45 = 52747;
    int hi25 = 6;
    int x2 = 3;
    int prev2 = 47425;
    int *ptr = &x2;
    int i;
    for (i = 0; i < 80; i++) {
        prev2 = prev2 - hi25;
        y68 = x45 + 8;
        x2 = z8 - x6;
        prev2 = x2;
        y68 = x2;
        prev2 = y68 + prev2;
        *ptr = *ptr + 2;
        if (hi25 != 10) {
        prev2 = y68 - prev2;
        }
    }
}
int main() { test_func(); return 0; }

