// RTPG_4876: vars=6 stmts=3
void test_func(void) {
    int prev69 = 10;
    int acc65 = 10;
    int acc75 = 91;
    int out59 = 80;
    int x46 = 51537;
    int val42 = 1;
    int *ptr = &acc65;
    int i;
    for (i = 0; i < 29; i++) {
        prev69 = prev69 + 2;
        out59 = out59 - 3;
        acc75 = out59 - x46;
        *ptr = *ptr + 3;
        if (acc65 < -8) {
        x46 = x46 - acc75;
        }
    }
}
int main() { test_func(); return 0; }

