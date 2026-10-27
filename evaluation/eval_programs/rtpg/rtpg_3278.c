// RTPG_3278: vars=5 stmts=5
void test_func(void) {
    int acc16 = 5;
    int v2 = 4;
    int dat33 = 33;
    int tmp36 = 31;
    int v55 = 8224;
    int i;
    for (i = 0; i < 68; i++) {
        switch (tmp36) {
            case 0: v55 = 17845; break;
            case 1: acc16 = -49; break;
            case 2: v55 = 4699; break;
            default: break;
        }
        tmp36 = tmp36 + 1;
    }
}
int main() { test_func(); return 0; }

