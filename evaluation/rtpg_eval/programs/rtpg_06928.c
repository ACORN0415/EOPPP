int test_func(void) {
    int v0 = 0;
    int v1 = 71;
    int v2 = 96;
    int v3 = 9;
    int v4 = 23;
    int v5 = 100;
    int i;
    v4 = v4 + v2;
    for (i = 0; i < 13; i++) {
        v2 = v2 + v0;
    }
    v0 = v0 - v3;
    return v0;
}
int main(void) { return test_func(); }
