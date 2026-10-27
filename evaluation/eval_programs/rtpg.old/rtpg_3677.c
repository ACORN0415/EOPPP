// RTPG_3677: vars=7 stmts=6
void test_func(void) {
    int acc25 = 90;
    int cur83 = 40;
    int c16 = 2;
    int lo79 = 46;
    int c70 = -34;
    int a68 = -7;
    int v70 = 59343;
    int i;
    for (i = 0; i < 10; i++) {
        v70 = acc25;
        c16 = cur83;
        a68 = a68 + 1;
        acc25 = v70 - 18146;
        c16 = c16 - 3;
        c16 = a68 - cur83;
        if (acc25 != 50) {
        acc25 = cur83 - 5;
        }
    }
}
int main() { test_func(); return 0; }

