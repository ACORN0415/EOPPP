// RTPG_5327: vars=5 stmts=9
int xn[16];
int yo[16];
void test_func(void) {
    int acc17 = -45;
    int tmp16 = -42;
    int v38 = 23;
    int z59 = 65049;
    int v41 = 89;
    int i;
    for (i = 0; i < 16; i++) {
        tmp16 = xn[i];
        z59 = z59 + 2;
        z59 = z59 + acc17;
        z59 = v38 + acc17;
        tmp16 = acc17 - z59;
        acc17 = acc17 + 5;
        v38 = acc17 + v41;
        v41 = z59 - v38;
        acc17 = v38 + tmp16;
        v41 = tmp16 + v38;
        if (acc17 == -4) {
        v41 = tmp16 - acc17;
        }
        yo[i] = v41;
    }
}
int main() { test_func(); return 0; }

