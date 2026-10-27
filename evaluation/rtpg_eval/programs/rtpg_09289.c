int test_func(void) {
    int v0 = 66;
    int v1 = 15;
    int v2 = 9;
    int v3 = 75;
    int i;
    v3 = 92;
    if (v0 > v3) { v0 = v3; }
    for (i = 0; i < 5; i++) {
        v3 = v3 + v3;
    }
    return v0;
}
int main(void) { return test_func(); }
