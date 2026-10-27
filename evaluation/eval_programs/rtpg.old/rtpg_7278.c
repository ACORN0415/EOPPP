// RTPG_7278: vars=5 stmts=2
void test_func(void) {
    int sum43 = 60377;
    int v1 = 5;
    int prev86 = 14;
    int cnt79 = 26;
    int cnt82 = 0;
    int i;
    for (i = 0; i < 51; i++) {
        sum43 = cnt79 - cnt82;
        prev86 = prev86 - 3;
    }
}
int main() { test_func(); return 0; }

