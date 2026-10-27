// RTPG_367: vars=4 stmts=6
void test_func(void) {
    int x48 = 8;
    int a0 = 0;
    int z69 = -31;
    int prev48 = -29;
    int *ptr = &x48;
    int h0 = 1;
    int sv0 = 0;
    int h1 = -42;
    int sv1 = 0;
    int i;
    for (i = 0; i < 26; i++) {
        x48 = prev48 - prev48;
        prev48 = x48 + z69;
        x48 = prev48 + a0;
        a0 = x48;
        z69 = z69 - 1;
        prev48 = x48 * 39509;
        *ptr = *ptr + 3;
        if (z69 < -10) {
        z69 = x48 + 82;
        }
    }
}
int main() { test_func(); return 0; }

