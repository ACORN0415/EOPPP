// RTPG_1552: vars=4 stmts=2
int xn[64];
int yo[64];
void test_func(void) {
    int v76 = 82;
    int lo48 = 6;
    int prev46 = 56;
    int tmp64 = 30767;
    int i;
    for (i = 0; i < 80; i++) {
        switch (tmp64) {
            case 0: tmp64 = 0; break;
            case 1: tmp64 = 0; break;
            case 2: prev46 = 7; break;
            default: break;
        }
        tmp64 = tmp64 + 1;
    }
}
int main() { test_func(); return 0; }

