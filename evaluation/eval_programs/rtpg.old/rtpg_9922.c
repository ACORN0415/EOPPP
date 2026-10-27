// RTPG_9922: vars=4 stmts=5
void test_func(void) {
    int dat48 = 69;
    int x82 = 72;
    int x79 = 5;
    int cnt68 = 12;
    int i;
    for (i = 0; i < 31; i++) {
        switch (x82) {
            case 0: x82 = 4; break;
            case 1: x82 = 51444; break;
            default: break;
        }
        x82 = x82 + 1;
    }
}
int main() { test_func(); return 0; }

