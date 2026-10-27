// RTPG_4850: vars=6 stmts=6
void test_func(void) {
    int acc50 = 61;
    int v39 = 9;
    int x19 = 1;
    int z52 = 25;
    int res71 = -35;
    int y26 = 51;
    int i;
    for (i = 0; i < 66; i++) {
        int j;
        for (j = 0; j < 16; j++) {
        v39 = x19 + y26;
        acc50 = acc50 + 2;
        v39 = res71 + 6;
        res71 = res71 + acc50;
        v39 = v39 + 5;
        v39 = z52 - 5;
        }
    }
}
int main() { test_func(); return 0; }

