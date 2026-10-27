// RTPG_9383: vars=5 stmts=3
int idx_arr[16];
void test_func(void) {
    int v23 = 8;
    int out20 = 55;
    int c47 = 36;
    int cnt60 = 0;
    int acc35 = 20696;
    int i;
    for (i = 0; i < 80; i++) {
        switch (cnt60) {
            case 0: out20 = 3438; break;
            case 1: c47 = -39; break;
            case 2: out20 = 39969; break;
            default: break;
        }
        cnt60 = cnt60 + 1;
    }
}
int main() { test_func(); return 0; }

