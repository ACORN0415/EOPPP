// RTPG_2105: vars=6 stmts=2
void test_func(void) {
    int x89 = 51;
    int c91 = 66;
    int lo97 = 84;
    int y64 = 84;
    int y7 = 88;
    int cnt15 = 85;
    int i;
    for (i = 0; i < 15; i++) {
        x89 = x89 + 3;
        y7 = x89 % y64;
    }
}
int main() { test_func(); return 0; }

