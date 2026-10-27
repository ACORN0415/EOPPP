int test_func(void) {
    int v0 = 73;
    int v1 = 38;
    int v2 = 67;
    int v3 = 4;
    int v4 = 28;
    int i;
    if (v0 > v3) { v0 = v3; }
    v4 = v4 - v2;
    for (i = 0; i < 8; i++) {
        v4 = v4 + v4;
    }
    return v0;
}
int main(void) { return test_func(); }
