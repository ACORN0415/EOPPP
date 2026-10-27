int test_func(void) {
    int v0 = 92;
    int v1 = 18;
    int v2 = 99;
    int v3 = 89;
    int v4 = 79;
    int v5 = 11;
    int i;
    for (i = 0; i < 10; i++) {
        v4 = v4 + v4;
    }
    return v0;
}
int main(void) { return test_func(); }
