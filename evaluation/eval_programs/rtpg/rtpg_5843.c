// RTPG_5843: vars=8 stmts=5
void test_func(void) {
    int tmp9 = 30;
    int dat31 = 85;
    int v91 = 45;
    int lo77 = 4;
    int tmp11 = 4;
    int hi16 = 34728;
    int hi78 = 39;
    int acc71 = 13;
    int i;
    for (i = 0; i < 50; i++) {
        hi78 = v91 + acc71;
        hi16 = dat31 + hi16;
        tmp11 = tmp9 - v91;
        tmp11 = tmp11 - 4;
        hi16 = hi78 | tmp11;
        if (v91 >= 8) {
        lo77 = hi78 - dat31;
        }
    }
}
int main() { test_func(); return 0; }

