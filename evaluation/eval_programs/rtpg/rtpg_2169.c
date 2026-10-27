// RTPG_2169: vars=4 stmts=3
void test_func(void) {
    int hi5 = 98;
    int lo87 = -2;
    int res71 = 34523;
    int y62 = 4;
    int i;
    for (i = 0; i < 47; i++) {
        switch (res71) {
            case 0: lo87 = 7; break;
            case 1: hi5 = 95; break;
            case 2: res71 = 44761; break;
            case 3: res71 = 80; break;
            default: break;
        }
        res71 = res71 + 1;
    }
}
int main() { test_func(); return 0; }

