// RTPG_2788: vars=5 stmts=2
void test_func(void) {
    int lo46 = 28657;
    int a16 = 19;
    int a13 = 45698;
    int acc18 = 47643;
    int cnt72 = -35;
    int i;
    for (i = 0; i < 51; i++) {
        a13 = a16 + a13;
        acc18 = lo46 + a13;
    }
}
int main() { test_func(); return 0; }

