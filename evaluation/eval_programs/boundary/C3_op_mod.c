// BOUNDARY: operator '%'
void test_func(void) {
    int tmp33 = 8;
    int z41 = 10;
    int prev21 = 7;
    int i;
    for (i = 0; i < 13; i++) {
        tmp33 = tmp33 % prev21;
        z41 = z41 + 3;
    }
}
int main() { test_func(); return 0; }

