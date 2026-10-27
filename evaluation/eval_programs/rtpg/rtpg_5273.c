// RTPG_5273: vars=10 stmts=3
void test_func(void) {
    int c64 = -24;
    int v68 = -34;
    int x32 = 25;
    int dat11 = 51411;
    int b88 = 4;
    int b49 = 57;
    int sum59 = 10;
    int x86 = -43;
    int y14 = 5;
    int cnt42 = 32;
    int i;
    for (i = 0; i < 28; i++) {
        switch (cnt42) {
            case 0: cnt42 = 8; break;
            case 1: b49 = 3; break;
            default: break;
        }
        cnt42 = cnt42 + 1;
    }
}
int main() { test_func(); return 0; }

