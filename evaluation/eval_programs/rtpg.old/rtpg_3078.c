// RTPG_3078: vars=9 stmts=5
void test_func(void) {
    int val92 = -44;
    int c19 = 36;
    int cur25 = 37513;
    int sum93 = 2;
    int dat82 = 7;
    int prev92 = 4;
    int acc57 = 3;
    int acc52 = 10;
    int lo60 = 7;
    int *ptr = &val92;
    int i;
    for (i = 0; i < 23; i++) {
        switch (lo60) {
            case 0: acc57 = 8; break;
            case 1: sum93 = 11; break;
            case 2: acc57 = 9; break;
            default: break;
        }
        lo60 = lo60 + 1;
    }
}
int main() { test_func(); return 0; }

