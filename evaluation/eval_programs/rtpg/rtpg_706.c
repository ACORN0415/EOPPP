// RTPG_706: vars=3 stmts=8
void test_func(void) {
    int cnt32 = 3;
    int y47 = 1313;
    float out88 = 86.20;
    int i;
    for (i = 0; i < 78; i++) {
        out88 = cnt32;
        y47 = y47 - out88;
        y47 = out88 + cnt32;
        y47 = y47 - 1;
        cnt32 = y47 | out88;
        cnt32 = cnt32 - y47;
        cnt32 = out88 + out88;
        cnt32 = cnt32 ^ y47;
        if (cnt32 <= 10) {
        cnt32 = cnt32 - 10;
        }
    }
}
int main() { test_func(); return 0; }

