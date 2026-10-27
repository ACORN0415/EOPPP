int test_func(void) {
    int v0 = 52;
    int v1 = 35;
    int v2 = 13;
    int v3 = 74;
    int i;
    for (i = 0; i < 5; i++) {
        v1 = v1 + v1;
    }
    if (v3 > v0) { v3 = v0; }
    return v0;
}
int main(void) { return test_func(); }
