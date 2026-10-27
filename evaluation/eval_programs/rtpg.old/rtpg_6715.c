// RTPG_6715: vars=3 stmts=12
void test_func(void) {
    int acc75 = 51;
    int lo59 = 38;
    int res0 = 45536;
    int i;
    for (i = 0; i < 40; i++) {
        switch (acc75) {
            case 0: res0 = 91; break;
            case 1: acc75 = 12; break;
            default: break;
        }
        acc75 = acc75 + 1;
    }
}
int main() { test_func(); return 0; }

