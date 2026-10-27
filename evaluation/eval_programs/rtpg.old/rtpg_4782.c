// RTPG_4782: vars=6 stmts=6
void test_func(void) {
    int v39 = 61;
    int res71 = 9;
    int y26 = 1;
    int x19 = 25;
    int z52 = -35;
    int acc50 = 51;
    int i;
    for (i = 0; i < 66; i++) {
        int j;
        for (j = 0; j < 16; j++) {
        res71 = y26 + acc50;
        v39 = v39 + 2;
        res71 = z52 + 6;
        z52 = z52 + v39;
        res71 = res71 + 5;
        res71 = x19 - 5;
        }
    }
}
int main() { test_func(); return 0; }

