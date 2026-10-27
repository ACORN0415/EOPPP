int test_func(void) {
    int v0 = 49;
    int v1 = 51;
    int v2 = 34;
    int v3 = 39;
    int v4 = 52;
    int v5 = 23;
    int i;
    for (i = 0; i < 11; i++) {
        v3 = v3 + v2;
    }
    v2 = v2 * 7;
    v5 = v5 - v0;
    return v0;
}
int main(void) { return test_func(); }
