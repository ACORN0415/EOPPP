// RTPG_4108: vars=4 stmts=7
void test_func(void) {
    int cnt35 = 61905;
    int b55 = 3;
    int b58 = 100;
    int cnt83 = 2;
    int i;
    for (i = 0; i < 20; i++) {
        int j;
        for (j = 0; j < 10; j++) {
        cnt35 = cnt35 - 1;
        b58 = cnt83 + b58;
        b58 = b58 + 4;
        b58 = cnt35 - 68;
        cnt83 = b55 + 89;
        cnt35 = cnt83 - cnt35;
        b55 = cnt83 + cnt35;
        }
    }
}
int main() { test_func(); return 0; }

