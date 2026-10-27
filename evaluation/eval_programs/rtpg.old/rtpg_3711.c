// RTPG_3711: vars=3 stmts=5
void test_func(void) {
    int y31 = 35765;
    int c87 = 32429;
    int c52 = 2;
    int *ptr = &c87;
    int i;
    for (i = 0; i < 41; i++) {
        switch (c87) {
            case 0: c87 = 37; break;
            case 1: c52 = 15393; break;
            default: break;
        }
        c87 = c87 + 1;
    }
}
int main() { test_func(); return 0; }

