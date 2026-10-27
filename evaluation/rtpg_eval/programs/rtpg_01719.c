int test_func(void) {
    int v0 = 79;
    int v1 = 31;
    int v2 = 2;
    int v3 = 0;
    int v4 = 19;
    int v5 = 7;
    int i;
    if (v1 > v2) { v1 = v2; }
    for (i = 0; i < 8; i++) {
        v0 = v0 + v3;
    }
    v5 = v5 - v4;
    v2 = v2 + v4;
    return v0;
}
int main(void) { return test_func(); }
