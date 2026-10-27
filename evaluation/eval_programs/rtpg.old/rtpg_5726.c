// RTPG_5726: vars=8 stmts=4
enum State { FAST, SLOW, RED };
void test_func(void) {
    int x57 = 7;
    int v68 = 15;
    int z64 = 61372;
    int prev13 = 80;
    int out10 = 31;
    int tmp68 = 21929;
    int c2 = 52308;
    int v56 = 3;
    enum State st = FAST;
    int i;
    for (i = 0; i < 34; i++) {
        int j;
        for (j = 0; j < 12; j++) {
        out10 = v56;
        v68 = prev13 + v56;
        out10 = out10 - 5;
        tmp68 = prev13 + 84;
        }
    }
}
int main() { test_func(); return 0; }

