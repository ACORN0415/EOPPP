// RTPG_6795: vars=3 stmts=12
void test_func(void) {
    int res0 = 51;
    int lo59 = 38;
    int acc75 = 45536;
    int i;
    for (i = 0; i < 40; i++) {
        switch (res0) {
            case 0: acc75 = 91; break;
            case 1: res0 = 12; break;
            default: break;
        }
        res0 = res0 + 1;
    }
}
int main() { test_func(); return 0; }

