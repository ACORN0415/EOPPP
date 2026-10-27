// RTPG_9944: vars=5 stmts=9
void test_func(void) {
    int hi80 = 50833;
    int cur85 = 90;
    int cnt33 = 10;
    int cur34 = 29255;
    int res80 = 16429;
    int i;
    for (i = 0; i < 86; i++) {
        cnt33 = cnt33 - 3;
        cur34 = cur34 + 3;
        hi80 = cur85;
        cur34 = cnt33;
        cnt33 = cur85 + hi80;
        cur85 = cur85 + 3;
        hi80 = res80;
        cnt33 = cnt33 + res80;
        res80 = cnt33 % cur85;
        if (cur85 < 68) {
        hi80 = cur85 - 17;
        }
    }
}
int main() { test_func(); return 0; }

