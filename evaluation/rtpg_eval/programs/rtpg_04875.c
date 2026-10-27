int test_func(void) {
    int v0 = 36;
    int v1 = 8;
    int v2 = 90;
    int v3 = 74;
    int v4 = 58;
    int i;
    for (i = 0; i < 5; i++) {
        v4 = v4 + v3;
    }
    if (v3 > v1) { v3 = v1; }
    return v0;
}
int main(void) { return test_func(); }
