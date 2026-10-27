int test_func(void) {
    int v0 = 13;
    int v1 = 21;
    int v2 = 90;
    int v3 = 4;
    int v4 = 62;
    int i;
    for (i = 0; i < 19; i++) {
        v1 = v1 + v1;
    }
    if (v1 > v4) { v1 = v4; }
    v4 = v4 - v2;
    return v0;
}
int main(void) { return test_func(); }
