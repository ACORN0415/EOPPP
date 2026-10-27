// RTPG_6451: vars=3 stmts=4
void test_func(void) {
    int val40 = 3;
    int out37 = 50;
    int y85 = 7183;
    int i;
    for (i = 0; i < 39; i++) {
        int j;
        for (j = 0; j < 16; j++) {
        out37 = out37 - 18;
        y85 = out37 + val40;
        y85 = out37 + out37;
        out37 = y85;
        }
    }
}
int main() { test_func(); return 0; }

