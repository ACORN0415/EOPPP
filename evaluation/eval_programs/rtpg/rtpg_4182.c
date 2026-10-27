// RTPG_4182: vars=4 stmts=11
void test_func(void) {
    int cur89 = 80;
    int dat45 = 2;
    int cnt5 = 30;
    int cnt31 = 4;
    int i;
    for (i = 0; i < 81; i++) {
        switch (cur89) {
            case 0: cnt5 = 13646; break;
            case 1: cnt31 = 50623; break;
            case 2: dat45 = 16284; break;
            case 3: cnt5 = 48; break;
            default: break;
        }
        cur89 = cur89 + 1;
    }
}
int main() { test_func(); return 0; }

