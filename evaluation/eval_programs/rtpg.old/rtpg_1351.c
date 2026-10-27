// RTPG_1351: vars=4 stmts=4
void test_func(void) {
    int a20 = 7775;
    int val11 = 65083;
    int y10 = 10;
    int z34 = 45;
    int i;
    for (i = 0; i < 41; i++) {
        switch (a20) {
            case 0: a20 = -48; break;
            case 1: a20 = 59230; break;
            default: break;
        }
        a20 = a20 + 1;
    }
}
int main() { test_func(); return 0; }

