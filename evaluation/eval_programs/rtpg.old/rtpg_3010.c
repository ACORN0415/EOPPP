// RTPG_3010: vars=4 stmts=2
void test_func(void) {
    int a86 = 67;
    int res41 = 25;
    int acc43 = 54;
    int y53 = 1;
    int i;
    for (i = 0; i < 11; i++) {
        switch (acc43) {
            case 0: acc43 = -31; break;
            case 1: res41 = 2; break;
            case 2: y53 = 1; break;
            default: break;
        }
        acc43 = acc43 + 1;
    }
}
int main() { test_func(); return 0; }

