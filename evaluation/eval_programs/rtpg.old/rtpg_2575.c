// RTPG_2575: vars=3 stmts=4
void test_func(void) {
    int v5 = 24;
    int tmp4 = 82;
    int lo28 = 42067;
    int h0 = 12006;
    int sv0 = 0;
    int h1 = 10977;
    int sv1 = 0;
    int i;
    for (i = 0; i < 23; i++) {
        switch (tmp4) {
            case 0: v5 = 64221; break;
            case 1: tmp4 = 41; break;
            case 2: lo28 = 37370; break;
            case 3: tmp4 = 3; break;
            default: break;
        }
        tmp4 = tmp4 + 1;
    }
}
int main() { test_func(); return 0; }

