int test_func(void) {
    int v0 = 18;
    int v1 = 39;
    int v2 = 84;
    int v3 = 74;
    int v4 = 79;
    int i;
    v4 = v4 * 9;
    v4 = v4 - v1;
    if (v4 > v1) { v4 = v1; }
    for (i = 0; i < 14; i++) {
        v1 = v1 + v3;
    }
    return v0;
}
int main(void) { return test_func(); }
