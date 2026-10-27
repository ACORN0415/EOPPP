// RTPG_5953: vars=9 stmts=5
void test_func(void) {
    int b29 = 9;
    int acc51 = 88;
    int tmp21 = 9;
    int cnt56 = 81;
    int x78 = 12000;
    int res43 = 1;
    int v56 = 30645;
    int sum12 = 23882;
    int prev22 = 47877;
    int i;
    for (i = 0; i < 51; i++) {
        b29 = v56;
        v56 = prev22 + res43;
        prev22 = sum12;
        res43 = acc51;
        v56 = x78 + v56;
    }
}
int main() { test_func(); return 0; }

