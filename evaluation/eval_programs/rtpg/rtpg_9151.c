// RTPG_9151: vars=3 stmts=3
void test_func(void) {
    int prev83 = 17191;
    int v68 = 34;
    int dat4 = 57106;
    int i;
    for (i = 0; i < 48; i++) {
        switch (dat4) {
            case 0: v68 = 4; break;
            case 1: v68 = 77; break;
            default: break;
        }
        dat4 = dat4 + 1;
    }
}
int main() { test_func(); return 0; }

