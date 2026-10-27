int test_func(void) {
    int v0 = 5;
    int v1 = 39;
    int v2 = 7;
    int v3 = 9;
    int v4 = 85;
    int i;
    v4 = v4 - v0;
    v0 = v0 + v1;
    v2 = v2 * 2;
    for (i = 0; i < 11; i++) {
        v4 = v4 + v2;
    }
    return v0;
}
int main(void) { return test_func(); }
