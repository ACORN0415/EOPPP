// RTPG_5010: vars=6 stmts=4
void test_func(void) {
    int cur42 = 53;
    int b68 = 2;
    int cur20 = 15841;
    int lo45 = 40;
    int lo99 = 15;
    int x65 = 10;
    int i;
    for (i = 0; i < 70; i++) {
        switch (cur20) {
            case 0: lo99 = 10; break;
            case 1: cur42 = 9; break;
            case 2: b68 = 10; break;
            default: break;
        }
        cur20 = cur20 + 1;
    }
}
int main() { test_func(); return 0; }

