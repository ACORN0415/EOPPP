// RTPG_76: vars=6 stmts=4
void test_func(void) {
    int acc64 = 7;
    int prev55 = 8;
    int cur54 = 39;
    int res56 = 2;
    int a17 = 781;
    int cur59 = 8;
    int i;
    for (i = 0; i < 43; i++) {
        a17 = cur59 ^ acc64;
        cur59 = cur54 | a17;
        acc64 = cur59 + cur59;
        prev55 = prev55 | a17;
    }
}
int main() { test_func(); return 0; }

