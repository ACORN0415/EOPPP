// RTPG_6691: vars=10 stmts=4
void test_func(void) {
    int v1 = 29;
    int v88 = 30;
    int tmp67 = 57709;
    int tmp11 = -50;
    int x85 = 40;
    int v37 = 6;
    int v50 = 3047;
    int res92 = 4;
    int c4 = 0;
    int out99 = 11;
    int i;
    for (i = 0; i < 34; i++) {
        switch (tmp67) {
            case 0: res92 = 42; break;
            case 1: v1 = 44; break;
            default: break;
        }
        tmp67 = tmp67 + 1;
    }
}
int main() { test_func(); return 0; }

