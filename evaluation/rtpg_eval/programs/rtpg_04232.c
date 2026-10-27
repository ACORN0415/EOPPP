int test_func(void) {
    int v0 = 14;
    int v1 = 0;
    int v2 = 23;
    int v3 = 94;
    int v4 = 25;
    int v5 = 44;
    int i;
    v4 = 63;
    for (i = 0; i < 17; i++) {
        v4 = v4 + v3;
    }
    return v0;
}
int main(void) { return test_func(); }
