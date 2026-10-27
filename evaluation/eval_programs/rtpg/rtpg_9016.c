// RTPG_9016: vars=4 stmts=10
struct Pair { int a; int b; };
void test_func(void) {
    int b0 = -45;
    int lo81 = 33422;
    int val35 = 11024;
    int tmp45 = 22408;
    struct Pair s; s.a = 12; s.b = 27490;
    int *ptr = &tmp45;
    int h0 = 1;
    int sv0 = 0;
    int h1 = 9;
    int sv1 = 0;
    int i;
    for (i = 0; i < 63; i++) {
        b0 = val35 * 71;
        b0 = lo81;
        val35 = tmp45;
        val35 = val35 - b0;
        lo81 = val35 - lo81;
        val35 = lo81 + tmp45;
        b0 = lo81 - b0;
        tmp45 = tmp45 + 15;
        lo81 = b0 * 1686;
        b0 = lo81 * 32;
        *ptr = *ptr + 4;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

