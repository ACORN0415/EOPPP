// RTPG_5826: vars=8 stmts=4
enum State { FAST, SLOW, RED };
void test_func(void) {
    int v56 = 7;
    int c2 = 15;
    int v68 = 61372;
    int x57 = 80;
    int z64 = 31;
    int prev13 = 21929;
    int tmp68 = 52308;
    int out10 = 3;
    enum State st = FAST;
    int i;
    for (i = 0; i < 34; i++) {
        int j;
        for (j = 0; j < 12; j++) {
        z64 = out10;
        c2 = x57 + out10;
        z64 = z64 - 5;
        prev13 = x57 + 84;
        }
    }
}
int main() { test_func(); return 0; }

