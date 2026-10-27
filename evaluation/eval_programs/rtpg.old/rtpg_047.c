// RTPG_47: vars=3 stmts=4
void test_func(void) {
    int val2 = 6;
    int x40 = 89;
    int hi75 = 14;
    int *ptr = &hi75;
    int h0 = 5;
    int sv0 = 0;
    int h1 = 8;
    int sv1 = 0;
    int i;
    for (i = 0; i < 57; i++) {
        switch (x40) {
            case 0: x40 = 3; break;
            case 1: hi75 = 62295; break;
            case 2: val2 = 84; break;
            case 3: x40 = 26225; break;
            default: break;
        }
        x40 = x40 + 1;
    }
}
int main() { test_func(); return 0; }

