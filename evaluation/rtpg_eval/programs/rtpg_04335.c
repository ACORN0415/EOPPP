int test_func(void) {
    int v0 = 20;
    int v1 = 69;
    int v2 = 44;
    int i;
    v0 = v0 * 9;
    if (v0 > v2) { v0 = v2; }
    for (i = 0; i < 14; i++) {
        v2 = v2 + v1;
    }
    v2 = v2 / (v0 + 1);
    return v0;
}
int main(void) { return test_func(); }
