// RTPG_7617: vars=3 stmts=3
void test_func(void) {
    int v8 = 31;
    int acc29 = 5;
    int acc89 = -29;
    int i;
    for (i = 0; i < 66; i++) {
        switch (acc29) {
            case 0: acc89 = -15; break;
            case 1: acc89 = 0; break;
            case 2: acc29 = 2; break;
            case 3: acc29 = 9476; break;
            default: break;
        }
        acc29 = acc29 + 1;
    }
}
int main() { test_func(); return 0; }

