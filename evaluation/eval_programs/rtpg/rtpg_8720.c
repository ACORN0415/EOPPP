// RTPG_8720: vars=4 stmts=5
void test_func(void) {
    int v54 = 31960;
    int b55 = -24;
    float x62 = 62.89;
    int acc97 = 10302;
    int i;
    for (i = 0; i < 52; i++) {
        acc97 = x62 - v54;
        acc97 = acc97 + 1;
        acc97 = acc97 + v54;
        x62 = v54 / acc97;
        b55 = x62;
        if (b55 < 29) {
        acc97 = acc97 - 1;
        }
    }
}
int main() { test_func(); return 0; }

