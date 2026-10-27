// RTPG_5475: vars=3 stmts=8
void test_func(void) {
    int acc85 = -9;
    int dat8 = 9;
    int z13 = 10042;
    int i;
    for (i = 0; i < 59; i++) {
        int j;
        for (j = 0; j < 6; j++) {
        dat8 = dat8 + z13;
        z13 = z13 + 1;
        z13 = acc85 - 6876;
        acc85 = z13 + acc85;
        dat8 = dat8 + 2;
        acc85 = z13;
        dat8 = acc85 + dat8;
        z13 = dat8 + dat8;
        }
    }
}
int main() { test_func(); return 0; }

