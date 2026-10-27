// RTPG_4337: vars=4 stmts=6
void test_func(void) {
    int dat36 = 32;
    int acc6 = 30;
    int tmp55 = -23;
    int tmp67 = -42;
    int h0 = 9;
    int sv0 = 0;
    int h1 = 91;
    int sv1 = 0;
    int i;
    for (i = 0; i < 68; i++) {
        int j;
        for (j = 0; j < 8; j++) {
        dat36 = dat36 - dat36;
        tmp67 = tmp55 + dat36;
        acc6 = tmp67 - tmp67;
        tmp67 = acc6 + dat36;
        acc6 = acc6 + 1;
        tmp67 = tmp55;
        }
    }
}
int main() { test_func(); return 0; }

