int test_func(void) {
    int v0 = 80;
    int v1 = 9;
    int v2 = 13;
    int v3 = 17;
    int v4 = 21;
    int v5 = 18;
    int i;
    v5 = v5 + v0;
    v4 = v4 - v3;
    for (i = 0; i < 6; i++) {
        v2 = v2 + v2;
    }
    return v0;
}
int main(void) { return test_func(); }
