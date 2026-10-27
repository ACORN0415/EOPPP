int test_func(void) {
    int v0 = 74;
    int v1 = 63;
    int v2 = 9;
    int v3 = 13;
    int v4 = 93;
    int i;
    for (i = 0; i < 5; i++) {
        v3 = v3 + v4;
    }
    v2 = v2 - v4;
    if (v0 > v1) { v0 = v1; }
    return v0;
}
int main(void) { return test_func(); }
