// RTPG_5570: vars=4 stmts=8
void test_func(void) {
    int acc27 = -9;
    int hi77 = 57534;
    int y92 = -20;
    int prev36 = 1;
    int i;
    for (i = 0; i < 72; i++) {
        prev36 = acc27;
        hi77 = hi77 + 1;
        hi77 = prev36 + hi77;
        prev36 = prev36 - y92;
        y92 = prev36 + acc27;
        prev36 = y92 - acc27;
        y92 = hi77 + acc27;
        y92 = y92 - 45;
    }
}
int main() { test_func(); return 0; }

