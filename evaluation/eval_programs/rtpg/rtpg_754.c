// RTPG_754: vars=8 stmts=10
void test_func(void) {
    int tmp32 = -45;
    int acc40 = 24656;
    int y92 = 45093;
    int y65 = 2;
    int lo21 = 35;
    int a50 = 21;
    int a26 = 45;
    int a47 = 86;
    int i;
    for (i = 0; i < 98; i++) {
        tmp32 = a50 + a50;
        y65 = lo21;
        a50 = a50 - 3;
        y65 = a50 - tmp32;
        acc40 = a50 - y92;
        a50 = y92;
        tmp32 = lo21 + acc40;
        y92 = a50 - a47;
        y92 = acc40 + 9;
        a50 = lo21 + y92;
    }
}
int main() { test_func(); return 0; }

