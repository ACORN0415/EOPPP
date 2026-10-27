int test_func(void) {
    int v0 = 62;
    int v1 = 73;
    int v2 = 25;
    int v3 = 65;
    int i;
    if (v0 > v2) { v0 = v2; }
    v2 = 1;
    for (i = 0; i < 20; i++) {
        v2 = v2 + v2;
    }
    v3 = v3 * 4;
    return v0;
}
int main(void) { return test_func(); }
