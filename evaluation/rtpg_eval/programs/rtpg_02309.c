int test_func(void) {
    int v0 = 5;
    int v1 = 11;
    int v2 = 92;
    int v3 = 12;
    int v4 = 89;
    int i;
    if (v4 > v2) { v4 = v2; }
    v1 = 98;
    for (i = 0; i < 10; i++) {
        v1 = v1 + v3;
    }
    return v0;
}
int main(void) { return test_func(); }
