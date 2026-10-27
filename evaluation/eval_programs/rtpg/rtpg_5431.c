// RTPG_5431: vars=3 stmts=5
void test_func(void) {
    int acc81 = 88;
    int cur36 = 2;
    int z15 = 3;
    int h0 = -3;
    int sv0 = 0;
    int h1 = 10;
    int sv1 = 0;
    int i;
    for (i = 0; i < 98; i++) {
        int j;
        for (j = 0; j < 14; j++) {
        cur36 = acc81;
        z15 = acc81 + z15;
        acc81 = z15 + 6;
        acc81 = acc81 + cur36;
        cur36 = cur36 + 1;
        }
    }
}
int main() { test_func(); return 0; }

