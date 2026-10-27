int test_func(void) {
    int v0 = 48;
    int v1 = 85;
    int v2 = 30;
    int v3 = 75;
    int i;
    v0 = v0 + v0;
    for (i = 0; i < 7; i++) {
        v3 = v3 + v2;
    }
    if (v0 > v0) { v0 = v0; }
    v2 = v2 - v3;
    return v0;
}
int main(void) { return test_func(); }
