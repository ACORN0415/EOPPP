// RTPG_5776: vars=5 stmts=5
void test_func(void) {
    int sum19 = 6;
    int lo6 = 22;
    float dat26 = 72.73;
    double cur0 = 47.76;
    int y74 = 18;
    int i;
    for (i = 0; i < 72; i++) {
        dat26 = sum19 - cur0;
        cur0 = lo6;
        lo6 = sum19 + 32;
        sum19 = y74 - dat26;
        cur0 = dat26 - cur0;
    }
}
int main() { test_func(); return 0; }

