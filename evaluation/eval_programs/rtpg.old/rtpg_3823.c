// RTPG_3823: vars=6 stmts=7
void test_func(void) {
    int acc80 = 37465;
    int z56 = 33963;
    int cur56 = 64;
    int cur95 = 33318;
    int cur99 = 96;
    int res21 = 35;
    int i;
    for (i = 0; i < 85; i++) {
        z56 = acc80;
        acc80 = cur99 - z56;
        cur56 = z56 ^ acc80;
        cur56 = cur56 - -18;
        cur99 = cur56 - res21;
        cur95 = cur95 - res21;
        cur56 = cur56 % res21;
    }
}
int main() { test_func(); return 0; }

