int test_func(void) {
    int v0 = 8;
    int v1 = 58;
    int v2 = 94;
    int v3 = 74;
    int v4 = 19;
    int v5 = 26;
    int i;
    for (i = 0; i < 17; i++) {
        v3 = v3 + v0;
    }
    v3 = v3 - v1;
    v3 = v3 + v3;
    return v0;
}
int main(void) { return test_func(); }
