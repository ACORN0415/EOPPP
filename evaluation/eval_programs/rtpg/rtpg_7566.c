// RTPG_7566: vars=5 stmts=2
void test_func(void) {
    int z7 = 10;
    int cnt50 = -7;
    int tmp55 = 17;
    int out83 = 35;
    int cnt70 = 83;
    int *ptr = &out83;
    int i;
    for (i = 0; i < 23; i++) {
        out83 = tmp55 - cnt70;
        tmp55 = out83 - 60936;
        *ptr = *ptr + 3;
    }
}
int main() { test_func(); return 0; }

