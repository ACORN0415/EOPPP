int test_func(void) {
    int v0 = 13;
    int v1 = 85;
    int v2 = 17;
    int v3 = 43;
    int v4 = 23;
    int v5 = 54;
    int i;
    for (i = 0; i < 6; i++) {
        v2 = v2 + v1;
    }
    v1 = v1 - v2;
    return v0;
}
int main(void) { return test_func(); }
