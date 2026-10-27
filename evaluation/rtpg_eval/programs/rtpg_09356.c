int test_func(void) {
    int v0 = 37;
    int v1 = 38;
    int v2 = 3;
    int v3 = 15;
    int v4 = 13;
    int i;
    v2 = v2 - v1;
    if (v1 > v3) { v1 = v3; }
    for (i = 0; i < 8; i++) {
        v4 = v4 + v1;
    }
    return v0;
}
int main(void) { return test_func(); }
