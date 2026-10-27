int test_func(void) {
    int v0 = 7;
    int v1 = 6;
    int v2 = 98;
    int v3 = 11;
    int v4 = 71;
    int i;
    for (i = 0; i < 14; i++) {
        v0 = v0 + v2;
    }
    v1 = v1 + v4;
    if (v3 > v4) { v3 = v4; }
    return v0;
}
int main(void) { return test_func(); }
