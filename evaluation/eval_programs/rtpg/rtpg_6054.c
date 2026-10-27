// RTPG_6054: vars=9 stmts=5
void test_func(void) {
    int v56 = 9;
    int res43 = 88;
    int x78 = 9;
    int b29 = 81;
    int sum12 = 12000;
    int tmp21 = 1;
    int cnt56 = 30645;
    int prev22 = 23882;
    int acc51 = 47877;
    int i;
    for (i = 0; i < 51; i++) {
        v56 = cnt56;
        cnt56 = acc51 + tmp21;
        acc51 = prev22;
        tmp21 = res43;
        cnt56 = sum12 + cnt56;
    }
}
int main() { test_func(); return 0; }

