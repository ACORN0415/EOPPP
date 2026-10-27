// RTPG_6220: vars=3 stmts=7
void test_func(void) {
    int acc85 = 45;
    int z41 = 93;
    int tmp64 = 3;
    int i;
    for (i = 0; i < 92; i++) {
        acc85 = acc85 - 8;
        acc85 = tmp64 - acc85;
        tmp64 = tmp64 - z41;
        z41 = tmp64 + z41;
        tmp64 = z41 + 4;
        tmp64 = z41;
        tmp64 = tmp64 - 1;
    }
}
int main() { test_func(); return 0; }

