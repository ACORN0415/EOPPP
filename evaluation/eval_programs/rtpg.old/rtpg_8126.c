// RTPG_8126: vars=3 stmts=2
void test_func(void) {
    int acc0 = 82;
    int tmp94 = 8;
    int dat64 = 63686;
    int i;
    for (i = 0; i < 57; i++) {
        switch (tmp94) {
            case 0: acc0 = 6; break;
            case 1: acc0 = 4; break;
            default: break;
        }
        tmp94 = tmp94 + 1;
    }
}
int main() { test_func(); return 0; }

