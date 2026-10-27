int test_func(void) {
    int v0 = 93;
    int v1 = 80;
    int v2 = 2;
    int v3 = 84;
    int i;
    v2 = v2 * 3;
    v1 = 76;
    for (i = 0; i < 10; i++) {
        v2 = v2 + v3;
    }
    return v0;
}
int main(void) { return test_func(); }
