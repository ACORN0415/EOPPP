// RTPG_4302: vars=6 stmts=5
int xn[32];
int yo[32];
void test_func(void) {
    int a63 = 37;
    int val3 = 40;
    int lo85 = 45036;
    int val64 = 6;
    int val16 = 21139;
    int lo31 = 1;
    int i;
    for (i = 0; i < 97; i++) {
        switch (a63) {
            case 0: val3 = 9; break;
            case 1: val64 = 3; break;
            default: break;
        }
        a63 = a63 + 1;
    }
}
int main() { test_func(); return 0; }

