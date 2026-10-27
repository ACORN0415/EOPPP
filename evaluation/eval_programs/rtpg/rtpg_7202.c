// RTPG_7202: vars=6 stmts=2
void test_func(void) {
    int c32 = 10;
    int acc96 = 23521;
    int cur75 = 82;
    int acc59 = 26;
    int lo60 = 67;
    int cnt91 = 9;
    int i;
    for (i = 0; i < 12; i++) {
        switch (lo60) {
            case 0: acc96 = 60476; break;
            case 1: lo60 = 6; break;
            default: break;
        }
        lo60 = lo60 + 1;
    }
}
int main() { test_func(); return 0; }

