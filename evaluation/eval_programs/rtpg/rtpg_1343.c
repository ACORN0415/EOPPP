// RTPG_1343: vars=4 stmts=4
void test_func(void) {
    int val11 = 7775;
    int y10 = 65083;
    int a20 = 10;
    int z34 = 45;
    int i;
    for (i = 0; i < 41; i++) {
        switch (val11) {
            case 0: val11 = -48; break;
            case 1: val11 = 59230; break;
            default: break;
        }
        val11 = val11 + 1;
    }
}
int main() { test_func(); return 0; }

