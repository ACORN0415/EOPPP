// RTPG_6527: vars=3 stmts=4
void test_func(void) {
    int v49 = 44;
    int lo53 = 32;
    int tmp98 = 4;
    int *ptr = &lo53;
    int i;
    for (i = 0; i < 6; i++) {
        switch (tmp98) {
            case 0: tmp98 = 48; break;
            case 1: lo53 = 52; break;
            case 2: lo53 = 3; break;
            default: break;
        }
        tmp98 = tmp98 + 1;
    }
}
int main() { test_func(); return 0; }

