// RTPG_7694: vars=4 stmts=5
void test_func(void) {
    int c26 = 71;
    int hi68 = -50;
    int tmp28 = 1;
    int hi96 = 82;
    int i;
    for (i = 0; i < 98; i++) {
        switch (c26) {
            case 0: tmp28 = 3; break;
            case 1: tmp28 = 4; break;
            case 2: hi68 = 87; break;
            default: break;
        }
        c26 = c26 + 1;
    }
}
int main() { test_func(); return 0; }

