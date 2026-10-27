int test_func(void) {
    int v0 = 88;
    int v1 = 82;
    int v2 = 60;
    int v3 = 48;
    int i;
    v3 = v3 * 5;
    for (i = 0; i < 9; i++) {
        v1 = v1 + v3;
    }
    v3 = 13;
    return v0;
}
int main(void) { return test_func(); }
