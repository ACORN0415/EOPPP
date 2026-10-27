int test_func(void) {
    int v0 = 61;
    int v1 = 90;
    int v2 = 50;
    int i;
    for (i = 0; i < 17; i++) {
        v1 = v1 + v2;
    }
    v2 = v2 - v0;
    v1 = 12;
    if (v2 > v2) { v2 = v2; }
    return v0;
}
int main(void) { return test_func(); }
