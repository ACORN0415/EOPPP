int test_func(void) {
    int v0 = 12;
    int v1 = 56;
    int v2 = 29;
    int v3 = 98;
    int v4 = 24;
    int i;
    for (i = 0; i < 10; i++) {
        v3 = v3 + v0;
    }
    v3 = v3 - v0;
    if (v0 > v4) { v0 = v4; }
    return v0;
}
int main(void) { return test_func(); }
