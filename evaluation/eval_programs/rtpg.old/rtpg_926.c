// RTPG_926: vars=6 stmts=7
void test_func(void) {
    int hi87 = 49073;
    int val96 = 46;
    int v2 = 10;
    int out95 = 56;
    int z44 = 25;
    int v7 = -42;
    int *ptr = &val96;
    int i;
    for (i = 0; i < 28; i++) {
        v2 = z44 + hi87;
        v7 = v2 - z44;
        hi87 = out95 / z44;
        v2 = out95 - out95;
        val96 = v2 & v2;
        val96 = hi87 & val96;
        v2 = v7 | hi87;
        *ptr = *ptr + 1;
    }
}
int main() { test_func(); return 0; }

