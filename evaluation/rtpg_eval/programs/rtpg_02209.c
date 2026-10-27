int test_func(void) {
    int v0 = 50;
    int v1 = 80;
    int v2 = 99;
    int i;
    for (i = 0; i < 16; i++) {
        v2 = v2 + v2;
    }
    if (v0 > v1) { v0 = v1; }
    v2 = v2 - v0;
    v0 = v0 % (v2 + 1);
    return v0;
}
int main(void) { return test_func(); }
