// RTPG_9313: vars=3 stmts=5
void test_func(void) {
    int lo41 = 45;
    int tmp99 = 7;
    int res18 = 30891;
    int i;
    for (i = 0; i < 17; i++) {
        lo41 = lo41 + 3;
        tmp99 = lo41 + 40;
        tmp99 = lo41 + 3781;
        tmp99 = tmp99 & tmp99;
        lo41 = lo41 + 3;
        if (res18 >= -19) {
        tmp99 = lo41 - -5;
        }
    }
}
int main() { test_func(); return 0; }

