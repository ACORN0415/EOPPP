// RTPG_7105: vars=4 stmts=7
void test_func(void) {
    float res32 = 22.83;
    double tmp15 = 37.01;
    int hi13 = 19;
    int v87 = 35;
    int i;
    for (i = 0; i < 25; i++) {
        int j;
        for (j = 0; j < 5; j++) {
        tmp15 = v87 + 4;
        v87 = v87 + 3;
        res32 = res32 + 4;
        tmp15 = tmp15 + 1;
        res32 = res32 + 3;
        res32 = v87 + hi13;
        hi13 = hi13 - 3800;
        }
    }
}
int main() { test_func(); return 0; }

