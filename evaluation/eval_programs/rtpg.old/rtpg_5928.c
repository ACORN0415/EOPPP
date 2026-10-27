// RTPG_5928: vars=4 stmts=5
void test_func(void) {
    int acc96 = 9;
    int y80 = 0;
    int c79 = 72;
    int a79 = 4;
    int i;
    for (i = 0; i < 13; i++) {
        switch (c79) {
            case 0: y80 = 72; break;
            case 1: c79 = 5; break;
            case 2: a79 = 4; break;
            case 3: acc96 = 85; break;
            default: break;
        }
        c79 = c79 + 1;
    }
}
int main() { test_func(); return 0; }

