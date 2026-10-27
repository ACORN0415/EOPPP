// RTPG_9273: vars=3 stmts=12
int xn[32];
int yo[32];
void test_func(void) {
    int hi98 = 4;
    int out17 = 48;
    int res72 = 57856;
    int i;
    for (i = 0; i < 67; i++) {
        switch (out17) {
            case 0: out17 = 88; break;
            case 1: out17 = -7; break;
            default: break;
        }
        out17 = out17 + 1;
    }
}
int main() { test_func(); return 0; }

