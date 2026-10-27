int test_func(void) {
    int v0 = 9;
    int v1 = 99;
    int v2 = 6;
    int v3 = 73;
    int i;
    if (v2 > v3) { v2 = v3; }
    for (i = 0; i < 13; i++) {
        v2 = v2 + v0;
    }
    v1 = v1 - v3;
    v0 = v0 + v2;
    return v0;
}
int main(void) { return test_func(); }
