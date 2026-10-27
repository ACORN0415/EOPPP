// RTPG_1521: vars=3 stmts=5
void test_func(void) {
    float x2 = 45.07;
    float sum39 = 48.59;
    int lo55 = 5;
    int *ptr = &lo55;
    int i;
    for (i = 0; i < 91; i++) {
        sum39 = lo55;
        sum39 = lo55 - x2;
        x2 = lo55;
        x2 = x2 - 4;
        sum39 = sum39 + x2;
        *ptr = *ptr + 5;
        if (sum39 != -30) {
        sum39 = sum39 - x2;
        }
    }
}
int main() { test_func(); return 0; }

