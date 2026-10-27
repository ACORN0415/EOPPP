// RTPG_1424: vars=4 stmts=5
void test_func(void) {
    int b73 = 83;
    int b57 = 2682;
    int b60 = 97;
    int out32 = 6;
    int i;
    for (i = 0; i < 71; i++) {
        switch (out32) {
            case 0: b73 = 38505; break;
            case 1: b73 = 62809; break;
            default: break;
        }
        out32 = out32 + 1;
    }
}
int main() { test_func(); return 0; }

