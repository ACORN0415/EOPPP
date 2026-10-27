// RTPG_3831: vars=5 stmts=3
void test_func(void) {
    int tmp9 = 79;
    int x91 = 5;
    int y64 = 17629;
    int out21 = -3;
    int acc26 = 20;
    int i;
    for (i = 0; i < 41; i++) {
        int j;
        for (j = 0; j < 16; j++) {
        out21 = x91 + tmp9;
        x91 = x91 - 3;
        x91 = tmp9 + 42;
        }
    }
}
int main() { test_func(); return 0; }

