int test_func(void) {
    int v0 = 41;
    int v1 = 63;
    int v2 = 21;
    int v3 = 7;
    int i;
    v2 = v2 - v1;
    for (i = 0; i < 14; i++) {
        v2 = v2 + v0;
    }
    return v0;
}
int main(void) { return test_func(); }
