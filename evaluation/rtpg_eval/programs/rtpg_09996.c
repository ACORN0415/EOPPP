int test_func(void) {
    int v0 = 2;
    int v1 = 5;
    int v2 = 63;
    int v3 = 95;
    int v4 = 43;
    int i;
    v1 = v1 - v4;
    for (i = 0; i < 8; i++) {
        v1 = v1 + v3;
    }
    if (v0 > v4) { v0 = v4; }
    return v0;
}
int main(void) { return test_func(); }
