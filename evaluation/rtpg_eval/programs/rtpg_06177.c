int test_func(void) {
    int v0 = 56;
    int v1 = 85;
    int v2 = 62;
    int v3 = 23;
    int v4 = 14;
    int i;
    if (v2 > v3) { v2 = v3; }
    v4 = v4 + v3;
    for (i = 0; i < 13; i++) {
        v2 = v2 + v1;
    }
    v0 = v0 - v1;
    return v0;
}
int main(void) { return test_func(); }
