// RTPG_9726: vars=5 stmts=9
void test_func(void) {
    int res80 = 50833;
    int cur85 = 90;
    int cur34 = 10;
    int hi80 = 29255;
    int cnt33 = 16429;
    int i;
    for (i = 0; i < 86; i++) {
        cur34 = cur34 - 3;
        hi80 = hi80 + 3;
        res80 = cur85;
        hi80 = cur34;
        cur34 = cur85 + res80;
        cur85 = cur85 + 3;
        res80 = cnt33;
        cur34 = cur34 + cnt33;
        cnt33 = cur34 % cur85;
        if (cur85 < 68) {
        res80 = cur85 - 17;
        }
    }
done:
    cur34 = 0;
}
int main() { test_func(); return 0; }

