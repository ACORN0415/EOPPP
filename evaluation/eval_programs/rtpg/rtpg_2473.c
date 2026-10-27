// RTPG_2473: vars=5 stmts=5
void test_func(void) {
    int x57 = 4;
    int c42 = 43973;
    int v58 = -28;
    int v38 = 21;
    int lo41 = 48354;
    int i;
    for (i = 0; i < 18; i++) {
        v58 = x57 - 73;
        v38 = v58;
        v38 = x57;
        c42 = c42 + 2;
        lo41 = lo41 - 3;
    }
}
int main() { test_func(); return 0; }

