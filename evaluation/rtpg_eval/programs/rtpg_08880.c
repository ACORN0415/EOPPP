int test_func(void) {
    int v0 = 55;
    int v1 = 100;
    int v2 = 94;
    int v3 = 28;
    int i;
    v2 = v2 * 5;
    for (i = 0; i < 5; i++) {
        v1 = v1 + v3;
    }
    v2 = v2 - v1;
    return v0;
}
int main(void) { return test_func(); }
