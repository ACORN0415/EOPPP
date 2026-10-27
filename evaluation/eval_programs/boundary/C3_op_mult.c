// BOUNDARY: operator '*'
void test_func(void) {
    int res11 = 84;
    int z59 = 47;
    int acc15 = 55;
    int i;
    for (i = 0; i < 21; i++) {
        acc15 = acc15 * res11;
        acc15 = res11 + z59;
    }
}
int main() { test_func(); return 0; }

