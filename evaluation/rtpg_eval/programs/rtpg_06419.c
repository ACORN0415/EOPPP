int test_func(void) {
    int v0 = 36;
    int v1 = 19;
    int v2 = 92;
    int i;
    v1 = v1 * 8;
    if (v1 > v0) { v1 = v0; }
    for (i = 0; i < 10; i++) {
        v1 = v1 + v1;
    }
    v0 = v0 - v2;
    return v0;
}
int main(void) { return test_func(); }
