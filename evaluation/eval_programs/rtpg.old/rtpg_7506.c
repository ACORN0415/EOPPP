// RTPG_7506: vars=3 stmts=4
int xn[32];
int yo[32];
void test_func(void) {
    int tmp82 = -35;
    int acc28 = 23374;
    int prev63 = -20;
    int h0 = 12099;
    int sv0 = 0;
    int h1 = 11;
    int sv1 = 0;
    int i;
    for (i = 0; i < 7; i++) {
        switch (acc28) {
            case 0: tmp82 = -10; break;
            case 1: prev63 = 12371; break;
            case 2: acc28 = -15; break;
            default: break;
        }
        acc28 = acc28 + 1;
    }
}
int main() { test_func(); return 0; }

