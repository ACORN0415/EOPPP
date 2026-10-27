// RTPG_8309: vars=3 stmts=5
void test_func(void) {
    int c48 = 35;
    int tmp26 = 46071;
    int prev98 = 56730;
    int h0 = 0;
    int sv0 = 0;
    int h1 = 9;
    int sv1 = 0;
    int i;
    for (i = 0; i < 67; i++) {
        prev98 = tmp26;
        prev98 = tmp26 - prev98;
        c48 = c48 - 77;
        prev98 = tmp26;
        prev98 = prev98 + 3;
    }
}
int main() { test_func(); return 0; }

