// RTPG_9566: vars=4 stmts=9
void test_func(void) {
    int acc42 = 9;
    int dat45 = 16;
    int a48 = 45;
    int dat57 = 33;
    int i;
    for (i = 0; i < 11; i++) {
        dat45 = dat57 ^ acc42;
        dat45 = acc42 + dat57;
        a48 = acc42 - dat45;
        dat57 = a48;
        acc42 = dat45 / dat57;
        acc42 = a48 % dat45;
        acc42 = dat45 + dat57;
        acc42 = acc42 - 89;
        dat57 = dat57 - dat57;
    }
}
int main() { test_func(); return 0; }

