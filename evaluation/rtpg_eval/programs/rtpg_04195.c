int test_func(void) {
    int v0 = 79;
    int v1 = 49;
    int v2 = 78;
    int v3 = 28;
    int v4 = 82;
    int i;
    if (v3 > v4) { v3 = v4; }
    v1 = v1 - v4;
    v2 = v2 * 2;
    return v0;
}
int main(void) { return test_func(); }
