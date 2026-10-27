int test_func(void) {
    int v0 = 12;
    int v1 = 10;
    int v2 = 35;
    int v3 = 53;
    int i;
    if (v1 > v2) { v1 = v2; }
    for (i = 0; i < 14; i++) {
        v2 = v2 + v1;
    }
    return v0;
}
int main(void) { return test_func(); }
