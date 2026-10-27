// RTPG_4978: vars=4 stmts=3
void test_func(void) {
    int a56 = 1;
    int tmp65 = 11538;
    int prev53 = 46895;
    int lo13 = 10;
    int i;
    for (i = 0; i < 89; i++) {
        int j;
        for (j = 0; j < 11; j++) {
        prev53 = lo13;
        tmp65 = lo13 - tmp65;
        tmp65 = prev53 + 4;
        }
    }
}
int main() { test_func(); return 0; }

